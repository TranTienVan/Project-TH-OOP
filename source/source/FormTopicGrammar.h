#pragma once
#include"./topic/topic_grammar.h"
#include<Windows.h>
#include<stringapiset.h>
#include"FormGrammar.h"
#include"FormHome.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormTopicGrammar
	/// </summary>
	public ref class FormTopicGrammar : public System::Windows::Forms::Form
	{
	public:
		FormTopicGrammar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormTopicGrammar(std::vector<AppComponent*> topics, System::Windows::Forms::Panel^ panelContent) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTopicGrammar::typeid));

			// this->pictureTopic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"action")));
			// this->pictureTopic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			int i_topic = 0;

			this->topicGrammars = new TopicGrammar*[4];
			for each (System::Windows::Forms::Panel ^ pn in this->panelTopicVocabulary->Controls)
			{
				this->topicGrammars[i_topic] = (TopicGrammar*)topics[i_topic + 12];
				for each (System::Windows::Forms::Control ^ ctr in pn->Controls) {
					
					System::String^ s = gcnew System::String(this->topicGrammars[i_topic]->getName().c_str());
					

					if (ctr->Name->Contains(L"pictureTopic")) {
						System::Windows::Forms::PictureBox^ temp = (System::Windows::Forms::PictureBox^)ctr;

						temp->Image = gcnew Bitmap(L"../../assets/" + s + L".png");

						temp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					}

					else if (ctr->Name->Contains(L"textBoxTopic")) {
						System::Windows::Forms::TextBox^ temp = (System::Windows::Forms::TextBox^)ctr;

						temp->Text = s;
						temp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					}



				}
				
				++i_topic;
			}

			this->panelContent = panelContent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTopicGrammar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: TopicGrammar** topicGrammars;
	private: System::Windows::Forms::Panel^ panelTopicVocabulary;
	private: System::Windows::Forms::Panel^ panelContent;
	protected:
	private: System::Windows::Forms::Panel^ topic1;
	private: System::Windows::Forms::PictureBox^ pictureTopic1;
	private: System::Windows::Forms::TextBox^ textBoxTopic1;

	private: System::Windows::Forms::Button^ button1Topic1;
	private: System::Windows::Forms::Panel^ panelLabelTopic;
	private: System::Windows::Forms::TextBox^ nameTopic;
	private: System::Windows::Forms::Panel^ topic4;
	private: System::Windows::Forms::PictureBox^ pictureTopic4;
	private: System::Windows::Forms::TextBox^ textBoxTopic4;





	private: System::Windows::Forms::Button^ button1Topic4;

	private: System::Windows::Forms::Panel^ topic3;
	private: System::Windows::Forms::PictureBox^ pictureTopic3;
	private: System::Windows::Forms::TextBox^ textBoxTopic3;





	private: System::Windows::Forms::Button^ button1Topic3;

	private: System::Windows::Forms::Panel^ topic2;
	private: System::Windows::Forms::PictureBox^ pictureTopic2;
	private: System::Windows::Forms::TextBox^ textBoxTopic2;





	private: System::Windows::Forms::Button^ button1Topic2;
private: System::Windows::Forms::PictureBox^ pictureBox1;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTopicGrammar::typeid));
			this->panelTopicVocabulary = (gcnew System::Windows::Forms::Panel());
			this->topic1 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic1 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic1 = (gcnew System::Windows::Forms::Button());
			this->topic2 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic2 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic2 = (gcnew System::Windows::Forms::Button());
			this->topic3 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic3 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic3 = (gcnew System::Windows::Forms::Button());
			this->topic4 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic4 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic4 = (gcnew System::Windows::Forms::Button());
			this->panelLabelTopic = (gcnew System::Windows::Forms::Panel());
			this->nameTopic = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTopicVocabulary->SuspendLayout();
			this->topic1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->BeginInit();
			this->topic2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->BeginInit();
			this->topic3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->BeginInit();
			this->topic4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->BeginInit();
			this->panelLabelTopic->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTopicVocabulary
			// 
			this->panelTopicVocabulary->AutoScroll = true;
			this->panelTopicVocabulary->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->panelTopicVocabulary->AutoScrollMinSize = System::Drawing::Size(10, 10);
			this->panelTopicVocabulary->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panelTopicVocabulary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTopicVocabulary->Controls->Add(this->topic1);
			this->panelTopicVocabulary->Controls->Add(this->topic2);
			this->panelTopicVocabulary->Controls->Add(this->topic3);
			this->panelTopicVocabulary->Controls->Add(this->topic4);
			this->panelTopicVocabulary->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelTopicVocabulary->Location = System::Drawing::Point(0, 110);
			this->panelTopicVocabulary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelTopicVocabulary->Name = L"panelTopicVocabulary";
			this->panelTopicVocabulary->Size = System::Drawing::Size(1859, 878);
			this->panelTopicVocabulary->TabIndex = 3;
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
			this->pictureTopic1->Location = System::Drawing::Point(55, 54);
			this->pictureTopic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic1->Name = L"pictureTopic1";
			this->pictureTopic1->Size = System::Drawing::Size(596, 451);
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
			this->textBoxTopic1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxTopic1->TextChanged += gcnew System::EventHandler(this, &FormTopicGrammar::textBoxTopic1_TextChanged);
			// 
			// button1Topic1
			// 
			this->button1Topic1->Location = System::Drawing::Point(256, 607);
			this->button1Topic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic1->Name = L"button1Topic1";
			this->button1Topic1->Size = System::Drawing::Size(200, 70);
			this->button1Topic1->TabIndex = 3;
			this->button1Topic1->Text = L"Learn";
			this->button1Topic1->UseVisualStyleBackColor = true;
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
			this->pictureTopic2->Location = System::Drawing::Point(50, 54);
			this->pictureTopic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic2->Name = L"pictureTopic2";
			this->pictureTopic2->Size = System::Drawing::Size(596, 451);
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
			this->textBoxTopic2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1Topic2
			// 
			this->button1Topic2->Location = System::Drawing::Point(253, 607);
			this->button1Topic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic2->Name = L"button1Topic2";
			this->button1Topic2->Size = System::Drawing::Size(200, 70);
			this->button1Topic2->TabIndex = 3;
			this->button1Topic2->Text = L"Learn";
			this->button1Topic2->UseVisualStyleBackColor = true;
			// 
			// topic3
			// 
			this->topic3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic3->Controls->Add(this->pictureTopic3);
			this->topic3->Controls->Add(this->textBoxTopic3);
			this->topic3->Controls->Add(this->button1Topic3);
			this->topic3->Location = System::Drawing::Point(114, 829);
			this->topic3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic3->Name = L"topic3";
			this->topic3->Size = System::Drawing::Size(700, 700);
			this->topic3->TabIndex = 2;
			// 
			// pictureTopic3
			// 
			this->pictureTopic3->Location = System::Drawing::Point(55, 41);
			this->pictureTopic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic3->Name = L"pictureTopic3";
			this->pictureTopic3->Size = System::Drawing::Size(596, 451);
			this->pictureTopic3->TabIndex = 5;
			this->pictureTopic3->TabStop = false;
			// 
			// textBoxTopic3
			// 
			this->textBoxTopic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTopic3->Location = System::Drawing::Point(55, 517);
			this->textBoxTopic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic3->Name = L"textBoxTopic3";
			this->textBoxTopic3->Size = System::Drawing::Size(596, 53);
			this->textBoxTopic3->TabIndex = 4;
			this->textBoxTopic3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1Topic3
			// 
			this->button1Topic3->Location = System::Drawing::Point(256, 604);
			this->button1Topic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic3->Name = L"button1Topic3";
			this->button1Topic3->Size = System::Drawing::Size(200, 70);
			this->button1Topic3->TabIndex = 3;
			this->button1Topic3->Text = L"Learn";
			this->button1Topic3->UseVisualStyleBackColor = true;
			// 
			// topic4
			// 
			this->topic4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic4->Controls->Add(this->pictureTopic4);
			this->topic4->Controls->Add(this->textBoxTopic4);
			this->topic4->Controls->Add(this->button1Topic4);
			this->topic4->Location = System::Drawing::Point(991, 829);
			this->topic4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic4->Name = L"topic4";
			this->topic4->Size = System::Drawing::Size(700, 700);
			this->topic4->TabIndex = 3;
			// 
			// pictureTopic4
			// 
			this->pictureTopic4->Location = System::Drawing::Point(50, 41);
			this->pictureTopic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic4->Name = L"pictureTopic4";
			this->pictureTopic4->Size = System::Drawing::Size(596, 451);
			this->pictureTopic4->TabIndex = 5;
			this->pictureTopic4->TabStop = false;
			// 
			// textBoxTopic4
			// 
			this->textBoxTopic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTopic4->Location = System::Drawing::Point(50, 517);
			this->textBoxTopic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic4->Name = L"textBoxTopic4";
			this->textBoxTopic4->Size = System::Drawing::Size(596, 53);
			this->textBoxTopic4->TabIndex = 4;
			this->textBoxTopic4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1Topic4
			// 
			this->button1Topic4->Location = System::Drawing::Point(253, 604);
			this->button1Topic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic4->Name = L"button1Topic4";
			this->button1Topic4->Size = System::Drawing::Size(200, 70);
			this->button1Topic4->TabIndex = 3;
			this->button1Topic4->Text = L"Learn";
			this->button1Topic4->UseVisualStyleBackColor = true;
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
			this->panelLabelTopic->TabIndex = 4;
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
			this->nameTopic->Text = L"Topic";
			this->nameTopic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormTopicGrammar::pictureBox1_Click);
			// 
			// FormTopicGrammar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 988);
			this->Controls->Add(this->panelLabelTopic);
			this->Controls->Add(this->panelTopicVocabulary);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormTopicGrammar";
			this->Text = L"FormTopicGrammar";
			this->panelTopicVocabulary->ResumeLayout(false);
			this->topic1->ResumeLayout(false);
			this->topic1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->EndInit();
			this->topic2->ResumeLayout(false);
			this->topic2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->EndInit();
			this->topic3->ResumeLayout(false);
			this->topic3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->EndInit();
			this->topic4->ResumeLayout(false);
			this->topic4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->EndInit();
			this->panelLabelTopic->ResumeLayout(false);
			this->panelLabelTopic->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Windows::Forms::Form^ activeForm;
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

		
	private: void openChildForm(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}

		activeForm = form;
		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelTopicVocabulary->Controls->Add(form);
		panelTopicVocabulary->Tag = form;
		panelTopicVocabulary->AutoScroll = false;
		form->BringToFront();
		form->Show();


	}

	private: void ExecuteButtonLearn(System::Object^ sender) {
		System::Windows::Forms::Button^ btn = (System::Windows::Forms::Button^)sender;

		System::String^ temp = btn->Name->Substring(12);
		int i_topic = int::Parse(temp);
		
		FormGrammar^ nextForm = gcnew FormGrammar(topicGrammars[i_topic - 1]->getGrammars());

		openChildForm(nextForm);
	}
	private: System::Void textBoxTopic1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	void turnBackHome(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}


		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContent->Controls->Add(form);
		panelContent->Tag = form;
		panelContent->AutoScroll = false;
		form->BringToFront();
		form->Show();


	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeForm != nullptr) {
		activeForm->Close();
		this->panelTopicVocabulary->AutoScroll = true;
		this->panelTopicVocabulary->Controls->Remove(activeForm);
		activeForm = nullptr;
	}

	else {
		panelContent->Controls->Remove(this);
		FormHome^ formHome = gcnew FormHome();
		turnBackHome(formHome);
		this->Close();
	}
}
};
}
