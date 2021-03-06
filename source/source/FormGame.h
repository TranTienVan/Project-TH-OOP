#pragma once
#include"./component/component.h"
#include"ListWordsGame.h"
#include"FormTraditionalGame.h"
#include"./game/list_word_game.h"
#include"./game/traditional_game.h"
#include"./game/matrix_word_game.h"
#include"FormMatrixWordGame.h"
#include"FormHome.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormGame
	/// </summary>
	public ref class FormGame : public System::Windows::Forms::Form
	{
	public:
		FormGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormGame(std::vector<AppComponent*> games, System::Windows::Forms::Panel^ panelContent) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->traditional_games = new TraditionalGame * [12];
			this->panelContent = panelContent;
			for (int i = 0; i < 12; ++i) {
				this->traditional_games[i] = (TraditionalGame*)games[i];
			}

			this->list_words_game = (ListWordGame*)games[12];
			this->matrix_words_game = (MatrixWordGame*)games[13];
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelContent;
	private: TraditionalGame** traditional_games;
	private: ListWordGame* list_words_game;
	private: MatrixWordGame* matrix_words_game;
	private: System::Windows::Forms::TextBox^ nameTopic;
	protected:
	private: System::Windows::Forms::Panel^ topic1;
	private: System::Windows::Forms::PictureBox^ pictureTopic1;
	private: System::Windows::Forms::TextBox^ textBoxTopic1;
	private: System::Windows::Forms::Button^ button1Topic1;
	private: System::Windows::Forms::Panel^ panelLabelTopic;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Panel^ topic2;
	private: System::Windows::Forms::PictureBox^ pictureTopic2;
	private: System::Windows::Forms::TextBox^ textBoxTopic2;
	private: System::Windows::Forms::Button^ button1Topic2;






	private: System::Windows::Forms::Panel^ panelTopicGames;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormGame::typeid));
			this->nameTopic = (gcnew System::Windows::Forms::TextBox());
			this->topic1 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic1 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic1 = (gcnew System::Windows::Forms::Button());
			this->panelLabelTopic = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->topic2 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic2 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic2 = (gcnew System::Windows::Forms::Button());
			this->panelTopicGames = (gcnew System::Windows::Forms::Panel());
			this->topic1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->BeginInit();
			this->panelLabelTopic->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->topic2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->BeginInit();
			this->panelTopicGames->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameTopic
			// 
			this->nameTopic->BackColor = System::Drawing::Color::Linen;
			this->nameTopic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTopic->Location = System::Drawing::Point(725, 12);
			this->nameTopic->Name = L"nameTopic";
			this->nameTopic->Size = System::Drawing::Size(384, 68);
			this->nameTopic->TabIndex = 0;
			this->nameTopic->Text = L"Game";
			this->nameTopic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// topic1
			// 
			this->topic1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic1->Controls->Add(this->pictureTopic1);
			this->topic1->Controls->Add(this->textBoxTopic1);
			this->topic1->Controls->Add(this->button1Topic1);
			this->topic1->Location = System::Drawing::Point(114, 60);
			this->topic1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic1->Name = L"topic1";
			this->topic1->Size = System::Drawing::Size(700, 700);
			this->topic1->TabIndex = 0;
			// 
			// pictureTopic1
			// 
			this->pictureTopic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTopic1.Image")));
			this->pictureTopic1->Location = System::Drawing::Point(55, 54);
			this->pictureTopic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic1->Name = L"pictureTopic1";
			this->pictureTopic1->Size = System::Drawing::Size(596, 451);
			this->pictureTopic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureTopic1->TabIndex = 5;
			this->pictureTopic1->TabStop = false;
			// 
			// textBoxTopic1
			// 
			this->textBoxTopic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTopic1->Location = System::Drawing::Point(55, 519);
			this->textBoxTopic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic1->Name = L"textBoxTopic1";
			this->textBoxTopic1->Size = System::Drawing::Size(596, 53);
			this->textBoxTopic1->TabIndex = 4;
			this->textBoxTopic1->Text = L"List Words";
			this->textBoxTopic1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1Topic1
			// 
			this->button1Topic1->Location = System::Drawing::Point(256, 607);
			this->button1Topic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic1->Name = L"button1Topic1";
			this->button1Topic1->Size = System::Drawing::Size(200, 70);
			this->button1Topic1->TabIndex = 3;
			this->button1Topic1->Text = L"Play";
			this->button1Topic1->UseVisualStyleBackColor = true;
			this->button1Topic1->Click += gcnew System::EventHandler(this, &FormGame::button1Topic1_Click);
			// 
			// panelLabelTopic
			// 
			this->panelLabelTopic->BackColor = System::Drawing::Color::Linen;
			this->panelLabelTopic->Controls->Add(this->pictureBox1);
			this->panelLabelTopic->Controls->Add(this->nameTopic);
			this->panelLabelTopic->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLabelTopic->Location = System::Drawing::Point(0, 0);
			this->panelLabelTopic->Name = L"panelLabelTopic";
			this->panelLabelTopic->Size = System::Drawing::Size(1859, 105);
			this->panelLabelTopic->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormGame::pictureBox1_Click);
			// 
			// topic2
			// 
			this->topic2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic2->Controls->Add(this->pictureTopic2);
			this->topic2->Controls->Add(this->textBoxTopic2);
			this->topic2->Controls->Add(this->button1Topic2);
			this->topic2->Location = System::Drawing::Point(991, 60);
			this->topic2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic2->Name = L"topic2";
			this->topic2->Size = System::Drawing::Size(700, 700);
			this->topic2->TabIndex = 1;
			// 
			// pictureTopic2
			// 
			this->pictureTopic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTopic2.Image")));
			this->pictureTopic2->Location = System::Drawing::Point(50, 54);
			this->pictureTopic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic2->Name = L"pictureTopic2";
			this->pictureTopic2->Size = System::Drawing::Size(596, 451);
			this->pictureTopic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureTopic2->TabIndex = 5;
			this->pictureTopic2->TabStop = false;
			// 
			// textBoxTopic2
			// 
			this->textBoxTopic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTopic2->Location = System::Drawing::Point(50, 519);
			this->textBoxTopic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic2->Name = L"textBoxTopic2";
			this->textBoxTopic2->Size = System::Drawing::Size(596, 53);
			this->textBoxTopic2->TabIndex = 4;
			this->textBoxTopic2->Text = L"Matrix Word";
			this->textBoxTopic2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1Topic2
			// 
			this->button1Topic2->Location = System::Drawing::Point(253, 607);
			this->button1Topic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic2->Name = L"button1Topic2";
			this->button1Topic2->Size = System::Drawing::Size(200, 70);
			this->button1Topic2->TabIndex = 3;
			this->button1Topic2->Text = L"Play";
			this->button1Topic2->UseVisualStyleBackColor = true;
			this->button1Topic2->Click += gcnew System::EventHandler(this, &FormGame::button1Topic2_Click);
			// 
			// panelTopicGames
			// 
			this->panelTopicGames->AutoScroll = true;
			this->panelTopicGames->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->panelTopicGames->AutoScrollMinSize = System::Drawing::Size(10, 10);
			this->panelTopicGames->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panelTopicGames->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTopicGames->Controls->Add(this->topic1);
			this->panelTopicGames->Controls->Add(this->topic2);
			this->panelTopicGames->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTopicGames->Location = System::Drawing::Point(0, 105);
			this->panelTopicGames->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelTopicGames->Name = L"panelTopicGames";
			this->panelTopicGames->Size = System::Drawing::Size(1859, 880);
			this->panelTopicGames->TabIndex = 5;
			// 
			// FormGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 985);
			this->Controls->Add(this->panelTopicGames);
			this->Controls->Add(this->panelLabelTopic);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormGame";
			this->Text = L"FormGame";
			this->topic1->ResumeLayout(false);
			this->topic1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->EndInit();
			this->panelLabelTopic->ResumeLayout(false);
			this->panelLabelTopic->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->topic2->ResumeLayout(false);
			this->topic2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->EndInit();
			this->panelTopicGames->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Windows::Forms::Form^ activeForm;

		private: void openChildForm(System::Windows::Forms::Form^ form) {
			if (activeForm != nullptr) {
				activeForm->Close();
			}

			activeForm = form;
			form->TopLevel = false;
			form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			form->Dock = System::Windows::Forms::DockStyle::Fill;
			panelTopicGames->Controls->Add(form);
			panelTopicGames->Tag = form;
			panelTopicGames->AutoScroll = false;

			form->BringToFront();
			form->Show();


		}

	void turnBackHome(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}


		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelTopicGames->Controls->Add(form);
		panelTopicGames->Tag = form;
		panelTopicGames->AutoScroll = false;
		form->AutoScroll = false;
		
		form->BringToFront();
		form->Show();


	}
	private: System::Void button1Topic1_Click(System::Object^ sender, System::EventArgs^ e) {
		ListWordsGame^ next = gcnew ListWordsGame(this->list_words_game);
		openChildForm(next);
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeForm != nullptr) {
		activeForm->Close();
		this->panelTopicGames->AutoScroll = true;
		this->panelTopicGames->Controls->Remove(activeForm);
		activeForm = nullptr;
	}

	else {
		panelContent->Controls->Remove(this);
		FormHome^ formHome = gcnew FormHome();
		turnBackHome(formHome);
		this->Close();
	}
}
private: System::Void button1Topic2_Click(System::Object^ sender, System::EventArgs^ e) {

	FormMatrixWordGame^ next = gcnew FormMatrixWordGame(matrix_words_game);
	openChildForm(next);
}
};
}
