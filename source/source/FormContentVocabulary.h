#pragma once
#include"vocabulary/vocabulary.h"
#include <windows.h>
#include<stringapiset.h>


namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Summary for FormContentVocabulary
	/// </summary>
	public ref class FormContentVocabulary : public System::Windows::Forms::Form
	{
	public:
		FormContentVocabulary(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormContentVocabulary(Vocabulary vocab, System::Windows::Forms::Panel^ panelDictionary) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->panelDictionary = panelDictionary;
			
			System::String^ word = gcnew System::String(vocab.getWord().c_str());
			System::String^ path = L"../../assets/" + word + L".png";
			if (vocab.getImage() != "") {
				pictureContent->Image = gcnew System::Drawing::Bitmap(path);
			}

			else {
				pictureContent->Image = gcnew System::Drawing::Bitmap(L"../../assets/ball.png");
			}

			pictureContent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			textWord->Text = word;

			this->vocab = &vocab;
			player = gcnew System::Media::SoundPlayer();

			if (vocab.getAudio() != "") {
				player->SoundLocation = L"../../assets/wav/" + word + L".wav";
			}

			else {
				player->SoundLocation = L"";
			}







			txtSpelling->Text = gcnew System::String(UTF8ToUnicode(vocab.getSpelling()).c_str());

			System::String^ content = L"# ";
			content += gcnew System::String(UTF8ToUnicode(vocab.getType()).c_str()) + L"\n\n";


			content += "+ " + gcnew System::String(UTF8ToUnicode(vocab.getDefinition()).c_str()) + L"\n\n";

			for (int i = 0; i < vocab.getExamples().size(); ++i) {
				content += "- " + gcnew System::String(UTF8ToUnicode(vocab.getExamples()[i]).c_str()) + L"\n";
			}

			txtContent->Text = content;
		}
		FormContentVocabulary(Vocabulary vocab, System::Windows::Forms::ListView^ listVocabs) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->listVocabs = listVocabs;
			System::String ^word = gcnew System::String(vocab.getWord().c_str());
			System::String^ path = L"../../assets/" + word + L".png";
			if (vocab.getImage() != "") {
				pictureContent->Image = gcnew System::Drawing::Bitmap(path);
			}

			else {
				pictureContent->Image = gcnew System::Drawing::Bitmap(L"../../assets/ball.png");
			}
			
			pictureContent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			textWord->Text = word;

			this->vocab = &vocab;
			player = gcnew System::Media::SoundPlayer();
			
			if (vocab.getAudio() != "") {
				player->SoundLocation = L"../../assets/wav/" + word + L".wav";
			}

			else {
				player->SoundLocation = L"";
			}
			

			
			
			
			

			txtSpelling->Text = gcnew System::String(UTF8ToUnicode(vocab.getSpelling()).c_str());

			System::String^ content = L"# ";
			content += gcnew System::String(UTF8ToUnicode(vocab.getType()).c_str()) + L"\n\n";


			content += "+ " + gcnew System::String(UTF8ToUnicode(vocab.getDefinition()).c_str()) + L"\n\n";

			for (int i = 0; i < vocab.getExamples().size(); ++i) {
				content += "- " + gcnew System::String(UTF8ToUnicode(vocab.getExamples()[i]).c_str()) + L"\n";
			}

			txtContent->Text = content;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormContentVocabulary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Vocabulary* vocab;
	private: System::Windows::Forms::Panel^ panelDictionary;
	private: System::Windows::Forms::ListView^ listVocabs;
	private: System::Windows::Forms::PictureBox^ pictureContent;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ audioSource;


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::TextBox^ textWord;
	private: System::Windows::Forms::TextBox^ txtSpelling;

	private: System::Media::SoundPlayer^ player;
	private: System::Windows::Forms::RichTextBox^ txtContent;
private: System::Windows::Forms::PictureBox^ pictureBox1;





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
		/// 
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormContentVocabulary::typeid));
			this->pictureContent = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtContent = (gcnew System::Windows::Forms::RichTextBox());
			this->txtSpelling = (gcnew System::Windows::Forms::TextBox());
			this->audioSource = (gcnew System::Windows::Forms::PictureBox());
			this->textWord = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureContent))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureContent
			// 
			this->pictureContent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureContent->Location = System::Drawing::Point(133, 160);
			this->pictureContent->Name = L"pictureContent";
			this->pictureContent->Size = System::Drawing::Size(523, 554);
			this->pictureContent->TabIndex = 0;
			this->pictureContent->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->txtContent);
			this->panel1->Controls->Add(this->txtSpelling);
			this->panel1->Controls->Add(this->audioSource);
			this->panel1->Controls->Add(this->textWord);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(772, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(978, 895);
			this->panel1->TabIndex = 1;
			// 
			// txtContent
			// 
			this->txtContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtContent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContent->Location = System::Drawing::Point(0, 158);
			this->txtContent->Name = L"txtContent";
			this->txtContent->Size = System::Drawing::Size(978, 737);
			this->txtContent->TabIndex = 5;
			this->txtContent->Text = L"";
			// 
			// txtSpelling
			// 
			this->txtSpelling->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtSpelling->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSpelling->Location = System::Drawing::Point(243, 116);
			this->txtSpelling->Name = L"txtSpelling";
			this->txtSpelling->Size = System::Drawing::Size(500, 45);
			this->txtSpelling->TabIndex = 4;
			this->txtSpelling->Text = L"phiên âm";
			this->txtSpelling->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// audioSource
			// 
			this->audioSource->Cursor = System::Windows::Forms::Cursors::Hand;
			this->audioSource->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"audioSource.Image")));
			this->audioSource->Location = System::Drawing::Point(42, 34);
			this->audioSource->Name = L"audioSource";
			this->audioSource->Size = System::Drawing::Size(88, 84);
			this->audioSource->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->audioSource->TabIndex = 1;
			this->audioSource->TabStop = false;
			this->audioSource->Click += gcnew System::EventHandler(this, &FormContentVocabulary::audioSource_Click);
			// 
			// textWord
			// 
			this->textWord->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textWord->Dock = System::Windows::Forms::DockStyle::Top;
			this->textWord->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textWord->Location = System::Drawing::Point(0, 0);
			this->textWord->Name = L"textWord";
			this->textWord->Size = System::Drawing::Size(978, 158);
			this->textWord->TabIndex = 3;
			this->textWord->Text = L"word";
			this->textWord->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(786, 895);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(860, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(88, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormContentVocabulary::pictureBox1_Click);
			// 
			// FormContentVocabulary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1750, 895);
			this->Controls->Add(this->pictureContent);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Name = L"FormContentVocabulary";
			this->Text = L"FormContentVocabulary";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureContent))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void audioSource_Click(System::Object^ sender, System::EventArgs^ e) {
	if (player->SoundLocation != L"") {
		player->Load();
		player->Play();
	}
	
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->listVocabs != nullptr) {
		this->listVocabs->BringToFront();
	}

	else {
		// this->panelDictionary->SendToBack();
		panelDictionary->Controls->Remove(this);
	}
	

	this->Close();

}
};
}
