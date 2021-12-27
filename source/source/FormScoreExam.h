#pragma once
#include"./exam/exam.h"
#include<Windows.h>
#include<string>
#include<sstream>
#include<Windows.h>
#include<codecvt>
#include<algorithm>

namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormScoreExam
	/// </summary>
	public ref class FormScoreExam : public System::Windows::Forms::Form
	{
	public:
		FormScoreExam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormScoreExam(Exam* test, int k, System::Windows::Forms::Panel^ panelLeft, System::Windows::Forms::Panel^ panelRight)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->panelLeft = panelLeft;
			this->panelRight = panelRight;

			float score = roundoff(test->getScore() * 10.0 / test->getNumberOfQuestion(), 2);
			std::stringstream sscore;
			sscore << score;


			this->labelScore->Text = gcnew System::String(sscore.str().c_str());
			

			std::string s = ExePath();
			s = ReplaceAll(s, "\\", "/");
			s = ReplaceAll(s, "/source/x64/Debug", "/assets/");

			this->path = gcnew System::String(s.c_str());
			if (score < 5) {
				this->labelRank->Text = L"Yếu";
				this->pictureBox1->Image = gcnew System::Drawing::Bitmap(path + L"icon_sad.png");
				this->pictureBox2->Image = gcnew System::Drawing::Bitmap(path + L"icon_sad.png");
			}

			else if (score < 6.5) {
				this->labelRank->Text = L"Trung bình";
				this->pictureBox1->Image = gcnew System::Drawing::Bitmap(path + L"icon_confused.png");
				this->pictureBox2->Image = gcnew System::Drawing::Bitmap(path + L"icon_confused.png");
			}

			else if (score < 8.0) {
				this->labelRank->Text = L"Khá";
				this->pictureBox1->Image = gcnew System::Drawing::Bitmap(path + L"icon_happy.png");
				this->pictureBox2->Image = gcnew System::Drawing::Bitmap(path + L"icon_happy.png");
			}

			else if (score < 9.5) {
				this->labelRank->Text = L"Giỏi";
				this->pictureBox1->Image = gcnew System::Drawing::Bitmap(path + L"icon_in-love.png");
				this->pictureBox2->Image = gcnew System::Drawing::Bitmap(path + L"icon_in-love.png");
			}

			else {
				this->labelRank->Text = L"Xuất sắc";

				this->pictureBox1->Image = gcnew System::Drawing::Bitmap(path + L"icon_scared.png");
				this->pictureBox2->Image = gcnew System::Drawing::Bitmap(path + L"icon_scared.png");
			}
			this->k = k;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormScoreExam()
		{
			if (components)
			{
				delete components;
			}
		}
		Exam* test;
		int k;
		System::String^ path;
	private: System::Windows::Forms::Panel^ panelLeft;
	private: System::Windows::Forms::Panel^ panelRight;
	private: System::Windows::Forms::Panel^ panelResult;
	private: System::Windows::Forms::Button^ btnCheck;
	private: System::Windows::Forms::Label^ labelRank;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::PictureBox^ pictureBoxExit;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormScoreExam::typeid));
			this->panelResult = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxExit = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->labelRank = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->panelResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelResult
			// 
			this->panelResult->Controls->Add(this->pictureBoxExit);
			this->panelResult->Controls->Add(this->btnCheck);
			this->panelResult->Controls->Add(this->labelRank);
			this->panelResult->Controls->Add(this->pictureBox2);
			this->panelResult->Controls->Add(this->pictureBox1);
			this->panelResult->Controls->Add(this->labelScore);
			this->panelResult->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelResult->Location = System::Drawing::Point(0, 0);
			this->panelResult->Name = L"panelResult";
			this->panelResult->Size = System::Drawing::Size(1827, 1002);
			this->panelResult->TabIndex = 0;
			// 
			// pictureBoxExit
			// 
			this->pictureBoxExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxExit.Image")));
			this->pictureBoxExit->Location = System::Drawing::Point(847, 258);
			this->pictureBoxExit->Name = L"pictureBoxExit";
			this->pictureBoxExit->Size = System::Drawing::Size(141, 140);
			this->pictureBoxExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxExit->TabIndex = 10;
			this->pictureBoxExit->TabStop = false;
			this->pictureBoxExit->Click += gcnew System::EventHandler(this, &FormScoreExam::pictureBoxExit_Click);
			// 
			// btnCheck
			// 
			this->btnCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheck->Location = System::Drawing::Point(766, 741);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(293, 76);
			this->btnCheck->TabIndex = 3;
			this->btnCheck->Text = L"Xem đáp án";
			this->btnCheck->UseVisualStyleBackColor = true;
			this->btnCheck->Click += gcnew System::EventHandler(this, &FormScoreExam::btnCheck_Click);
			// 
			// labelRank
			// 
			this->labelRank->AutoSize = true;
			this->labelRank->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRank->Location = System::Drawing::Point(766, 594);
			this->labelRank->Name = L"labelRank";
			this->labelRank->Size = System::Drawing::Size(293, 76);
			this->labelRank->TabIndex = 2;
			this->labelRank->Text = L"Xuất sắc";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1255, 258);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(482, 464);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FormScoreExam::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(90, 258);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(482, 464);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormScoreExam::pictureBox1_Click);
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(776, 420);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(283, 132);
			this->labelScore->TabIndex = 0;
			this->labelScore->Text = L"9.25";
			// 
			// FormScoreExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1827, 1002);
			this->Controls->Add(this->panelResult);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormScoreExam";
			this->Text = L"FormScoreExam";
			this->panelResult->ResumeLayout(false);
			this->panelResult->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		float round(float var)
		{
			// 37.66666 * 100 =3766.66
			// 3766.66 + .5 =3767.16    for rounding off value
			// then type cast to int so value is 3767
			// then divided by 100 so the value converted into 37.67
			float value = (int)(var * 100 + .5);
			return (float)value / 100;
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
		this->panelLeft->Visible = true;
		this->panelRight->Visible = true;
		this->Close();
	}
		   float roundoff(float value, unsigned char prec)
		   {
			   float pow_10 = pow(10.0f, (float)prec);
			   return round(value * pow_10) / pow_10;
		   }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCheck_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = ExePath();
	s = ReplaceAll(s, "\\", "/");
	s = ReplaceAll(s, "/source/x64/Debug", "/database/Exam/Exam");
	s += std::to_string(k) + "/Key.pdf";
	system(s.c_str());
}
};
}
