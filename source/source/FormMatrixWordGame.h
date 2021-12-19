#pragma once
#include"./game/matrix_word_game.h"
#include<chrono>
#include<thread>
#include"FormContentVocabulary.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMatrixWordGame
	/// </summary>
	public ref class FormMatrixWordGame : public System::Windows::Forms::Form
	{
	public:
		FormMatrixWordGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			System::Windows::Forms::Button^ temp;
			for (int i = 0; i < 13 * 17; ++i) {
				temp = gcnew System::Windows::Forms::Button();
				temp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				temp->Location = System::Drawing::Point(i % 17 * 60, i / 17 * 60);
				temp->Name = L"ceil" + i.ToString();
				temp->Size = System::Drawing::Size(60, 60);
				
				temp->Text = i.ToString();
				temp->UseVisualStyleBackColor = true;
				temp->BackColor = System::Drawing::Color::White;
				ceil->Controls->Add(temp);
			}

			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
		}

		FormMatrixWordGame(MatrixWordGame* games) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->game = games;
			System::Windows::Forms::Button^ temp;
			std::string s;
			this->btnLearn->Visible = false;
			this->labelName->Text = L"Tìm " + this->game->result.size() + L" từ trong ma trận";
			for (int i = 0; i < 13 * 17; ++i) {
				s = "";
				temp = gcnew System::Windows::Forms::Button();
				temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
				temp->Location = System::Drawing::Point(i % 17 * 65, i / 17 * 65);
				temp->Name = L"ceil" + i.ToString();
				temp->Size = System::Drawing::Size(65, 65);
				temp->TabIndex = 1;
				s += this->game->matrix[i / 17][i % 17];

				temp->Text = gcnew System::String(s.c_str());
				temp->UseVisualStyleBackColor = true;

				ceil->Controls->Add(temp);
			}


			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;



		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMatrixWordGame()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: MatrixWordGame* game;

	private: System::Windows::Forms::Panel^ panelMatrixGame;
	private: System::Windows::Forms::Panel^ panelPlay;
	private: System::Windows::Forms::ComboBox^ comboBoxWord;
	private: System::Windows::Forms::PictureBox^ pictureReload;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnShowAnswer;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Panel^ panelLeft;
	private: System::Windows::Forms::Panel^ ceil;
	private: System::Windows::Forms::Button^ btnLearn;





	
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMatrixWordGame::typeid));
			this->panelMatrixGame = (gcnew System::Windows::Forms::Panel());
			this->panelPlay = (gcnew System::Windows::Forms::Panel());
			this->comboBoxWord = (gcnew System::Windows::Forms::ComboBox());
			this->pictureReload = (gcnew System::Windows::Forms::PictureBox());
			this->btnLearn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnShowAnswer = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->ceil = (gcnew System::Windows::Forms::Panel());
			this->panelMatrixGame->SuspendLayout();
			this->panelPlay->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureReload))->BeginInit();
			this->panelLeft->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMatrixGame
			// 
			this->panelMatrixGame->Controls->Add(this->panelPlay);
			this->panelMatrixGame->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMatrixGame->Location = System::Drawing::Point(0, 0);
			this->panelMatrixGame->Name = L"panelMatrixGame";
			this->panelMatrixGame->Size = System::Drawing::Size(1827, 883);
			this->panelMatrixGame->TabIndex = 0;
			// 
			// panelPlay
			// 
			this->panelPlay->Controls->Add(this->comboBoxWord);
			this->panelPlay->Controls->Add(this->pictureReload);
			this->panelPlay->Controls->Add(this->btnLearn);
			this->panelPlay->Controls->Add(this->button1);
			this->panelPlay->Controls->Add(this->btnShowAnswer);
			this->panelPlay->Controls->Add(this->labelName);
			this->panelPlay->Controls->Add(this->panelLeft);
			this->panelPlay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelPlay->Location = System::Drawing::Point(0, 0);
			this->panelPlay->Name = L"panelPlay";
			this->panelPlay->Size = System::Drawing::Size(1827, 883);
			this->panelPlay->TabIndex = 1;
			// 
			// comboBoxWord
			// 
			this->comboBoxWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxWord->FormattingEnabled = true;
			this->comboBoxWord->Location = System::Drawing::Point(1210, 678);
			this->comboBoxWord->Name = L"comboBoxWord";
			this->comboBoxWord->Size = System::Drawing::Size(514, 66);
			this->comboBoxWord->TabIndex = 8;
			this->comboBoxWord->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMatrixWordGame::comboBoxWord_KeyDown);
			// 
			// pictureReload
			// 
			this->pictureReload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureReload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureReload.Image")));
			this->pictureReload->Location = System::Drawing::Point(1408, 205);
			this->pictureReload->Name = L"pictureReload";
			this->pictureReload->Size = System::Drawing::Size(133, 133);
			this->pictureReload->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureReload->TabIndex = 7;
			this->pictureReload->TabStop = false;
			this->pictureReload->Click += gcnew System::EventHandler(this, &FormMatrixWordGame::pictureReload_Click);
			// 
			// btnLearn
			// 
			this->btnLearn->Location = System::Drawing::Point(1326, 787);
			this->btnLearn->Name = L"btnLearn";
			this->btnLearn->Size = System::Drawing::Size(303, 75);
			this->btnLearn->TabIndex = 2;
			this->btnLearn->Text = L"Học";
			this->btnLearn->UseVisualStyleBackColor = true;
			this->btnLearn->Click += gcnew System::EventHandler(this, &FormMatrixWordGame::btnLearn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1326, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 75);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Tìm";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnShowAnswer
			// 
			this->btnShowAnswer->Location = System::Drawing::Point(1326, 417);
			this->btnShowAnswer->Name = L"btnShowAnswer";
			this->btnShowAnswer->Size = System::Drawing::Size(303, 75);
			this->btnShowAnswer->TabIndex = 2;
			this->btnShowAnswer->Text = L"Xem đáp án";
			this->btnShowAnswer->UseVisualStyleBackColor = true;
			this->btnShowAnswer->Click += gcnew System::EventHandler(this, &FormMatrixWordGame::btnShowAnswer_Click);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(1187, 96);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(567, 58);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"Tìm 18 từ trong ma trận";
			// 
			// panelLeft
			// 
			this->panelLeft->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panelLeft->Controls->Add(this->ceil);
			this->panelLeft->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLeft->Location = System::Drawing::Point(0, 0);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(1181, 883);
			this->panelLeft->TabIndex = 0;
			// 
			// ceil
			// 
			this->ceil->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ceil->Location = System::Drawing::Point(37, 52);
			this->ceil->Name = L"ceil";
			this->ceil->Size = System::Drawing::Size(1105, 845);
			this->ceil->TabIndex = 1;
			// 
			// FormMatrixWordGame
			// 
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->panelMatrixGame);
			this->Name = L"FormMatrixWordGame";
			this->Text = L"FormMatrixWordGame";
			this->panelMatrixGame->ResumeLayout(false);
			this->panelPlay->ResumeLayout(false);
			this->panelPlay->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureReload))->EndInit();
			this->panelLeft->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btnShowAnswer_Click(System::Object^ sender, System::EventArgs^ e) {
		
		for each (MatrixAnswer ans in this->game->result) {
			if (ans.i1 == ans.i2) {
				for (int i = ans.j1; i <= ans.j2; ++i) {
					this->ceil->Controls[ans.i1 * 17 + i]->BackColor = System::Drawing::Color::LightBlue;
				}

				
			}

			else {
				for (int i = ans.i1; i <= ans.i2; ++i) {
					this->ceil->Controls[i * 17 + ans.j1]->BackColor = System::Drawing::Color::LightBlue;
				}
				
			}
			if (this->comboBoxWord->Items->IndexOf(this->comboBoxWord->Text) == -1)
				this->comboBoxWord->Items->Add(gcnew System::String(ans.word.c_str()));
		}

		this->comboBoxWord->Text = L"";
		this->btnLearn->Visible = true;
	}

	void LoadPage() {
		
		for each (System::Windows::Forms::Control ^ obj in this->ceil->Controls) {
			obj->BackColor = System::Drawing::Color::White;
		}

		game = new MatrixWordGame(game->enToVi);

		std::string s;
		int i = 0;
		for each (System::Windows::Forms::Control ^ ctr in this->ceil->Controls) {
			s = "";
			s += this->game->matrix[i / 17][i % 17];
			ctr->Text = gcnew System::String(s.c_str());
			++i;
		}
		this->comboBoxWord->Items->Clear();
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
		panelMatrixGame->Controls->Add(form);
		panelMatrixGame->Tag = form;
		panelLeft->Visible = false;
		panelPlay->Visible = false;
		form->AutoScroll = false;
		// form->BringToFront();
		form->Show();


	}

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
private: System::Void pictureReload_Click(System::Object^ sender, System::EventArgs^ e) {
	this->btnLearn->Visible = false;
	LoadPage();
	this->comboBoxWord->Text = L"";
	this->labelName->Text = L"Tìm " + this->game->result.size() + L" từ trong ma trận";
}

	   void checkAnswer() {
		   std::string s = toStandardString(this->comboBoxWord->Text);
			
		   int l = this->game->findResult(s);
		   int r = l;

		   if (l != -1) {
			   
			   while (l >= 0 && this->game->result[l].word == s) {
				   --l;
			   }

			   while (r < this->game->result.size() && this->game->result[r].word == s) {
				   ++r;
			   }

			   for each (System::Windows::Forms::Control ^ ctr in this->ceil->Controls) {
				   if (ctr->BackColor == System::Drawing::Color::LightGreen) {
					   ctr->BackColor = System::Drawing::Color::LightBlue;
				   }
			   }
			   for (int k = l + 1; k <= r - 1; ++k) {
				   if (this->game->result[k].i1 == this->game->result[k].i2) {
					   for (int i = this->game->result[k].j1; i <= this->game->result[k].j2; ++i) {
						   this->ceil->Controls[this->game->result[k].i1 * 17 + i]->BackColor = System::Drawing::Color::LightGreen;
					   }


				   }

				   else {
					   for (int i = this->game->result[k].i1; i <= this->game->result[k].i2; ++i) {
						   this->ceil->Controls[i * 17 + this->game->result[k].j1]->BackColor = System::Drawing::Color::LightGreen;
					   }

				   }

			   }

			   if (this->comboBoxWord->Items->IndexOf(this->comboBoxWord->Text) == -1)
					this->comboBoxWord->Items->Add(this->comboBoxWord->Text);
				
			   this->comboBoxWord->Text = L"";
		   }

		   else {
			   MessageBox::Show(L"Từ \"" + this->comboBoxWord->Text + L"\" không tồn tại");
		   }
		   
	   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	checkAnswer();
	 
}

private: System::Void comboBoxWord_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		checkAnswer();
	}
}


private: System::Void btnLearn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = toStandardString(this->comboBoxWord->Text);
	int index = this->game->enToVi->findWord(s);
	if (index != -1) {
		FormContentVocabulary^ cnt = gcnew FormContentVocabulary(this->game->enToVi->_dict[index], panelLeft, panelPlay);
		openChildForm(cnt);
	}
	
}
};
}
