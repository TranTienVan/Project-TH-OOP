#pragma once
#include"./grammar/grammar.h"
#include<Windows.h>
#include"./topic/topic_grammar.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormContentGrammar
	/// </summary>
	public ref class FormContentGrammar : public System::Windows::Forms::Form
	{
	public:
		FormContentGrammar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormContentGrammar(TopicGrammar* topic, System::Windows::Forms::Panel^ panel) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->grammars = new Grammar*[topic->grammars.size()];
			for (int i = 0; i < topic->grammars.size(); ++i) {
				this->grammars[i] = &topic->grammars[i];
			}

			activeGrammar = 0;
			this->grammars[activeGrammar]->addProcess();
			this->sizeGrammars = topic->grammars.size();
			this->btnName->Text = gcnew System::String(UTF8ToUnicode(this->grammars[activeGrammar]->getName()).c_str());
			this->panelContent = panel;
			this->btnExplanation->BackColor = System::Drawing::Color::White;
			this->btnStructure->BackColor = System::Drawing::Color::White;
			this->btnExample->BackColor = System::Drawing::Color::White;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormContentGrammar()
		{
			if (components)
			{
				delete components;
			}
		}
		Grammar** grammars;

		int activeGrammar;
		int sizeGrammars;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnExample;
	private: System::Windows::Forms::Button^ btnExplanation;
	private: System::Windows::Forms::Button^ btnName;
	private: System::Windows::Forms::Button^ btnStructure;
	private: System::Windows::Forms::RichTextBox^ richTextContent;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormContentGrammar::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnExample = (gcnew System::Windows::Forms::Button());
			this->btnExplanation = (gcnew System::Windows::Forms::Button());
			this->btnName = (gcnew System::Windows::Forms::Button());
			this->btnStructure = (gcnew System::Windows::Forms::Button());
			this->richTextContent = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnExample);
			this->panel1->Controls->Add(this->btnExplanation);
			this->panel1->Controls->Add(this->btnName);
			this->panel1->Controls->Add(this->btnStructure);
			this->panel1->Controls->Add(this->richTextContent);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1827, 883);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1314, 707);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(117, 107);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FormContentGrammar::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1456, 707);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormContentGrammar::pictureBox1_Click);
			// 
			// btnExample
			// 
			this->btnExample->Location = System::Drawing::Point(1341, 530);
			this->btnExample->Name = L"btnExample";
			this->btnExample->Size = System::Drawing::Size(218, 85);
			this->btnExample->TabIndex = 1;
			this->btnExample->Text = L"Các ví dụ";
			this->btnExample->UseVisualStyleBackColor = true;
			this->btnExample->Click += gcnew System::EventHandler(this, &FormContentGrammar::btnExample_Click);
			// 
			// btnExplanation
			// 
			this->btnExplanation->Location = System::Drawing::Point(1341, 378);
			this->btnExplanation->Name = L"btnExplanation";
			this->btnExplanation->Size = System::Drawing::Size(218, 85);
			this->btnExplanation->TabIndex = 1;
			this->btnExplanation->Text = L"Giải thích";
			this->btnExplanation->UseVisualStyleBackColor = true;
			this->btnExplanation->Click += gcnew System::EventHandler(this, &FormContentGrammar::btnExplanation_Click);
			// 
			// btnName
			// 
			this->btnName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnName->Location = System::Drawing::Point(269, 27);
			this->btnName->Name = L"btnName";
			this->btnName->Size = System::Drawing::Size(679, 85);
			this->btnName->TabIndex = 1;
			this->btnName->Text = L"Simple Present";
			this->btnName->UseVisualStyleBackColor = true;
			// 
			// btnStructure
			// 
			this->btnStructure->Location = System::Drawing::Point(1341, 228);
			this->btnStructure->Name = L"btnStructure";
			this->btnStructure->Size = System::Drawing::Size(218, 85);
			this->btnStructure->TabIndex = 1;
			this->btnStructure->Text = L"Cấu trúc";
			this->btnStructure->UseVisualStyleBackColor = true;
			this->btnStructure->Click += gcnew System::EventHandler(this, &FormContentGrammar::btnStructure_Click);
			// 
			// richTextContent
			// 
			this->richTextContent->Location = System::Drawing::Point(91, 153);
			this->richTextContent->Name = L"richTextContent";
			this->richTextContent->Size = System::Drawing::Size(992, 661);
			this->richTextContent->TabIndex = 0;
			this->richTextContent->Text = L"";
			// 
			// FormContentGrammar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->panel1);
			this->Name = L"FormContentGrammar";
			this->Text = L"FormContentGrammar";
			this->panel1->ResumeLayout(false);
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
	void showContent(std::vector<std::string> contents) {
		System::String^ cnt = L"";
		for (int i = 0; i < contents.size(); ++i) {
			cnt += L"- ";
			cnt += gcnew System::String(UTF8ToUnicode(contents[i]).c_str());
			cnt += "\n\n";
			
		}

		this->richTextContent->Text = cnt;
		this->btnExplanation->BackColor = System::Drawing::Color::White;
		this->btnStructure->BackColor = System::Drawing::Color::White;
		this->btnExample->BackColor = System::Drawing::Color::White;
	}
	private: System::Void btnStructure_Click(System::Object^ sender, System::EventArgs^ e) {
		showContent(this->grammars[activeGrammar]->getStructure());
		
		this->btnStructure->BackColor = System::Drawing::Color::LightBlue;
		

	}
private: System::Void btnExplanation_Click(System::Object^ sender, System::EventArgs^ e) {
	showContent(this->grammars[activeGrammar]->getExplanation());
	this->btnExplanation->BackColor = System::Drawing::Color::LightBlue;
	
	
}
private: System::Void btnExample_Click(System::Object^ sender, System::EventArgs^ e) {
	showContent(this->grammars[activeGrammar]->getExample());
	
	this->btnExample->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeGrammar < sizeGrammars - 1) {
		activeGrammar++;
		this->grammars[activeGrammar]->addProcess();
		this->richTextContent->Text = L"";
		this->btnName->Text = gcnew System::String(UTF8ToUnicode(this->grammars[activeGrammar]->getName()).c_str());
		this->btnExplanation->BackColor = System::Drawing::Color::White;
		this->btnStructure->BackColor = System::Drawing::Color::White;
		this->btnExample->BackColor = System::Drawing::Color::White;
	}
	
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeGrammar >= 1) {
		activeGrammar--;
		this->grammars[activeGrammar]->addProcess();
		this->richTextContent->Text = L"";
		this->btnName->Text = gcnew System::String(UTF8ToUnicode(this->grammars[activeGrammar]->getName()).c_str());
		this->btnExplanation->BackColor = System::Drawing::Color::White;
		this->btnStructure->BackColor = System::Drawing::Color::White;
		this->btnExample->BackColor = System::Drawing::Color::White;
	}
}
};
}
