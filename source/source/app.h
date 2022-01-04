#pragma once
#include<iostream>
#include"./user/user.h"
#include "FormTopicVocabulary.h"
#include "FormHome.h"
#include "FormTopicGrammar.h"
#include"./game/game.h"
#include"FormDictionary.h"
#include"./dictionary/dictionary.h"
#include"FormGame.h"
#include"./exam/exam.h"
#include"FormAllExam.h"

namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for app
	/// </summary>



	public ref class app : public System::Windows::Forms::Form
	{
	public:


		app(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FormHome^ formHome = gcnew FormHome();
			openChildForm(formHome);

		}

		app(Json::Value obj) {



			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FormHome^ formHome = gcnew FormHome();
			openChildForm(formHome);

			me = new User(obj);
			this->labelName->Text = L"Name : " + gcnew System::String(me->getUserName().c_str());
			this->labelScore->Text = L"Score : " + gcnew System::String(std::to_string(me->score).c_str());


			appTopics = new Topic("../../database/");
			appTopics->initTopics("../../database/", obj);

			appDictionary = new dict();
			appDictionary->initDictionary(obj["dictionary"]);

			EnToVi* appEnToVi = (EnToVi*)appDictionary->getChildren()[0];
			ViToEn* appViToEn = (ViToEn*)appDictionary->getChildren()[1];
			itemEnToVi = importData(appEnToVi->_dict, "../../database/Vocabulary/vocabulary.json");
			itemViToEn = importData(appViToEn->_dict, "../../database/Vocabulary/Word_VN.json");

			appGames = new Game();
			appGames->initGame(appTopics->getChildren(), appEnToVi, obj["game"]);

			appExams = new Exam*[10];

			for (int i = 0; i < 2; ++i) {
				appExams[i] = new Exam("../../database/", i + 1);
			}
			
			for (int i = 2; i < 10; ++i) {
				appExams[i] = new Exam();
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~app()
		{
			if (components)
			{
				delete components;
			}



		}
	private: User* me;
	private: Topic* appTopics;
	private: Game* appGames;
	private: dict* appDictionary;
	private: Exam** appExams;
	private: cli::array<System::String^>^ itemEnToVi;
	private: cli::array<System::String^>^ itemViToEn;

	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ btnVocabulary;
	private: System::Windows::Forms::Button^ btnGrammar;
	private: System::Windows::Forms::Button^ btnDictionary;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ options;
	private: System::Windows::Forms::Button^ btnExam;

	private: System::Windows::Forms::Panel^ inforUser;
	private: System::Windows::Forms::Button^ btnHome;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelApp;
	private: System::Windows::Forms::Panel^ panelLabel;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::Button^ btnGame;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::Label^ labelName;




	protected:

	protected:

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(app::typeid));
			   this->btnVocabulary = (gcnew System::Windows::Forms::Button());
			   this->btnGrammar = (gcnew System::Windows::Forms::Button());
			   this->btnDictionary = (gcnew System::Windows::Forms::Button());
			   this->btnExit = (gcnew System::Windows::Forms::Button());
			   this->options = (gcnew System::Windows::Forms::Panel());
			   this->btnExam = (gcnew System::Windows::Forms::Button());
			   this->btnGame = (gcnew System::Windows::Forms::Button());
			   this->btnHome = (gcnew System::Windows::Forms::Button());
			   this->inforUser = (gcnew System::Windows::Forms::Panel());
			   this->labelApp = (gcnew System::Windows::Forms::Label());
			   this->panelLabel = (gcnew System::Windows::Forms::Panel());
			   this->panelContent = (gcnew System::Windows::Forms::Panel());
			   this->labelName = (gcnew System::Windows::Forms::Label());
			   this->labelScore = (gcnew System::Windows::Forms::Label());
			   this->options->SuspendLayout();
			   this->inforUser->SuspendLayout();
			   this->panelLabel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // btnVocabulary
			   // 
			   this->btnVocabulary->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnVocabulary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVocabulary.Image")));
			   this->btnVocabulary->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnVocabulary->Location = System::Drawing::Point(0, 287);
			   this->btnVocabulary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnVocabulary->Name = L"btnVocabulary";
			   this->btnVocabulary->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			   this->btnVocabulary->Size = System::Drawing::Size(312, 131);
			   this->btnVocabulary->TabIndex = 2;
			   this->btnVocabulary->Text = L"  Vocabulary";
			   this->btnVocabulary->UseVisualStyleBackColor = true;
			   this->btnVocabulary->Click += gcnew System::EventHandler(this, &app::btnVocabulary_Click);
			   // 
			   // btnGrammar
			   // 
			   this->btnGrammar->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnGrammar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGrammar.Image")));
			   this->btnGrammar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnGrammar->Location = System::Drawing::Point(0, 418);
			   this->btnGrammar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnGrammar->Name = L"btnGrammar";
			   this->btnGrammar->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			   this->btnGrammar->Size = System::Drawing::Size(312, 131);
			   this->btnGrammar->TabIndex = 2;
			   this->btnGrammar->Text = L"Grammar";
			   this->btnGrammar->UseVisualStyleBackColor = true;
			   this->btnGrammar->Click += gcnew System::EventHandler(this, &app::btnGrammar_Click);
			   // 
			   // btnDictionary
			   // 
			   this->btnDictionary->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnDictionary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDictionary.Image")));
			   this->btnDictionary->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnDictionary->Location = System::Drawing::Point(0, 680);
			   this->btnDictionary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnDictionary->Name = L"btnDictionary";
			   this->btnDictionary->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			   this->btnDictionary->Size = System::Drawing::Size(312, 131);
			   this->btnDictionary->TabIndex = 2;
			   this->btnDictionary->Text = L"Dictionary";
			   this->btnDictionary->UseVisualStyleBackColor = true;
			   this->btnDictionary->Click += gcnew System::EventHandler(this, &app::btnDictionary_Click);
			   // 
			   // btnExit
			   // 
			   this->btnExit->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			   this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnExit->Location = System::Drawing::Point(0, 942);
			   this->btnExit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnExit->Name = L"btnExit";
			   this->btnExit->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			   this->btnExit->Size = System::Drawing::Size(312, 131);
			   this->btnExit->TabIndex = 2;
			   this->btnExit->Text = L"Exit";
			   this->btnExit->UseVisualStyleBackColor = true;
			   this->btnExit->Click += gcnew System::EventHandler(this, &app::btnExit_Click);
			   // 
			   // options
			   // 
			   this->options->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->options->Controls->Add(this->labelScore);
			   this->options->Controls->Add(this->btnExit);
			   this->options->Controls->Add(this->btnExam);
			   this->options->Controls->Add(this->btnDictionary);
			   this->options->Controls->Add(this->btnGame);
			   this->options->Controls->Add(this->btnGrammar);
			   this->options->Controls->Add(this->btnVocabulary);
			   this->options->Controls->Add(this->btnHome);
			   this->options->Controls->Add(this->inforUser);
			   this->options->Dock = System::Windows::Forms::DockStyle::Left;
			   this->options->Location = System::Drawing::Point(7, 7);
			   this->options->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->options->Name = L"options";
			   this->options->Size = System::Drawing::Size(312, 1248);
			   this->options->TabIndex = 3;
			   // 
			   // btnExam
			   // 
			   this->btnExam->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnExam->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExam.Image")));
			   this->btnExam->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnExam->Location = System::Drawing::Point(0, 811);
			   this->btnExam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnExam->Name = L"btnExam";
			   this->btnExam->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			   this->btnExam->Size = System::Drawing::Size(312, 131);
			   this->btnExam->TabIndex = 2;
			   this->btnExam->Text = L"Exam";
			   this->btnExam->UseVisualStyleBackColor = true;
			   this->btnExam->Click += gcnew System::EventHandler(this, &app::btnExam_Click);
			   // 
			   // btnGame
			   // 
			   this->btnGame->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnGame->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGame.Image")));
			   this->btnGame->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnGame->Location = System::Drawing::Point(0, 549);
			   this->btnGame->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnGame->Name = L"btnGame";
			   this->btnGame->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			   this->btnGame->Size = System::Drawing::Size(312, 131);
			   this->btnGame->TabIndex = 5;
			   this->btnGame->Text = L"Game";
			   this->btnGame->UseVisualStyleBackColor = true;
			   this->btnGame->Click += gcnew System::EventHandler(this, &app::btnGame_Click);
			   // 
			   // btnHome
			   // 
			   this->btnHome->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			   this->btnHome->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnHome->Location = System::Drawing::Point(0, 156);
			   this->btnHome->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnHome->Name = L"btnHome";
			   this->btnHome->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			   this->btnHome->Size = System::Drawing::Size(312, 131);
			   this->btnHome->TabIndex = 4;
			   this->btnHome->Text = L"Home";
			   this->btnHome->UseVisualStyleBackColor = true;
			   this->btnHome->Click += gcnew System::EventHandler(this, &app::btnHome_Click);
			   // 
			   // inforUser
			   // 
			   this->inforUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->inforUser->Controls->Add(this->labelName);
			   this->inforUser->Dock = System::Windows::Forms::DockStyle::Top;
			   this->inforUser->Location = System::Drawing::Point(0, 0);
			   this->inforUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->inforUser->Name = L"inforUser";
			   this->inforUser->Size = System::Drawing::Size(312, 156);
			   this->inforUser->TabIndex = 3;
			   // 
			   // labelApp
			   // 
			   this->labelApp->AutoSize = true;
			   this->labelApp->BackColor = System::Drawing::SystemColors::Highlight;
			   this->labelApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelApp->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->labelApp->Location = System::Drawing::Point(783, 47);
			   this->labelApp->Name = L"labelApp";
			   this->labelApp->Size = System::Drawing::Size(159, 58);
			   this->labelApp->TabIndex = 0;
			   this->labelApp->Text = L"Home";
			   // 
			   // panelLabel
			   // 
			   this->panelLabel->BackColor = System::Drawing::SystemColors::Highlight;
			   this->panelLabel->Controls->Add(this->labelApp);
			   this->panelLabel->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panelLabel->Location = System::Drawing::Point(319, 7);
			   this->panelLabel->Name = L"panelLabel";
			   this->panelLabel->Size = System::Drawing::Size(1893, 156);
			   this->panelLabel->TabIndex = 4;
			   // 
			   // panelContent
			   // 
			   this->panelContent->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panelContent->Location = System::Drawing::Point(319, 163);
			   this->panelContent->Name = L"panelContent";
			   this->panelContent->Size = System::Drawing::Size(1893, 1092);
			   this->panelContent->TabIndex = 5;
			   // 
			   // labelName
			   // 
			   this->labelName->AutoSize = true;
			   this->labelName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelName->Location = System::Drawing::Point(25, 58);
			   this->labelName->Name = L"labelName";
			   this->labelName->Size = System::Drawing::Size(172, 46);
			   this->labelName->TabIndex = 0;
			   this->labelName->Text = L"username";
			   // 
			   // labelScore
			   // 
			   this->labelScore->AutoSize = true;
			   this->labelScore->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelScore->Location = System::Drawing::Point(59, 1136);
			   this->labelScore->Name = L"labelScore";
			   this->labelScore->Size = System::Drawing::Size(138, 46);
			   this->labelScore->TabIndex = 6;
			   this->labelScore->Text = L"Level : ";
			   // 
			   // app
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(2219, 1262);
			   this->Controls->Add(this->panelContent);
			   this->Controls->Add(this->panelLabel);
			   this->Controls->Add(this->options);
			   this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Name = L"app";
			   this->Padding = System::Windows::Forms::Padding(7);
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"app";
			   this->options->ResumeLayout(false);
			   this->options->PerformLayout();
			   this->inforUser->ResumeLayout(false);
			   this->inforUser->PerformLayout();
			   this->panelLabel->ResumeLayout(false);
			   this->panelLabel->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   std::wstring UTF8ToUnicode(const std::string& str)
		   {
			   int len = 0;
			   len = str.length();
			   int unicodeLen = ::MultiByteToWideChar(CP_UTF8,
				   0,
				   str.c_str(),
				   -1,
				   NULL,
				   0);
			   wchar_t* pUnicode;
			   pUnicode = new wchar_t[unicodeLen + 1];
			   memset(pUnicode, 0, (unicodeLen + 1) * sizeof(wchar_t));
			   ::MultiByteToWideChar(CP_UTF8,
				   0,
				   str.c_str(),
				   -1,
				   (LPWSTR)pUnicode,
				   unicodeLen);
			   std::wstring rt;
			   rt = (wchar_t*)pUnicode;
			   delete pUnicode;
			   return rt;
		   }
		   cli::array<System::String^>^ importData(std::vector<Vocabulary>& _dict, const std::string path) {

			   std::fstream f(path, std::ios::in);


			   Json::Value actualJson;
			   Json::Reader reader;
			   reader.parse(f, actualJson);
			   cli::array<System::String^>^ res = gcnew cli::array<System::String^>(actualJson.size());
			   // std::cout<<name << std::endl;   
			   for (int j = 0; j < actualJson.size(); j++) {
				   // std::cout<<actualJson[j] << std::endl;
				   std::string word = actualJson[j]["word"].asString();
				   std::string image = "";
				   std::string audio = "";
				   std::string definition = "";
				   std::string type = "";
				   std::string spelling = "";
				   std::vector<std::string> examples;
				   std::string topic = "";


				   if (actualJson[j]["image"].size() > 0) {
					   image = actualJson[j]["image"][0].asString();
				   }

				   if (actualJson[j]["definition"].size() > 0) {
					   definition = actualJson[j]["definition"][0].asString();
				   }

				   if (actualJson[j]["audio"].isArray() && actualJson[j]["audio"].size() > 0) {
					   audio = actualJson[j]["audio"][0].asString();
				   }

				   if (actualJson[j]["audio"].isString()) {
					   audio = actualJson[j]["audio"].asString();
				   }


				   if (actualJson[j]["order"].size() > 1) {
					   spelling = actualJson[j]["order"][0].asString();
					   type = actualJson[j]["order"][1].asString();

					   for (int k = 2; k < actualJson[j]["order"].size(); k++) {
						   examples.push_back(actualJson[j]["order"][k].asString());
					   }
				   }


				   Vocabulary vocab = Vocabulary(
					   word,
					   definition,
					   image,
					   audio,
					   type,
					   spelling,
					   examples,
					   topic,
					   Process()
				   );
				   _dict.push_back(vocab);
				   res[j] = gcnew System::String(UTF8ToUnicode(word).c_str());
			   }


			   // sort(_dict.begin(), _dict.end(), [](Vocabulary lhs, Vocabulary rhs )
			   // {
			   //     return lhs.getWord() < rhs.getWord();
			   // });

			   return res;

		   }
		   System::Windows::Forms::Form^ activeForm;
		   void ActivateButton(System::Object^ sender) {
			   if (sender != NULL) {
				   if (currentBtn != (System::Windows::Forms::Button^)sender) {

				   }
			   }






		   }

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}



	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {

		labelApp->Text = btnHome->Text;
		FormHome^ formHome = gcnew FormHome();
		openChildForm(formHome);

	}

	private: System::Void btnVocabulary_Click(System::Object^ sender, System::EventArgs^ e) {

		labelApp->Text = btnVocabulary->Text;
		FormTopicVocabulary^ formTopicVocabulary = gcnew FormTopicVocabulary(appTopics->getChildren(), appGames->getChildren(), panelContent);

		openChildForm(formTopicVocabulary);

	}


	private: void openChildForm(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}

		activeForm = form;
		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContent->Controls->Add(form);
		panelContent->Tag = form;
		form->BringToFront();
		form->Show();

	}
	private: System::Void btnDictionary_Click(System::Object^ sender, System::EventArgs^ e) {
		labelApp->Text = btnDictionary->Text;
		FormDictionary^ formDict = gcnew FormDictionary(appDictionary->getChildren(), itemEnToVi, itemViToEn, panelContent);
		openChildForm(formDict);
	}
	private: System::Void btnGrammar_Click(System::Object^ sender, System::EventArgs^ e) {
		labelApp->Text = btnGrammar->Text;
		FormTopicGrammar^ formTopicGrammar = gcnew FormTopicGrammar(appTopics->getChildren(), panelContent);

		openChildForm(formTopicGrammar);
	}
	
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->appDictionary->updateToDatabase(me->obj);
		this->appTopics->updateTopic(me->obj);
		this->appGames->updateGame(me->obj);
		this->me->updateScore(this->appTopics, this->appGames);
		for (int i = 0; i < 10; ++i) {
			this->appExams[i]->updateExam(me->obj, i);
		}

		this->me->obj["score"] = this->me->score;


		this->me->updateToDatabase("../../database/user.json");
		

		System::Environment::Exit(1);


	}
	private: System::Void btnGame_Click(System::Object^ sender, System::EventArgs^ e) {
		labelApp->Text = btnGame->Text;
		FormGame^ formTopicGame = gcnew FormGame(appGames->getChildren(), panelContent);
		
		openChildForm(formTopicGame);
	}
	private: System::Void btnExam_Click(System::Object^ sender, System::EventArgs^ e) {
		labelApp->Text = btnExam->Text;

		FormAllExam^ formExam = gcnew FormAllExam(appExams, panelContent);
		openChildForm(formExam);

	}
};
}
