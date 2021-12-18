#pragma once
#include"./game/list_word_game.h"
#include <msclr\marshal_cppstd.h>
#include<Windows.h>
#include"FormContentVocabulary.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListWordsGame
	/// </summary>
	public ref class ListWordsGame : public System::Windows::Forms::Form
	{
	public:
		ListWordsGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ListWordsGame(ListWordGame* games) {
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
			this->game = games;
			
			LoadPage();


		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ListWordsGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ListWordGame* game;
	private: System::Windows::Forms::Panel^ panelListWord;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnCheck;
	private: System::Windows::Forms::Label^ labelQuestion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelCharacter;
	private: System::Windows::Forms::PictureBox^ pictureReload;
	private: System::Windows::Forms::Button^ btnChar1;
	private: System::Windows::Forms::Button^ btnChar2;
	private: System::Windows::Forms::Button^ btnChar3;
	private: System::Windows::Forms::Button^ btnChar4;
	private: System::Windows::Forms::Button^ btnChar6;
	private: System::Windows::Forms::Button^ btnChar7;
	private: System::Windows::Forms::Button^ btnChar8;
	private: System::Windows::Forms::Button^ btnChar9;
	private: System::Windows::Forms::TextBox^ textWord;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelAnswer;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn10;
	private: System::Windows::Forms::Button^ btn11;
	private: System::Windows::Forms::Button^ btn12;
	private: System::Windows::Forms::Button^ btn13;
	private: System::Windows::Forms::Button^ btn14;
	private: System::Windows::Forms::Button^ btn15;
	private: System::Windows::Forms::Button^ btn16;
	private: System::Windows::Forms::Button^ btn17;
	private: System::Windows::Forms::Button^ btn18;


	protected:






































































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ListWordsGame::typeid));
			this->panelListWord = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelCharacter = (gcnew System::Windows::Forms::Panel());
			this->pictureReload = (gcnew System::Windows::Forms::PictureBox());
			this->btnChar1 = (gcnew System::Windows::Forms::Button());
			this->btnChar2 = (gcnew System::Windows::Forms::Button());
			this->btnChar3 = (gcnew System::Windows::Forms::Button());
			this->btnChar4 = (gcnew System::Windows::Forms::Button());
			this->btnChar6 = (gcnew System::Windows::Forms::Button());
			this->btnChar7 = (gcnew System::Windows::Forms::Button());
			this->btnChar8 = (gcnew System::Windows::Forms::Button());
			this->btnChar9 = (gcnew System::Windows::Forms::Button());
			this->textWord = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelAnswer = (gcnew System::Windows::Forms::Panel());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn13 = (gcnew System::Windows::Forms::Button());
			this->btn14 = (gcnew System::Windows::Forms::Button());
			this->btn15 = (gcnew System::Windows::Forms::Button());
			this->btn16 = (gcnew System::Windows::Forms::Button());
			this->btn17 = (gcnew System::Windows::Forms::Button());
			this->btn18 = (gcnew System::Windows::Forms::Button());
			this->panelListWord->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelCharacter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureReload))->BeginInit();
			this->panel1->SuspendLayout();
			this->panelAnswer->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelListWord
			// 
			this->panelListWord->Controls->Add(this->panel2);
			this->panelListWord->Controls->Add(this->panel1);
			this->panelListWord->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelListWord->Location = System::Drawing::Point(0, 0);
			this->panelListWord->Name = L"panelListWord";
			this->panelListWord->Size = System::Drawing::Size(1827, 883);
			this->panelListWord->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnCheck);
			this->panel2->Controls->Add(this->labelQuestion);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panelCharacter);
			this->panel2->Controls->Add(this->textWord);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(890, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(937, 883);
			this->panel2->TabIndex = 6;
			// 
			// btnCheck
			// 
			this->btnCheck->Location = System::Drawing::Point(372, 739);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(213, 58);
			this->btnCheck->TabIndex = 5;
			this->btnCheck->Text = L"Check";
			this->btnCheck->UseVisualStyleBackColor = true;
			this->btnCheck->Click += gcnew System::EventHandler(this, &ListWordsGame::btnCheck_Click);
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0), true));
			this->labelQuestion->Location = System::Drawing::Point(7, 84);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(906, 57);
			this->labelQuestion->TabIndex = 4;
			this->labelQuestion->Text = L"Tìm 18 từ được tạo bởi các ký tự sau";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 32);
			this->label1->TabIndex = 3;
			// 
			// panelCharacter
			// 
			this->panelCharacter->Controls->Add(this->pictureReload);
			this->panelCharacter->Controls->Add(this->btnChar1);
			this->panelCharacter->Controls->Add(this->btnChar2);
			this->panelCharacter->Controls->Add(this->btnChar3);
			this->panelCharacter->Controls->Add(this->btnChar4);
			this->panelCharacter->Controls->Add(this->btnChar6);
			this->panelCharacter->Controls->Add(this->btnChar7);
			this->panelCharacter->Controls->Add(this->btnChar8);
			this->panelCharacter->Controls->Add(this->btnChar9);
			this->panelCharacter->Location = System::Drawing::Point(277, 190);
			this->panelCharacter->Name = L"panelCharacter";
			this->panelCharacter->Size = System::Drawing::Size(399, 399);
			this->panelCharacter->TabIndex = 0;
			// 
			// pictureReload
			// 
			this->pictureReload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureReload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureReload.Image")));
			this->pictureReload->Location = System::Drawing::Point(133, 133);
			this->pictureReload->Name = L"pictureReload";
			this->pictureReload->Size = System::Drawing::Size(133, 133);
			this->pictureReload->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureReload->TabIndex = 6;
			this->pictureReload->TabStop = false;
			this->pictureReload->Click += gcnew System::EventHandler(this, &ListWordsGame::pictureReload_Click);
			// 
			// btnChar1
			// 
			this->btnChar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar1->Location = System::Drawing::Point(0, 0);
			this->btnChar1->Name = L"btnChar1";
			this->btnChar1->Size = System::Drawing::Size(133, 133);
			this->btnChar1->TabIndex = 0;
			this->btnChar1->Text = L"a";
			this->btnChar1->UseVisualStyleBackColor = true;
			// 
			// btnChar2
			// 
			this->btnChar2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar2->Location = System::Drawing::Point(133, 0);
			this->btnChar2->Name = L"btnChar2";
			this->btnChar2->Size = System::Drawing::Size(133, 133);
			this->btnChar2->TabIndex = 0;
			this->btnChar2->Text = L"a";
			this->btnChar2->UseVisualStyleBackColor = true;
			// 
			// btnChar3
			// 
			this->btnChar3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar3->Location = System::Drawing::Point(266, 0);
			this->btnChar3->Name = L"btnChar3";
			this->btnChar3->Size = System::Drawing::Size(133, 133);
			this->btnChar3->TabIndex = 0;
			this->btnChar3->Text = L"a";
			this->btnChar3->UseVisualStyleBackColor = true;
			// 
			// btnChar4
			// 
			this->btnChar4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar4->Location = System::Drawing::Point(0, 133);
			this->btnChar4->Name = L"btnChar4";
			this->btnChar4->Size = System::Drawing::Size(133, 133);
			this->btnChar4->TabIndex = 0;
			this->btnChar4->Text = L"a";
			this->btnChar4->UseVisualStyleBackColor = true;
			// 
			// btnChar6
			// 
			this->btnChar6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar6->Location = System::Drawing::Point(266, 133);
			this->btnChar6->Name = L"btnChar6";
			this->btnChar6->Size = System::Drawing::Size(133, 133);
			this->btnChar6->TabIndex = 0;
			this->btnChar6->Text = L"a";
			this->btnChar6->UseVisualStyleBackColor = true;
			// 
			// btnChar7
			// 
			this->btnChar7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar7->Location = System::Drawing::Point(0, 266);
			this->btnChar7->Name = L"btnChar7";
			this->btnChar7->Size = System::Drawing::Size(133, 133);
			this->btnChar7->TabIndex = 0;
			this->btnChar7->Text = L"a";
			this->btnChar7->UseVisualStyleBackColor = true;
			// 
			// btnChar8
			// 
			this->btnChar8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar8->Location = System::Drawing::Point(133, 266);
			this->btnChar8->Name = L"btnChar8";
			this->btnChar8->Size = System::Drawing::Size(133, 133);
			this->btnChar8->TabIndex = 0;
			this->btnChar8->Text = L"a";
			this->btnChar8->UseVisualStyleBackColor = true;
			// 
			// btnChar9
			// 
			this->btnChar9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChar9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChar9->Location = System::Drawing::Point(266, 266);
			this->btnChar9->Name = L"btnChar9";
			this->btnChar9->Size = System::Drawing::Size(133, 133);
			this->btnChar9->TabIndex = 0;
			this->btnChar9->Text = L"a";
			this->btnChar9->UseVisualStyleBackColor = true;
			// 
			// textWord
			// 
			this->textWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textWord->Location = System::Drawing::Point(171, 630);
			this->textWord->Name = L"textWord";
			this->textWord->Size = System::Drawing::Size(602, 83);
			this->textWord->TabIndex = 2;
			this->textWord->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ListWordsGame::textWord_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panelAnswer);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(840, 883);
			this->panel1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(282, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 68);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Xem đáp án";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListWordsGame::button1_Click);
			// 
			// panelAnswer
			// 
			this->panelAnswer->Controls->Add(this->btn1);
			this->panelAnswer->Controls->Add(this->btn2);
			this->panelAnswer->Controls->Add(this->btn3);
			this->panelAnswer->Controls->Add(this->btn4);
			this->panelAnswer->Controls->Add(this->btn5);
			this->panelAnswer->Controls->Add(this->btn6);
			this->panelAnswer->Controls->Add(this->btn7);
			this->panelAnswer->Controls->Add(this->btn8);
			this->panelAnswer->Controls->Add(this->btn9);
			this->panelAnswer->Controls->Add(this->btn10);
			this->panelAnswer->Controls->Add(this->btn11);
			this->panelAnswer->Controls->Add(this->btn12);
			this->panelAnswer->Controls->Add(this->btn13);
			this->panelAnswer->Controls->Add(this->btn14);
			this->panelAnswer->Controls->Add(this->btn15);
			this->panelAnswer->Controls->Add(this->btn16);
			this->panelAnswer->Controls->Add(this->btn17);
			this->panelAnswer->Controls->Add(this->btn18);
			this->panelAnswer->Location = System::Drawing::Point(118, 99);
			this->panelAnswer->Name = L"panelAnswer";
			this->panelAnswer->Size = System::Drawing::Size(582, 720);
			this->panelAnswer->TabIndex = 0;
			// 
			// btn1
			// 
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn1->Location = System::Drawing::Point(0, 0);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(291, 80);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"a";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &ListWordsGame::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn2->Location = System::Drawing::Point(291, 0);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(291, 80);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"button1";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &ListWordsGame::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn3->Location = System::Drawing::Point(0, 80);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(291, 80);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"button1";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &ListWordsGame::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn4->Location = System::Drawing::Point(291, 80);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(291, 80);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"button1";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &ListWordsGame::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn5->Location = System::Drawing::Point(0, 160);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(291, 80);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"button1";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &ListWordsGame::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn6->Location = System::Drawing::Point(291, 160);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(291, 80);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"button1";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &ListWordsGame::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn7->Location = System::Drawing::Point(0, 240);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(291, 80);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"button1";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &ListWordsGame::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn8->Location = System::Drawing::Point(291, 240);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(291, 80);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"button1";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &ListWordsGame::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn9->Location = System::Drawing::Point(0, 320);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(291, 80);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"button1";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &ListWordsGame::btn9_Click);
			// 
			// btn10
			// 
			this->btn10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn10->Location = System::Drawing::Point(291, 320);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(291, 80);
			this->btn10->TabIndex = 0;
			this->btn10->Text = L"button1";
			this->btn10->UseVisualStyleBackColor = true;
			this->btn10->Click += gcnew System::EventHandler(this, &ListWordsGame::btn10_Click);
			// 
			// btn11
			// 
			this->btn11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn11->Location = System::Drawing::Point(0, 400);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(291, 80);
			this->btn11->TabIndex = 0;
			this->btn11->Text = L"button1";
			this->btn11->UseVisualStyleBackColor = true;
			this->btn11->Click += gcnew System::EventHandler(this, &ListWordsGame::btn11_Click);
			// 
			// btn12
			// 
			this->btn12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn12->Location = System::Drawing::Point(291, 400);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(291, 80);
			this->btn12->TabIndex = 0;
			this->btn12->Text = L"button1";
			this->btn12->UseVisualStyleBackColor = true;
			this->btn12->Click += gcnew System::EventHandler(this, &ListWordsGame::btn12_Click);
			// 
			// btn13
			// 
			this->btn13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn13->Location = System::Drawing::Point(0, 480);
			this->btn13->Name = L"btn13";
			this->btn13->Size = System::Drawing::Size(291, 80);
			this->btn13->TabIndex = 0;
			this->btn13->Text = L"button1";
			this->btn13->UseVisualStyleBackColor = true;
			this->btn13->Click += gcnew System::EventHandler(this, &ListWordsGame::btn13_Click);
			// 
			// btn14
			// 
			this->btn14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn14->Location = System::Drawing::Point(291, 480);
			this->btn14->Name = L"btn14";
			this->btn14->Size = System::Drawing::Size(291, 80);
			this->btn14->TabIndex = 0;
			this->btn14->Text = L"button1";
			this->btn14->UseVisualStyleBackColor = true;
			this->btn14->Click += gcnew System::EventHandler(this, &ListWordsGame::btn14_Click);
			// 
			// btn15
			// 
			this->btn15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn15->Location = System::Drawing::Point(0, 560);
			this->btn15->Name = L"btn15";
			this->btn15->Size = System::Drawing::Size(291, 80);
			this->btn15->TabIndex = 0;
			this->btn15->Text = L"button1";
			this->btn15->UseVisualStyleBackColor = true;
			this->btn15->Click += gcnew System::EventHandler(this, &ListWordsGame::btn15_Click);
			// 
			// btn16
			// 
			this->btn16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn16->Location = System::Drawing::Point(291, 560);
			this->btn16->Name = L"btn16";
			this->btn16->Size = System::Drawing::Size(291, 80);
			this->btn16->TabIndex = 0;
			this->btn16->Text = L"button1";
			this->btn16->UseVisualStyleBackColor = true;
			this->btn16->Click += gcnew System::EventHandler(this, &ListWordsGame::btn16_Click);
			// 
			// btn17
			// 
			this->btn17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn17->Location = System::Drawing::Point(0, 640);
			this->btn17->Name = L"btn17";
			this->btn17->Size = System::Drawing::Size(291, 80);
			this->btn17->TabIndex = 0;
			this->btn17->Text = L"button1";
			this->btn17->UseVisualStyleBackColor = true;
			this->btn17->Click += gcnew System::EventHandler(this, &ListWordsGame::btn17_Click);
			// 
			// btn18
			// 
			this->btn18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btn18->Location = System::Drawing::Point(291, 640);
			this->btn18->Name = L"btn18";
			this->btn18->Size = System::Drawing::Size(291, 80);
			this->btn18->TabIndex = 0;
			this->btn18->Text = L"button1";
			this->btn18->UseVisualStyleBackColor = true;
			this->btn18->Click += gcnew System::EventHandler(this, &ListWordsGame::btn18_Click);
			// 
			// ListWordsGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->panelListWord);
			this->Name = L"ListWordsGame";
			this->Text = L"ListWordsGame";
			this->panelListWord->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelCharacter->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureReload))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panelAnswer->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int num = 0;

		std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;

			if (string->Length == 0 || string->Length < 0)
			{
				// MessageBox::Show("No field can be empty");
				return "";

			}

			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);


			return returnString;
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}

		   void AddAnswer() {
			   std::string temp = toStandardString(textWord->Text);

			   int index = this->game->findResult(temp);

			   if (index < this->game->result.size()) {
				   panelAnswer->Controls[num]->Text = textWord->Text;
				   panelAnswer->Controls[num]->BackColor = System::Drawing::Color::LightGreen;
				   num++;
			   }

			   else {
				   MessageBox::Show(L"Từ \"" + textWord->Text + L"\" không tồn tại!");
			   }
		   }
	private: System::Void btnCheck_Click(System::Object^ sender, System::EventArgs^ e) {
		AddAnswer();
	}
	private: System::Void textWord_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			AddAnswer();
		}
	}
	void LoadPage() {
		int i = 0;
		std::string temp;
		for each (System::Windows::Forms::Control ^ pn in this->panelCharacter->Controls) {
			if (pn->Name != L"pictureReload") {
				if (i < this->game->character.size()) {
					temp = "";
					temp += this->game->character[i++];
					pn->Text = gcnew System::String(temp.c_str());
				}

				else {
					pn->Text = L"";
				}
			}


		}

		for each (System::Windows::Forms::Control ^ pn in this->panelAnswer->Controls) {
			pn->Text = L"";
			pn->BackColor = System::Drawing::Color::White;
		}
	}
	private: System::Void pictureReload_Click(System::Object^ sender, System::EventArgs^ e) {
		this->game = new ListWordGame(this->game->enToVi);

		
		LoadPage();
		

	}

	void showResult() {
		int i = 0;
		for each (System::Windows::Forms::Control ^ pn in this->panelAnswer->Controls) {
			if (i < this->game->result.size()) {
				pn->BackColor = System::Drawing::Color::LightGreen;
				pn->Text = gcnew System::String(this->game->result[i++].c_str());
			}

			else {
				pn->BackColor = System::Drawing::Color::White;
				pn->Text = L"";
			}
			
		}
	}
	private: System::Windows::Forms::Form^ activeForm;
	private: void openChildForm(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}

		activeForm = form;
		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelListWord->Controls->Add(form);
		panelListWord->Tag = form;
		panel1->Visible = false;
		panel2->Visible = false;
		form->AutoScroll = false;
		// form->BringToFront();
		form->Show();


	}
	void showWordByAnswer(System::Object^ sender) {
		System::Windows::Forms::Button^ btn = (System::Windows::Forms::Button^)sender;
		int index = this->game->enToVi->findWord(toStandardString(btn->Text));

		if (index != -1) {
			FormContentVocabulary^ vocab = gcnew FormContentVocabulary(this->game->enToVi->_dict[index], panel1, panel2);
			openChildForm(vocab);
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		showResult();
	}

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn10_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn11_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn12_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn13_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn14_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn15_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn16_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn17_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);
}
private: System::Void btn18_Click(System::Object^ sender, System::EventArgs^ e) {
	showWordByAnswer(sender);

}
};
}
