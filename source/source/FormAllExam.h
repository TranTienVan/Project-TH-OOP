#pragma once
#include"FormExam.h"
#include"FormHome.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormAllExam
	/// </summary>
	public ref class FormAllExam : public System::Windows::Forms::Form
	{
	public:
		FormAllExam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormAllExam(Exam** tests, System::Windows::Forms::Panel^ panelContent) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->panelContent = panelContent;
			this->tests = tests;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAllExam()
		{
			if (components)
			{
				delete components;
			}
		}
	System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::Panel^ panelAllExam;
	private: Exam** tests;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAllExam::typeid));
			this->panelAllExam = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxExit = (gcnew System::Windows::Forms::PictureBox());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->panelAllExam->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->BeginInit();
			this->SuspendLayout();
			// 
			// panelAllExam
			// 
			this->panelAllExam->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelAllExam->Controls->Add(this->pictureBoxExit);
			this->panelAllExam->Controls->Add(this->btn2);
			this->panelAllExam->Controls->Add(this->button7);
			this->panelAllExam->Controls->Add(this->button6);
			this->panelAllExam->Controls->Add(this->button5);
			this->panelAllExam->Controls->Add(this->button4);
			this->panelAllExam->Controls->Add(this->button3);
			this->panelAllExam->Controls->Add(this->button2);
			this->panelAllExam->Controls->Add(this->button1);
			this->panelAllExam->Controls->Add(this->btn3);
			this->panelAllExam->Controls->Add(this->btn1);
			this->panelAllExam->Cursor = System::Windows::Forms::Cursors::Default;
			this->panelAllExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAllExam->Location = System::Drawing::Point(0, 0);
			this->panelAllExam->Name = L"panelAllExam";
			this->panelAllExam->Size = System::Drawing::Size(1859, 985);
			this->panelAllExam->TabIndex = 0;
			// 
			// pictureBoxExit
			// 
			this->pictureBoxExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxExit.Image")));
			this->pictureBoxExit->Location = System::Drawing::Point(28, 21);
			this->pictureBoxExit->Name = L"pictureBoxExit";
			this->pictureBoxExit->Size = System::Drawing::Size(71, 76);
			this->pictureBoxExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxExit->TabIndex = 10;
			this->pictureBoxExit->TabStop = false;
			this->pictureBoxExit->Click += gcnew System::EventHandler(this, &FormAllExam::pictureBoxExit_Click);
			// 
			// btn2
			// 
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(451, 264);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(241, 107);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"Đề 2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &FormAllExam::btn2_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1099, 760);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(241, 107);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Đề 10";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1099, 590);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(241, 107);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Đề 9";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1099, 419);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(241, 107);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Đề 8";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1099, 264);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(241, 107);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Đề 7";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1099, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(241, 107);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Đề 6";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(451, 760);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 107);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Đề 5";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(451, 590);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 107);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Đề 4";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(451, 419);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(241, 107);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"Đề 3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btn1
			// 
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(451, 119);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(241, 107);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"Đề 1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &FormAllExam::btn1_Click);
			// 
			// FormAllExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 985);
			this->Controls->Add(this->panelAllExam);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAllExam";
			this->Text = L"FormAllExam";
			this->panelAllExam->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxExit))->EndInit();
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
			panelAllExam->Controls->Add(form);
			panelAllExam->Tag = form;
			form->BringToFront();
			form->Show();

		}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		FormExam^ nex = gcnew FormExam(this->tests[0], 1);
		openChildForm(nex);
	}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	FormExam^ nex = gcnew FormExam(this->tests[1], 2);
	openChildForm(nex);
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
private: System::Void pictureBoxExit_Click(System::Object^ sender, System::EventArgs^ e) {

	if (activeForm != nullptr) {
		
		this->panelAllExam->Controls->Remove(activeForm);
		activeForm->Close();

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
