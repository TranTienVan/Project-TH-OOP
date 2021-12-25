#pragma once
#include"./exam/exam.h"


namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormExam
	/// </summary>
	public ref class FormExam : public System::Windows::Forms::Form
	{
	public:
		FormExam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->time = gcnew Timer();
			this->time->Interval = 1000;
			this->time->Enabled = true;
			this->time->Tick += gcnew EventHandler(this, &FormExam::time_Tick);
		}

		FormExam(Exam* test) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->test = test;
			this->time = gcnew Timer();
			this->time->Interval = 3600;
			this->time->Enabled = true;
			this->time->Tick += gcnew EventHandler(this, &FormExam::time_Tick);
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormExam()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Exam* test;
	private: Timer^ time;
	private: System::Windows::Forms::Panel^ panelExam;
	protected:
	private: System::Windows::Forms::Panel^ panelRight;
	private: System::Windows::Forms::Panel^ panelLeft;
	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::PictureBox^ pictureBoxPlay;
	private: System::Windows::Forms::TrackBar^ trackBarAudio;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBoxStop;
	private: System::Windows::Forms::Label^ labelPart;
	private: System::Windows::Forms::Label^ labelTime;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormExam::typeid));
			this->panelExam = (gcnew System::Windows::Forms::Panel());
			this->panelRight = (gcnew System::Windows::Forms::Panel());
			this->labelPart = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxStop = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPlay = (gcnew System::Windows::Forms::PictureBox());
			this->trackBarAudio = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelExam->SuspendLayout();
			this->panelRight->SuspendLayout();
			this->panelLeft->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxStop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarAudio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelExam
			// 
			this->panelExam->Controls->Add(this->panelRight);
			this->panelExam->Controls->Add(this->panelLeft);
			this->panelExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelExam->Location = System::Drawing::Point(0, 0);
			this->panelExam->Name = L"panelExam";
			this->panelExam->Size = System::Drawing::Size(1827, 883);
			this->panelExam->TabIndex = 0;
			// 
			// panelRight
			// 
			this->panelRight->Controls->Add(this->labelPart);
			this->panelRight->Controls->Add(this->labelTime);
			this->panelRight->Controls->Add(this->textBoxAnswer);
			this->panelRight->Controls->Add(this->richTextBox1);
			this->panelRight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelRight->Location = System::Drawing::Point(900, 0);
			this->panelRight->Name = L"panelRight";
			this->panelRight->Size = System::Drawing::Size(927, 883);
			this->panelRight->TabIndex = 1;
			// 
			// labelPart
			// 
			this->labelPart->AutoSize = true;
			this->labelPart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPart->Location = System::Drawing::Point(363, 80);
			this->labelPart->Name = L"labelPart";
			this->labelPart->Size = System::Drawing::Size(153, 58);
			this->labelPart->TabIndex = 4;
			this->labelPart->Text = L"part 1";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->Location = System::Drawing::Point(680, 80);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(151, 58);
			this->labelTime->TabIndex = 3;
			this->labelTime->Text = L"60:00";
			// 
			// textBoxAnswer
			// 
			this->textBoxAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnswer->Location = System::Drawing::Point(252, 797);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->Size = System::Drawing::Size(378, 64);
			this->textBoxAnswer->TabIndex = 2;
			this->textBoxAnswer->Text = L"ABCEDFG";
			this->textBoxAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(62, 168);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(769, 603);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// panelLeft
			// 
			this->panelLeft->Controls->Add(this->pictureBoxStop);
			this->panelLeft->Controls->Add(this->pictureBoxPlay);
			this->panelLeft->Controls->Add(this->trackBarAudio);
			this->panelLeft->Controls->Add(this->pictureBox1);
			this->panelLeft->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLeft->Location = System::Drawing::Point(0, 0);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(900, 883);
			this->panelLeft->TabIndex = 0;
			// 
			// pictureBoxStop
			// 
			this->pictureBoxStop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxStop.Image")));
			this->pictureBoxStop->Location = System::Drawing::Point(100, 48);
			this->pictureBoxStop->Name = L"pictureBoxStop";
			this->pictureBoxStop->Size = System::Drawing::Size(114, 114);
			this->pictureBoxStop->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxStop->TabIndex = 3;
			this->pictureBoxStop->TabStop = false;
			this->pictureBoxStop->Click += gcnew System::EventHandler(this, &FormExam::pictureBoxStop_Click);
			// 
			// pictureBoxPlay
			// 
			this->pictureBoxPlay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPlay.Image")));
			this->pictureBoxPlay->Location = System::Drawing::Point(100, 48);
			this->pictureBoxPlay->Name = L"pictureBoxPlay";
			this->pictureBoxPlay->Size = System::Drawing::Size(114, 114);
			this->pictureBoxPlay->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPlay->TabIndex = 2;
			this->pictureBoxPlay->TabStop = false;
			// 
			// trackBarAudio
			// 
			this->trackBarAudio->Location = System::Drawing::Point(212, 48);
			this->trackBarAudio->Name = L"trackBarAudio";
			this->trackBarAudio->Size = System::Drawing::Size(589, 114);
			this->trackBarAudio->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(100, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(701, 603);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// FormExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->panelExam);
			this->Name = L"FormExam";
			this->Text = L"FormExam";
			this->panelExam->ResumeLayout(false);
			this->panelRight->ResumeLayout(false);
			this->panelRight->PerformLayout();
			this->panelLeft->ResumeLayout(false);
			this->panelLeft->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxStop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarAudio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPart_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void time_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->labelTime->Text = DateTime::Now.ToString();

	}
private: System::Void pictureBoxStop_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
