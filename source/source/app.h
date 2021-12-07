#pragma once
#include<iostream>
#include"./user/user.h"
#include "FormTopicVocabulary.h"
#include "FormHome.h"
#include "FormTopicGrammar.h"

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
			me = new User();
			me->init("../../database/");

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FormHome^ formHome = gcnew FormHome();
			openChildForm(formHome);

		}

		app(Json::Value obj) {
			me = new User(obj);

			appTopics = new Topic("../../database/");
			appTopics->initTopics("../../database/", obj);



			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FormHome^ formHome = gcnew FormHome();
			openChildForm(formHome);
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
	private: System::Windows::Forms::Button^ currentBtn;
	private: System::Windows::Forms::Button^ btnVocabulary;
	private: System::Windows::Forms::Button^ btnGrammar;
	private: System::Windows::Forms::Button^ btnDictionary;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ options;
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Panel^ inforUser;
	private: System::Windows::Forms::Button^ btnHome;
	




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelApp;
	private: System::Windows::Forms::Panel^ panelLabel;
	private: System::Windows::Forms::Panel^ panelContent;




	protected:
		
	protected:

	private:		System::ComponentModel::Container^ components;

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
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->inforUser = (gcnew System::Windows::Forms::Panel());
			this->labelApp = (gcnew System::Windows::Forms::Label());
			this->panelLabel = (gcnew System::Windows::Forms::Panel());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->options->SuspendLayout();
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
			this->btnGrammar->Location = System::Drawing::Point(0, 549);
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
			this->btnDictionary->Location = System::Drawing::Point(0, 418);
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
			this->btnExit->Location = System::Drawing::Point(0, 811);
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
			this->options->Controls->Add(this->btnExit);
			this->options->Controls->Add(this->btnSettings);
			this->options->Controls->Add(this->btnGrammar);
			this->options->Controls->Add(this->btnDictionary);
			this->options->Controls->Add(this->btnVocabulary);
			this->options->Controls->Add(this->btnHome);
			this->options->Controls->Add(this->inforUser);
			this->options->Dock = System::Windows::Forms::DockStyle::Left;
			this->options->Location = System::Drawing::Point(7, 7);
			this->options->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->options->Name = L"options";
			this->options->Size = System::Drawing::Size(312, 1148);
			this->options->TabIndex = 3;
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettings.Image")));
			this->btnSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->Location = System::Drawing::Point(0, 680);
			this->btnSettings->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->btnSettings->Size = System::Drawing::Size(312, 131);
			this->btnSettings->TabIndex = 2;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &app::btnSettings_Click);
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
			this->panelContent->Size = System::Drawing::Size(1893, 992);
			this->panelContent->TabIndex = 5;
			// 
			// app
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(2219, 1162);
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
			this->panelLabel->ResumeLayout(false);
			this->panelLabel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
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
			FormTopicVocabulary^ formTopicVocabulary = gcnew FormTopicVocabulary(appTopics->getChildren());
			
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
}
private: System::Void btnGrammar_Click(System::Object^ sender, System::EventArgs^ e) {
	labelApp->Text = btnGrammar->Text;
	FormTopicGrammar^ formTopicGrammar = gcnew FormTopicGrammar(appTopics->getChildren());

	openChildForm(formTopicGrammar);
}
private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Environment::Exit(1);

	
}
};
}
