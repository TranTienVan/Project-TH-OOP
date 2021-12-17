#pragma once

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
	private: System::Windows::Forms::TextBox^ nameTopic;
	protected:
	private: System::Windows::Forms::Panel^ topic1;
	private: System::Windows::Forms::PictureBox^ pictureTopic1;
	private: System::Windows::Forms::TextBox^ textBoxTopic1;
	private: System::Windows::Forms::Button^ button1Topic1;
	private: System::Windows::Forms::Panel^ panelLabelTopic;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBoxTopic4;
	private: System::Windows::Forms::Button^ button1Topic4;
	private: System::Windows::Forms::Panel^ topic2;
	private: System::Windows::Forms::PictureBox^ pictureTopic2;
	private: System::Windows::Forms::TextBox^ textBoxTopic2;
	private: System::Windows::Forms::Button^ button1Topic2;
	private: System::Windows::Forms::PictureBox^ pictureTopic4;
	private: System::Windows::Forms::PictureBox^ pictureTopic3;
	private: System::Windows::Forms::TextBox^ textBoxTopic3;
	private: System::Windows::Forms::Button^ button1Topic3;
	private: System::Windows::Forms::Panel^ topic3;
	private: System::Windows::Forms::Panel^ topic4;
	private: System::Windows::Forms::Panel^ panelTopicVocabulary;

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
			this->textBoxTopic4 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic4 = (gcnew System::Windows::Forms::Button());
			this->topic2 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic2 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic2 = (gcnew System::Windows::Forms::Button());
			this->pictureTopic4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureTopic3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic3 = (gcnew System::Windows::Forms::TextBox());
			this->button1Topic3 = (gcnew System::Windows::Forms::Button());
			this->topic3 = (gcnew System::Windows::Forms::Panel());
			this->topic4 = (gcnew System::Windows::Forms::Panel());
			this->panelTopicVocabulary = (gcnew System::Windows::Forms::Panel());
			this->topic1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->BeginInit();
			this->panelLabelTopic->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->topic2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->BeginInit();
			this->topic3->SuspendLayout();
			this->topic4->SuspendLayout();
			this->panelTopicVocabulary->SuspendLayout();
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
			this->button1Topic4->Text = L"Play";
			this->button1Topic4->UseVisualStyleBackColor = true;
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
			this->button1Topic2->Text = L"Play";
			this->button1Topic2->UseVisualStyleBackColor = true;
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
			this->button1Topic3->Text = L"Play";
			this->button1Topic3->UseVisualStyleBackColor = true;
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
			this->panelTopicVocabulary->TabIndex = 5;
			// 
			// FormGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1859, 988);
			this->Controls->Add(this->panelLabelTopic);
			this->Controls->Add(this->panelTopicVocabulary);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->EndInit();
			this->topic3->ResumeLayout(false);
			this->topic3->PerformLayout();
			this->topic4->ResumeLayout(false);
			this->topic4->PerformLayout();
			this->panelTopicVocabulary->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
