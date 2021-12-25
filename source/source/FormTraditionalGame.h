#pragma once
#include"./game/traditional_game.h"
#include <windows.h>
#include<stringapiset.h>
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormTraditionalGame
	/// </summary>
	public ref class FormTraditionalGame : public System::Windows::Forms::Form
	{
	public:
		FormTraditionalGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormTraditionalGame(TraditionalGame* game, System::Windows::Forms::Panel^ panelTopicVocabulary)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->game = game;
			this->Score = 0;

			generateQuestionAndAnswer();
			this->panelTopicVocabulary = panelTopicVocabulary;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTraditionalGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: TraditionalGame* game;
	private: System::String^ answer;
	private: int idQuestion;
	private: int Score;
	private: System::Windows::Forms::PictureBox^ pictureContent;
	private: System::Media::SoundPlayer^ player;
	private: System::Windows::Forms::Panel^ panelTopicVocabulary;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAnswer4;
	private: System::Windows::Forms::Button^ btnAnswer3;
	private: System::Windows::Forms::Button^ btnAnswer2;
	private: System::Windows::Forms::Button^ btnAnswer1;
	private: System::Windows::Forms::Button^ btnQuestion;
	private: System::Windows::Forms::PictureBox^ audioSource;

	private: System::Windows::Forms::TextBox^ txtWord;
	private: System::Windows::Forms::PictureBox^ pictureCorrect;
	private: System::Windows::Forms::PictureBox^ pictureIncorrect;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ labelScore;

	private: System::Windows::Forms::PictureBox^ pictureAudio;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTraditionalGame::typeid));
			this->pictureContent = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->pictureAudio = (gcnew System::Windows::Forms::PictureBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->pictureCorrect = (gcnew System::Windows::Forms::PictureBox());
			this->pictureIncorrect = (gcnew System::Windows::Forms::PictureBox());
			this->txtWord = (gcnew System::Windows::Forms::TextBox());
			this->audioSource = (gcnew System::Windows::Forms::PictureBox());
			this->btnAnswer4 = (gcnew System::Windows::Forms::Button());
			this->btnAnswer3 = (gcnew System::Windows::Forms::Button());
			this->btnAnswer2 = (gcnew System::Windows::Forms::Button());
			this->btnAnswer1 = (gcnew System::Windows::Forms::Button());
			this->btnQuestion = (gcnew System::Windows::Forms::Button());
			this->player = (gcnew System::Media::SoundPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureContent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAudio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCorrect))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIncorrect))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioSource))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureContent
			// 
			this->pictureContent->Location = System::Drawing::Point(132, 172);
			this->pictureContent->Name = L"pictureContent";
			this->pictureContent->Size = System::Drawing::Size(523, 593);
			this->pictureContent->TabIndex = 3;
			this->pictureContent->TabStop = false;
			this->pictureContent->Click += gcnew System::EventHandler(this, &FormTraditionalGame::pictureContent_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(786, 895);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelScore);
			this->panel1->Controls->Add(this->pictureAudio);
			this->panel1->Controls->Add(this->btnSubmit);
			this->panel1->Controls->Add(this->pictureCorrect);
			this->panel1->Controls->Add(this->pictureIncorrect);
			this->panel1->Controls->Add(this->txtWord);
			this->panel1->Controls->Add(this->audioSource);
			this->panel1->Controls->Add(this->btnAnswer4);
			this->panel1->Controls->Add(this->btnAnswer3);
			this->panel1->Controls->Add(this->btnAnswer2);
			this->panel1->Controls->Add(this->btnAnswer1);
			this->panel1->Controls->Add(this->btnQuestion);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(786, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(964, 895);
			this->panel1->TabIndex = 5;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(351, 41);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(289, 58);
			this->labelScore->TabIndex = 13;
			this->labelScore->Text = L"Score : 0     ";
			// 
			// pictureAudio
			// 
			this->pictureAudio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureAudio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureAudio.Image")));
			this->pictureAudio->Location = System::Drawing::Point(448, 330);
			this->pictureAudio->Name = L"pictureAudio";
			this->pictureAudio->Size = System::Drawing::Size(88, 84);
			this->pictureAudio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureAudio->TabIndex = 12;
			this->pictureAudio->TabStop = false;
			this->pictureAudio->Click += gcnew System::EventHandler(this, &FormTraditionalGame::pictureBox3_Click);
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(361, 525);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(250, 86);
			this->btnSubmit->TabIndex = 11;
			this->btnSubmit->Text = L"Enter";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &FormTraditionalGame::btnSubmit_Click);
			// 
			// pictureCorrect
			// 
			this->pictureCorrect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureCorrect.Image")));
			this->pictureCorrect->Location = System::Drawing::Point(800, 495);
			this->pictureCorrect->Name = L"pictureCorrect";
			this->pictureCorrect->Size = System::Drawing::Size(88, 84);
			this->pictureCorrect->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureCorrect->TabIndex = 10;
			this->pictureCorrect->TabStop = false;
			// 
			// pictureIncorrect
			// 
			this->pictureIncorrect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureIncorrect.Image")));
			this->pictureIncorrect->Location = System::Drawing::Point(800, 495);
			this->pictureIncorrect->Name = L"pictureIncorrect";
			this->pictureIncorrect->Size = System::Drawing::Size(88, 84);
			this->pictureIncorrect->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureIncorrect->TabIndex = 9;
			this->pictureIncorrect->TabStop = false;
			// 
			// txtWord
			// 
			this->txtWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtWord->Location = System::Drawing::Point(280, 437);
			this->txtWord->Name = L"txtWord";
			this->txtWord->Size = System::Drawing::Size(420, 64);
			this->txtWord->TabIndex = 8;
			this->txtWord->Text = L"hh";
			this->txtWord->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtWord->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormTraditionalGame::txtWord_KeyDown);
			// 
			// audioSource
			// 
			this->audioSource->Cursor = System::Windows::Forms::Cursors::Hand;
			this->audioSource->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"audioSource.Image")));
			this->audioSource->Location = System::Drawing::Point(810, 789);
			this->audioSource->Name = L"audioSource";
			this->audioSource->Size = System::Drawing::Size(142, 94);
			this->audioSource->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->audioSource->TabIndex = 2;
			this->audioSource->TabStop = false;
			this->audioSource->Click += gcnew System::EventHandler(this, &FormTraditionalGame::audioSource_Click);
			// 
			// btnAnswer4
			// 
			this->btnAnswer4->Location = System::Drawing::Point(299, 701);
			this->btnAnswer4->Name = L"btnAnswer4";
			this->btnAnswer4->Size = System::Drawing::Size(382, 86);
			this->btnAnswer4->TabIndex = 1;
			this->btnAnswer4->Text = L"button2";
			this->btnAnswer4->UseVisualStyleBackColor = true;
			this->btnAnswer4->Click += gcnew System::EventHandler(this, &FormTraditionalGame::btnAnswer4_Click);
			// 
			// btnAnswer3
			// 
			this->btnAnswer3->Location = System::Drawing::Point(299, 565);
			this->btnAnswer3->Name = L"btnAnswer3";
			this->btnAnswer3->Size = System::Drawing::Size(382, 86);
			this->btnAnswer3->TabIndex = 1;
			this->btnAnswer3->Text = L"button2";
			this->btnAnswer3->UseVisualStyleBackColor = true;
			this->btnAnswer3->Click += gcnew System::EventHandler(this, &FormTraditionalGame::btnAnswer3_Click);
			// 
			// btnAnswer2
			// 
			this->btnAnswer2->Location = System::Drawing::Point(299, 433);
			this->btnAnswer2->Name = L"btnAnswer2";
			this->btnAnswer2->Size = System::Drawing::Size(382, 86);
			this->btnAnswer2->TabIndex = 1;
			this->btnAnswer2->Text = L"button2";
			this->btnAnswer2->UseVisualStyleBackColor = true;
			this->btnAnswer2->Click += gcnew System::EventHandler(this, &FormTraditionalGame::btnAnswer2_Click);
			// 
			// btnAnswer1
			// 
			this->btnAnswer1->Location = System::Drawing::Point(299, 302);
			this->btnAnswer1->Name = L"btnAnswer1";
			this->btnAnswer1->Size = System::Drawing::Size(382, 86);
			this->btnAnswer1->TabIndex = 1;
			this->btnAnswer1->Text = L"button2";
			this->btnAnswer1->UseVisualStyleBackColor = true;
			this->btnAnswer1->Click += gcnew System::EventHandler(this, &FormTraditionalGame::btnAnswer1_Click);
			// 
			// btnQuestion
			// 
			this->btnQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnQuestion->Location = System::Drawing::Point(33, 127);
			this->btnQuestion->Name = L"btnQuestion";
			this->btnQuestion->Size = System::Drawing::Size(886, 134);
			this->btnQuestion->TabIndex = 0;
			this->btnQuestion->Text = L"Nghĩa của từ";
			this->btnQuestion->UseVisualStyleBackColor = true;
			// 
			// player
			// 
			this->player->LoadTimeout = 10000;
			this->player->SoundLocation = L"";
			this->player->Stream = nullptr;
			this->player->Tag = nullptr;
			// 
			// FormTraditionalGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1750, 895);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureContent);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"FormTraditionalGame";
			this->Text = L"FormTraditionalGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureContent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAudio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCorrect))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIncorrect))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioSource))->EndInit();
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
	private: System::Void audioSource_Click(System::Object^ sender, System::EventArgs^ e) {
		generateQuestionAndAnswer();
	}

	void generateQuestionAndAnswer() {
		std::vector<std::string> q = this->game->getQuestion();
		
		this->pictureCorrect->Visible = false;
		this->pictureIncorrect->Visible = false;

		
		if (q.size() == 7) {
			answer = gcnew System::String(UTF8ToUnicode(q[5]).c_str());
			btnQuestion->Text = gcnew System::String((UTF8ToUnicode(q[4]) + L"\" là ?").c_str());
			btnAnswer1->Text = gcnew System::String(UTF8ToUnicode(q[0]).c_str());
			btnAnswer2->Text = gcnew System::String(UTF8ToUnicode(q[1]).c_str());
			btnAnswer3->Text = gcnew System::String(UTF8ToUnicode(q[2]).c_str());
			btnAnswer4->Text = gcnew System::String(UTF8ToUnicode(q[3]).c_str());
			this->txtWord->Visible = false;
			this->btnSubmit->Visible = false;
			this->pictureAudio->Visible = false;
			this->btnAnswer1->Visible = true;
			this->btnAnswer2->Visible = true;
			this->btnAnswer3->Visible = true;
			this->btnAnswer4->Visible = true;
			System::String^ url = gcnew System::String((L"../../assets/" + UTF8ToUnicode(q[6]) + L".png").c_str());
			this->idQuestion = 1;
			this->pictureContent->Image = gcnew System::Drawing::Bitmap(url);
			pictureContent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		}

		else if (q.size() == 2) {
			this->idQuestion = 2;
			this->btnSubmit->Text = L"Enter";

			answer = gcnew System::String(UTF8ToUnicode(q[1]).c_str());
			btnQuestion->Text = gcnew System::String(UTF8ToUnicode(q[0]).c_str());
			txtWord->Text = L"";
			System::String^ url = gcnew System::String((L"../../assets/" + UTF8ToUnicode(q[1]) + L".png").c_str());
			this->pictureContent->Image = gcnew System::Drawing::Bitmap(url);
			this->pictureContent->Text = gcnew System::String(UTF8ToUnicode(q[1]).c_str());
			pictureContent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			player->SoundLocation = L"../../assets/wav/" + gcnew System::String(q[1].c_str()) + L".wav";
			this->txtWord->Visible = true;
			this->btnSubmit->Visible = true;
			this->pictureAudio->Visible = true;
			this->btnAnswer1->Visible = false;
			this->btnAnswer2->Visible = false;
			this->btnAnswer3->Visible = false;
			this->btnAnswer4->Visible = false;
		}
	}

	void checkAnswer(System::String^ text) {
		if (text == answer) {
			this->pictureCorrect->Visible = true;
			this->pictureIncorrect->Visible = false;
			++Score;
			++this->game->score;
			this->labelScore->Text = L"Score : " + System::Convert::ToString(Score) + L"   ";
		}

		else {
			this->pictureCorrect->Visible = false;
			this->pictureIncorrect->Visible = true;
		}

		this->btnSubmit->Text = answer;



	}
private: System::Void btnAnswer1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ temp = (System::Windows::Forms::Button^)sender;
	checkAnswer(temp->Text);
	
}
private: System::Void btnAnswer2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ temp = (System::Windows::Forms::Button^)sender;
	checkAnswer(temp->Text);
}
private: System::Void btnAnswer3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ temp = (System::Windows::Forms::Button^)sender;
	checkAnswer(temp->Text);
}
private: System::Void btnAnswer4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ temp = (System::Windows::Forms::Button^)sender;
	checkAnswer(temp->Text);
}
private: System::Void pictureContent_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void txtWord_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyCode == Keys::Enter) {
		checkAnswer(txtWord->Text);
	}

}


private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	checkAnswer(txtWord->Text);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelTopicVocabulary->Controls->Remove(this);
	panelTopicVocabulary->AutoScroll = true;
	this->Close();
	

}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (idQuestion == 2) {
		player->Load();
		player->Play();
	}
}
};
}
