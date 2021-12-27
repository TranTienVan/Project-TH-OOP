#pragma once
#include"./exam/exam.h"
#include<regex>
#include<sstream>
#include<Windows.h>
#include<codecvt>
#include<algorithm>
#include<string>
#include"FormScoreExam.h"
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
			this->test = new Exam();
			this->test->StartExam();
			
			this->audioListening->URL = L"C:/Users/Among/Desktop/Code/CPP/OOP/TH/Project-TH-OOP/database/Exam/Exam1/Part 1.mp3";
			this->audioListening->Ctlcontrols->stop();
			
		}

		FormExam(Exam* test, int k) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			

			this->test = test;
			this->time = gcnew Timer();
			this->time->Interval = 1000;
			this->time->Enabled = true;
			this->time->Tick += gcnew EventHandler(this, &FormExam::time_Tick);
			
			this->test->StartExam();

			index = 0;
			type = L"part 1";

			this->direction = L"@@ REPLACE THE \"-\" CHARACTER INTO ANY OF (A, B, C, D) TO ANSWER EACH OF QUESTION\n";
			this->direction += L"@@ THE FIRST \"-\" REPRESENT TO THE FIRST QUESTION AND SO ON...\n";
			this->direction += L"@@ For example: Question 1: A, Question 2: B, Question 3: \n";
			this->direction += L"@@   => REPLACE \"- - -\" TO \"A B C\"\n";

			this->btnPicture1->BackColor = System::Drawing::Color::White;
			this->btnPicture2->BackColor = System::Drawing::Color::White;
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			std::string s = ExePath();
			this->indexOfTest = k;
			s = ReplaceAll(s, "\\", "/");
			s = ReplaceAll(s, "/source/x64/Debug", "/database/Exam/Exam");
			s += std::to_string(k) + "/";

			this->path = gcnew System::String(s.c_str());
			LoadQuestion();
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
	private: int indexOfTest;
	private: System::String^ path;
	private: System::String^ type;
	private: System::String^ direction;
	private: int index;
	private: Exam* test;
	private: Timer^ time;
	private: System::Windows::Forms::Panel^ panelExam;
	protected:
	private: System::Windows::Forms::Panel^ panelRight;
	private: System::Windows::Forms::Panel^ panelLeft;
	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::RichTextBox^ textQuestion;


	private: System::Windows::Forms::PictureBox^ pictureBoxImage;

	private: System::Windows::Forms::Label^ labelPart;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::PictureBox^ pictureBoxTurnRight;

	private: System::Windows::Forms::PictureBox^ pictureBoxTurnLeft;
	private: System::Windows::Forms::Panel^ panelAudio;
	private: AxWMPLib::AxWindowsMediaPlayer^ audioListening;
	private: System::Windows::Forms::Button^ btnPicture2;
	private: System::Windows::Forms::Button^ btnPicture1;
	private: System::Windows::Forms::Button^ buttonSubmit;
	private: System::Windows::Forms::PictureBox^ pictureBoxExit;

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
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->pictureBoxExit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTurnRight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTurnLeft = (gcnew System::Windows::Forms::PictureBox());
			this->labelPart = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->textQuestion = (gcnew System::Windows::Forms::RichTextBox());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->btnPicture2 = (gcnew System::Windows::Forms::Button());
			this->btnPicture1 = (gcnew System::Windows::Forms::Button());
			this->panelAudio = (gcnew System::Windows::Forms::Panel());
			this->audioListening = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->pictureBoxImage = (gcnew System::Windows::Forms::PictureBox());
			this->panelExam->SuspendLayout();
			this->panelRight->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTurnRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTurnLeft))->BeginInit();
			this->panelLeft->SuspendLayout();
			this->panelAudio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioListening))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImage))->BeginInit();
			this->SuspendLayout();
			// 
			// panelExam
			// 
			this->panelExam->Controls->Add(this->panelRight);
			this->panelExam->Controls->Add(this->panelLeft);
			this->panelExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelExam->Location = System::Drawing::Point(0, 0);
			this->panelExam->Name = L"panelExam";
			this->panelExam->Size = System::Drawing::Size(1859, 1090);
			this->panelExam->TabIndex = 0;
			// 
			// panelRight
			// 
			this->panelRight->AutoSize = true;
			this->panelRight->Controls->Add(this->buttonSubmit);
			this->panelRight->Controls->Add(this->pictureBoxExit);
			this->panelRight->Controls->Add(this->pictureBoxTurnRight);
			this->panelRight->Controls->Add(this->pictureBoxTurnLeft);
			this->panelRight->Controls->Add(this->labelPart);
			this->panelRight->Controls->Add(this->labelTime);
			this->panelRight->Controls->Add(this->textBoxAnswer);
			this->panelRight->Controls->Add(this->textQuestion);
			this->panelRight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelRight->Location = System::Drawing::Point(887, 0);
			this->panelRight->Name = L"panelRight";
			this->panelRight->Size = System::Drawing::Size(972, 1090);
			this->panelRight->TabIndex = 1;
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSubmit->Location = System::Drawing::Point(85, 47);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(150, 76);
			this->buttonSubmit->TabIndex = 10;
			this->buttonSubmit->Text = L"Nộp bài";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &FormExam::buttonSubmit_Click);
			// 
			// pictureBoxExit
			// 
			this->pictureBoxExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxExit.Image")));
			this->pictureBoxExit->Location = System::Drawing::Point(8, 47);
			this->pictureBoxExit->Name = L"pictureBoxExit";
			this->pictureBoxExit->Size = System::Drawing::Size(71, 76);
			this->pictureBoxExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxExit->TabIndex = 9;
			this->pictureBoxExit->TabStop = false;
			this->pictureBoxExit->Click += gcnew System::EventHandler(this, &FormExam::pictureBoxExit_Click);
			// 
			// pictureBoxTurnRight
			// 
			this->pictureBoxTurnRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxTurnRight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTurnRight.Image")));
			this->pictureBoxTurnRight->Location = System::Drawing::Point(790, 1008);
			this->pictureBoxTurnRight->Name = L"pictureBoxTurnRight";
			this->pictureBoxTurnRight->Size = System::Drawing::Size(96, 64);
			this->pictureBoxTurnRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTurnRight->TabIndex = 5;
			this->pictureBoxTurnRight->TabStop = false;
			this->pictureBoxTurnRight->Click += gcnew System::EventHandler(this, &FormExam::pictureBoxTurnRight_Click);
			
			// 
			// pictureBoxTurnLeft
			// 
			this->pictureBoxTurnLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxTurnLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTurnLeft.Image")));
			this->pictureBoxTurnLeft->Location = System::Drawing::Point(3, 1008);
			this->pictureBoxTurnLeft->Name = L"pictureBoxTurnLeft";
			this->pictureBoxTurnLeft->Size = System::Drawing::Size(96, 64);
			this->pictureBoxTurnLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTurnLeft->TabIndex = 5;
			this->pictureBoxTurnLeft->TabStop = false;
			this->pictureBoxTurnLeft->Click += gcnew System::EventHandler(this, &FormExam::pictureBoxTurnLeft_Click);
			
			// 
			// labelPart
			// 
			this->labelPart->AutoSize = true;
			this->labelPart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPart->Location = System::Drawing::Point(396, 65);
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
			this->labelTime->Location = System::Drawing::Point(735, 65);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(151, 58);
			this->labelTime->TabIndex = 3;
			this->labelTime->Text = L"60:00";
			// 
			// textBoxAnswer
			// 
			this->textBoxAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnswer->Location = System::Drawing::Point(138, 1008);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->Size = System::Drawing::Size(565, 53);
			this->textBoxAnswer->TabIndex = 2;
			this->textBoxAnswer->Text = L"ABCEDFG";
			this->textBoxAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxAnswer->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormExam::textBoxAnswer_KeyDown);
			// 
			// textQuestion
			// 
			this->textQuestion->Location = System::Drawing::Point(3, 126);
			this->textQuestion->Name = L"textQuestion";
			this->textQuestion->Size = System::Drawing::Size(883, 862);
			this->textQuestion->TabIndex = 1;
			this->textQuestion->Text = L"";
			// 
			// panelLeft
			// 
			this->panelLeft->AutoSize = true;
			this->panelLeft->Controls->Add(this->btnPicture2);
			this->panelLeft->Controls->Add(this->btnPicture1);
			this->panelLeft->Controls->Add(this->panelAudio);
			this->panelLeft->Controls->Add(this->pictureBoxImage);
			this->panelLeft->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLeft->Location = System::Drawing::Point(0, 0);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(887, 1090);
			this->panelLeft->TabIndex = 0;
			// 
			// btnPicture2
			// 
			this->btnPicture2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPicture2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPicture2->Location = System::Drawing::Point(465, 1008);
			this->btnPicture2->Name = L"btnPicture2";
			this->btnPicture2->Size = System::Drawing::Size(200, 70);
			this->btnPicture2->TabIndex = 2;
			this->btnPicture2->Text = L"Picture 2";
			this->btnPicture2->UseVisualStyleBackColor = true;
			this->btnPicture2->Click += gcnew System::EventHandler(this, &FormExam::btnPicture2_Click);
			// 
			// btnPicture1
			// 
			this->btnPicture1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPicture1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPicture1->Location = System::Drawing::Point(196, 1008);
			this->btnPicture1->Name = L"btnPicture1";
			this->btnPicture1->Size = System::Drawing::Size(200, 70);
			this->btnPicture1->TabIndex = 2;
			this->btnPicture1->Text = L"Picture 1";
			this->btnPicture1->UseVisualStyleBackColor = true;
			this->btnPicture1->Click += gcnew System::EventHandler(this, &FormExam::btnPicture1_Click);
			// 
			// panelAudio
			// 
			this->panelAudio->Controls->Add(this->audioListening);
			this->panelAudio->Location = System::Drawing::Point(0, 3);
			this->panelAudio->Name = L"panelAudio";
			this->panelAudio->Size = System::Drawing::Size(884, 120);
			this->panelAudio->TabIndex = 1;
			// 
			// audioListening
			// 
			this->audioListening->Dock = System::Windows::Forms::DockStyle::Fill;
			this->audioListening->Enabled = true;
			this->audioListening->Location = System::Drawing::Point(0, 0);
			this->audioListening->Name = L"audioListening";
			this->audioListening->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"audioListening.OcxState")));
			this->audioListening->Size = System::Drawing::Size(884, 120);
			this->audioListening->TabIndex = 0;
			// 
			// pictureBoxImage
			// 
			this->pictureBoxImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxImage.Image")));
			this->pictureBoxImage->Location = System::Drawing::Point(0, 110);
			this->pictureBoxImage->Name = L"pictureBoxImage";
			this->pictureBoxImage->Size = System::Drawing::Size(882, 878);
			this->pictureBoxImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxImage->TabIndex = 0;
			this->pictureBoxImage->TabStop = false;
			this->pictureBoxImage->MouseLeave += gcnew System::EventHandler(this, &FormExam::pictureBoxImage_MouseLeave);
			this->pictureBoxImage->MouseHover += gcnew System::EventHandler(this, &FormExam::pictureBoxImage_MouseHover);
			// 
			// FormExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 1090);
			this->Controls->Add(this->panelExam);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormExam";
			this->Text = L"FormExam";
			this->panelExam->ResumeLayout(false);
			this->panelExam->PerformLayout();
			this->panelRight->ResumeLayout(false);
			this->panelRight->PerformLayout();
			
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTurnRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTurnLeft))->EndInit();
			this->panelLeft->ResumeLayout(false);
			this->panelAudio->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioListening))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImage))->EndInit();
			ResumeLayout(false);

		}
#pragma endregion
	private: std::vector<int> getNumberFromString(std::string s1) {
		
		std::regex e(R"(\d+)");


		std::sregex_iterator iter(s1.begin(), s1.end(), e);
		std::sregex_iterator end;
		std::vector<int> res;
		std::stringstream ss;
		int num;
		while (iter != end)
		{
			

			for (unsigned i = 0; i < iter->size(); ++i)
			{
				
				ss = std::stringstream((*iter)[i].str());
				ss >> num;

				res.push_back(num);
			}
			++iter;
		}

		return res;

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
	private: void LoadQuestion() {
		this->audioListening->Ctlcontrols->stop();
		if (type == L"part 1") {
			this->btnPicture1->Visible = true;
			this->btnPicture2->Visible = true;
			this->audioListening->Visible = true;
			this->btnPicture1->BackColor = System::Drawing::Color::LightBlue;
			this->btnPicture2->BackColor = System::Drawing::Color::White;
			this->labelPart->Text = type;
			this->audioListening->URL = path + gcnew System::String(this->test->parts[0].audio[0].c_str());
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[0].image[0][0].c_str()));
			System::String ^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[0].instruction.c_str()) + L"\n\n";
			for each (std::string q in this->test->parts[0].question) {
				cnt += gcnew System::String(q.c_str()) + "\n\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;

			this->textBoxAnswer->Text = L"";
			this->audioListening->Ctlcontrols->stop();

			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[0].ToStringAnswer().c_str());
		}

		else if (type == L"part 2") {
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			this->audioListening->Visible = true;
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");

			this->labelPart->Text = type;
			this->audioListening->URL = path + gcnew System::String(this->test->parts[1].audio[0].c_str());

			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[1].instruction.c_str()) + L"\n\n";
			for each (std::string q in this->test->parts[1].question) {
				cnt += gcnew System::String(q.c_str()) + "\n\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;

			this->textBoxAnswer->Text = L"";
			this->audioListening->Ctlcontrols->stop();

			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[1].ToStringAnswer().c_str());
		}

		else if (type == L"part 3") {
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			this->audioListening->Visible = true;
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");

			this->labelPart->Text = type;
			this->audioListening->URL = path + gcnew System::String(this->test->parts[2].audio[index].c_str());
			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[2].instruction.c_str()) + L"\n\n";
			
			for (int i = index * 3; i < index * 3 + 3; ++i) {
				
				cnt += gcnew System::String(this->test->parts[2].question[i].c_str()) + "\n";

				for each (std::string ans in this->test->parts[2].answer[i]) {
					cnt += L"  " + gcnew System::String(ans.c_str()) + L"\n";
				}
				cnt += "\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;
			this->textBoxAnswer->Text = L"";
			this->audioListening->Ctlcontrols->stop();

			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[2].ToStringAnswer(index *3, index *3 + 2).c_str());
		}

		else if (type == L"part 4") {
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			this->audioListening->Visible = true;
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");

			this->labelPart->Text = type;
			this->audioListening->URL = path + gcnew System::String(this->test->parts[3].audio[index].c_str());
			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[3].instruction.c_str()) + L"\n\n";

			for (int i = index * 3; i < index * 3 + 3; ++i) {
				cnt += gcnew System::String(this->test->parts[3].question[i].c_str()) + "\n";
				for each (std::string ans in this->test->parts[3].answer[i]) {
					cnt += L"  " + gcnew System::String(ans.c_str()) + L"\n";
				}
				cnt += "\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;
			this->textBoxAnswer->Text = L"";
			this->audioListening->Ctlcontrols->stop();
			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[3].ToStringAnswer(index * 3, index * 3 + 2).c_str());
		}

		else if (type == L"part 5") {
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			this->audioListening->Visible = false;
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");

			this->labelPart->Text = type;
			
			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[4].instruction.c_str()) + L"\n\n";

			for (int i = 0; i < this->test->parts[4].question.size(); ++i) {
				cnt += gcnew System::String(this->test->parts[4].question[i].c_str()) + "\n";
				for each (std::string ans in this->test->parts[4].answer[i]) {
					cnt += L"  " + gcnew System::String(ans.c_str()) + L"\n";
				}
				cnt += "\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;
			this->textBoxAnswer->Text = L"";

			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[4].ToStringAnswer().c_str());
		}

		else if (type == L"part 6") {
			this->btnPicture1->Visible = false;
			this->btnPicture2->Visible = false;
			this->audioListening->Visible = false;
			this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");

			this->labelPart->Text = type;

			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[5].instruction.c_str()) + L"\n\n";
			cnt += gcnew System::String(this->test->parts[5].text[index].c_str()) + L"\n\n";
			int t = 0;
			for (int k = 0; k < index; ++k) {
				t += this->test->parts[5].number[k];
			}
			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[5].ToStringAnswer(t, t + this->test->parts[5].number[index] - 1).c_str());
			for (int i = t; i < t + this->test->parts[5].number[index]; ++i) {
				cnt += gcnew System::String(this->test->parts[5].question[i].c_str()) + "\n";
				for each (std::string ans in this->test->parts[5].answer[i]) {
					cnt += L"  " + gcnew System::String(ans.c_str()) + L"\n";
				}
				cnt += "\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;
			

		}

		else {
			if (this->test->parts[6].image[index][0] == "") {
				this->btnPicture1->Visible = false;
				this->btnPicture2->Visible = false;
				this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(L"../../assets/icon_nothing.png");
			}
			else if (this->test->parts[6].image[index].size() == 1){
				this->btnPicture1->Visible = false;
				this->btnPicture2->Visible = false;
				this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[6].image[index][0].c_str()));
			}

			else {
				this->btnPicture1->Visible = true;
				this->btnPicture2->Visible = true;
				this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[6].image[index][0].c_str()));
				this->btnPicture1->BackColor = System::Drawing::Color::LightBlue;
				this->btnPicture2->BackColor = System::Drawing::Color::White;
			}
			
			this->audioListening->Visible = false;
			

			this->labelPart->Text = type;

			System::String^ cnt = L"";

			cnt += gcnew System::String(this->test->parts[6].instruction.c_str()) + L"\n\n";
			cnt += gcnew System::String(this->test->parts[6].text[index].c_str()) + L"\n\n";
			int t = 0;
			for (int k = 0; k < index; ++k) {
				t += this->test->parts[6].number[k];
			}
			this->textBoxAnswer->Text = gcnew System::String(this->test->parts[6].ToStringAnswer(t, t + this->test->parts[6].number[index] - 1).c_str());
			for (int i = t; i < t + this->test->parts[6].number[index]; ++i) {
				cnt += gcnew System::String(this->test->parts[6].question[i].c_str()) + "\n";
				for each (std::string ans in this->test->parts[6].answer[i]) {
					cnt += L"  " + gcnew System::String(ans.c_str()) + L"\n";
				}
				cnt += "\n";
			}

			cnt += this->direction;
			this->textQuestion->Text = cnt;
			
		}
	}
	private: System::Void btnPart_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void time_Tick(System::Object^ sender, System::EventArgs^ e) {

		this->test->time.decrease(1);

		this->labelTime->Text = gcnew System::String(this->test->time.toString().c_str());

	}

private: System::Void btnPicture1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->btnPicture1->BackColor = System::Drawing::Color::LightBlue;
	this->btnPicture2->BackColor = System::Drawing::Color::White;

	if (type == L"part 1") {
		this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[0].image[0][0].c_str()));
	}

	else {
		this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[6].image[index][0].c_str()));
	}
}
private: System::Void btnPicture2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->btnPicture1->BackColor = System::Drawing::Color::White;
	this->btnPicture2->BackColor = System::Drawing::Color::LightBlue;

	if (type == L"part 1") {
		this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[0].image[1][0].c_str()));
	}


	else {
		this->pictureBoxImage->Image = gcnew System::Drawing::Bitmap(path + gcnew System::String(this->test->parts[6].image[index][1].c_str()));
	}
}


std::string trim(const std::string& str, const std::string& whitespace)
{
	
	const auto strBegin = str.find_first_not_of(whitespace);
	if (strBegin == std::string::npos)
		return ""; // no content

	const auto strEnd = str.find_last_not_of(whitespace);
	const auto strRange = strEnd - strBegin + 1;

	return str.substr(strBegin, strRange);
}

std::string reduce(const std::string& str)
{
	const std::string& fill = " ";
	const std::string& whitespace = " \t";
	// trim first
	auto result = trim(str, whitespace);
	
	// replace sub ranges
	auto beginSpace = result.find_first_of(whitespace);
	while (beginSpace != std::string::npos)
	{
		const auto endSpace = result.find_first_not_of(whitespace, beginSpace);
		const auto range = endSpace - beginSpace;

		result.replace(beginSpace, range, fill);

		const auto newStart = beginSpace + fill.length();
		beginSpace = result.find_first_of(whitespace, newStart);
	}

	return result;
}
void TurnLeft() {
	if (type == L"part 1") {
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 0, 0, this->test->parts[0].question.size() - 1);
	}

	else if (type == L"part 2") {
		type = L"part 1";
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 1, 0, this->test->parts[1].question.size() - 1);

	}

	else if (type == L"part 3") {
		if (index == 0) {
			type = L"part 2";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 2, 0, 2);

		}

		else {
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 2, index * 3, index * 3 + 2);
			index -= 1;

		}


	}
	else if (type == L"part 4") {
		if (index == 0) {
			type = L"part 3";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 3, 0, 2);
			index = this->test->parts[2].audio.size() - 1;
		}

		else {
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 3, index * 3, index * 3 + 2);
			index -= 1;
		}
	}

	else if (type == L"part 5") {
		type = L"part 4";
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 4, 0, this->test->parts[4].result.size() - 1);
		index = this->test->parts[3].audio.size() - 1;
	}

	else if (type == L"part 6") {
		if (index == 0) {
			type = L"part 5";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 5, 0, this->test->parts[5].number[0] - 1);

		}

		else {
			int t = 0;
			for (int k = 0; k < index; ++k) {
				t += this->test->parts[5].number[k];
			}
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 5, t, t + this->test->parts[5].number[index] - 1);
			index -= 1;
		}
	}

	else {
		if (index == 0) {
			type = L"part 6";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 6, 0, this->test->parts[6].number[0] - 1);
			index = this->test->parts[5].number.size() - 1;
		}

		else {
			int t = 0;
			for (int k = 0; k < index; ++k) {
				t += this->test->parts[6].number[k];
			}
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 6, t, t + this->test->parts[6].number[index] - 1);
			index -= 1;
		}
	}
	LoadQuestion();
}
private: System::Void pictureBoxTurnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	TurnLeft();
}

void TurnRight() {
	if (type == L"part 1") {
		type = L"part 2";
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 0, 0, this->test->parts[0].question.size() - 1);
	}

	else if (type == L"part 2") {
		type = L"part 3";
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 1, 0, this->test->parts[1].question.size() - 1);
		index = 0;
	}

	else if (type == L"part 3") {
		if (index == this->test->parts[2].audio.size() - 1) {
			type = L"part 4";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 2, index * 3, index * 3 + 2);
			index = 0;
		}

		else {
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 2, index * 3, index * 3 + 2);
			index += 1;

		}


	}
	else if (type == L"part 4") {
		if (index == this->test->parts[3].audio.size() - 1) {
			type = L"part 5";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 3, index * 3, index * 3 + 2);
			index = 0;
		}

		else {
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 3, index * 3, index * 3 + 2);
			index += 1;

		}
	}

	else if (type == L"part 5") {
		type = L"part 6";
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 4, 0, this->test->parts[4].result.size() - 1);
		index = 0;
	}

	else if (type == L"part 6") {
		int t = 0;
		for (int k = 0; k < index; ++k) {
			t += this->test->parts[5].number[k];
		}
		if (index == this->test->parts[5].number.size() - 1) {
			type = L"part 7";
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 5, t, t + this->test->parts[5].number[index] - 1);
			index = 0;
		}

		else {

			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 5, t, t + this->test->parts[5].number[index] - 1);
			index += 1;
		}
	}

	else {
		int t = 0;
		for (int k = 0; k < index; ++k) {
			t += this->test->parts[6].number[k];
		}
		if (index == this->test->parts[6].number.size() - 1) {
			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 6, t, t + this->test->parts[6].number[index] - 1);
		}

		else {

			this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 6, t, t + this->test->parts[6].number[index] - 1);
			index += 1;
		}
	}

	LoadQuestion();
}
private: System::Void pictureBoxTurnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	TurnRight();
	
}	
	   System::Windows::Forms::Form^ activeForm;

	   private: void openChildForm(System::Windows::Forms::Form^ form) {
		   if (activeForm != nullptr) {
			   activeForm->Close();
		   }

		   activeForm = form;
		   form->TopLevel = false;
		   form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		   form->Dock = System::Windows::Forms::DockStyle::Fill;
		   panelExam->Controls->Add(form);
		   panelExam->Tag = form;
		   this->panelLeft->Visible = false;
		   this->panelRight->Visible = true;
		   form->BringToFront();
		   form->Show();

	   }
	   std::string ws2s(const std::wstring& wstr)
	   {
		   using convert_typeX = std::codecvt_utf8<wchar_t>;
		   std::wstring_convert<convert_typeX, wchar_t> converterX;

		   return converterX.to_bytes(wstr);
	   }

	   std::string ExePath() {
		   TCHAR buffer[MAX_PATH] = { 0 };
		   GetModuleFileName(NULL, buffer, MAX_PATH);
		   std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
		   return ws2s(std::wstring(buffer).substr(0, pos));
	   }

	   std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
		   size_t start_pos = 0;
		   while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			   str.replace(start_pos, from.length(), to);
			   start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
		   }
		   return str;
	   }
private: System::Void pictureBoxExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

	
}


private: System::Void buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

	if (type == L"part 1") {
		
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 0, 0, this->test->parts[0].question.size() - 1);
	}

	else if (type == L"part 2") {
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 1, 0, this->test->parts[1].question.size() - 1);
	}
	else if (type == L"part 3") {
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 2, index * 3, index * 3 + 2);
		
	}
	else if (type == L"part 4") {
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 3, index * 3, index * 3 + 2);
		
	}

	else if (type == L"part 5") {
		
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 4, 0, this->test->parts[4].result.size() - 1);
		
	}

	else if (type == L"part 6") {
		int t = 0;
		for (int k = 0; k < index; ++k) {
			t += this->test->parts[5].number[k];
		}
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 5, t, t + this->test->parts[5].number[index] - 1);

	}

	else {
		int t = 0;
		for (int k = 0; k < index; ++k) {
			t += this->test->parts[6].number[k];
		}
		this->test->updateAnswer(reduce(toStandardString(this->textBoxAnswer->Text)), 6, t, t + this->test->parts[6].number[index] - 1);

	}

	FormScoreExam^ sc = gcnew FormScoreExam(this->test, indexOfTest, this->panelLeft, this->panelRight);
	openChildForm(sc);
}

private: void pictureBoxImage_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBoxImage->Size = System::Drawing::Size(882 * 2, 878);
	this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
}
private: void pictureBoxImage_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	
	this->pictureBoxImage->Size = System::Drawing::Size(882, 878);
	this->textQuestion->Size = System::Drawing::Size(883, 862);
	this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
}



private: System::Void textBoxAnswer_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->Shift) {
		if (e->KeyCode == Keys::Enter) {
			TurnLeft();
			return;
		}
	}
	if (e->KeyCode == Keys::Enter) {
		TurnRight();
	}
	

}
};
}
