#pragma once
#include"./dictionary/dictionary.h"
#include"FormContentVocabulary.h"
#include"./vocabulary/vocabulary.h"
#include <msclr\marshal_cppstd.h>
#include"./dictionary/EnToVi.h"
#include"./dictionary/ViToEn.h"
#include"FormHome.h"
#include"FormVocabulary.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormDictionary
	/// </summary>
	public ref class FormDictionary : public System::Windows::Forms::Form
	{
	public:
		FormDictionary(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormDictionary(std::vector<AppComponent*> &appDict, cli::array<System::String^>^ arrEnToVi, cli::array<System::String^>^ arrViToEn, System::Windows::Forms::Panel^ panelContent)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->appEnToVi = (EnToVi*)appDict[0];
			this->appViToEn = (ViToEn*)appDict[1];

			this->arrEnToVi = arrEnToVi;
			this->arrViToEn = arrViToEn;
			

			this->comboBoxDictionary->DataSource = this->arrEnToVi;
			

			
			this->typeTranslate = 1;
			
			this->btnTypeTranslate1->BackColor = System::Drawing::Color::Yellow;
			this->btnTypeTranslate2->BackColor = System::Drawing::Color::Azure;
			this->panelContent = panelContent;
			this->comboBoxDictionary->Text = L" ";
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormDictionary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: EnToVi* appEnToVi;
	private: ViToEn* appViToEn;
	private: cli::array<System::String^>^ arrEnToVi;
	private: cli::array<System::String^>^ arrViToEn;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::TextBox^ nameDictionary;
	
	private: int typeTranslate;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panelLabelTopic;
	private: System::Windows::Forms::Panel^ panelDictionary;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnTypeTranslate1;





	private: System::Windows::Forms::PictureBox^ pictureBackground;
	private: System::Windows::Forms::ComboBox^ comboBoxDictionary;
	private: System::Windows::Forms::Button^ btnTypeSearch2;



	private: System::Windows::Forms::Button^ btnTypeTranslate2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormDictionary::typeid));
			this->nameDictionary = (gcnew System::Windows::Forms::TextBox());
			this->panelLabelTopic = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelDictionary = (gcnew System::Windows::Forms::Panel());
			this->btnTypeTranslate2 = (gcnew System::Windows::Forms::Button());
			this->btnTypeSearch2 = (gcnew System::Windows::Forms::Button());
			this->comboBoxDictionary = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnTypeTranslate1 = (gcnew System::Windows::Forms::Button());
			this->pictureBackground = (gcnew System::Windows::Forms::PictureBox());
			this->panelLabelTopic->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelDictionary->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBackground))->BeginInit();
			this->SuspendLayout();
			// 
			// nameDictionary
			// 
			this->nameDictionary->BackColor = System::Drawing::Color::Linen;
			this->nameDictionary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameDictionary->Location = System::Drawing::Point(725, 12);
			this->nameDictionary->Name = L"nameDictionary";
			this->nameDictionary->Size = System::Drawing::Size(384, 68);
			this->nameDictionary->TabIndex = 0;
			this->nameDictionary->Text = L"Dictionary";
			this->nameDictionary->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panelLabelTopic
			// 
			this->panelLabelTopic->BackColor = System::Drawing::Color::Linen;
			this->panelLabelTopic->Controls->Add(this->pictureBox1);
			this->panelLabelTopic->Controls->Add(this->nameDictionary);
			this->panelLabelTopic->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLabelTopic->Location = System::Drawing::Point(0, 0);
			this->panelLabelTopic->Name = L"panelLabelTopic";
			this->panelLabelTopic->Size = System::Drawing::Size(1859, 104);
			this->panelLabelTopic->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormDictionary::pictureBox1_Click);
			// 
			// panelDictionary
			// 
			this->panelDictionary->AutoScroll = true;
			this->panelDictionary->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->panelDictionary->AutoScrollMinSize = System::Drawing::Size(10, 10);
			this->panelDictionary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panelDictionary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelDictionary->Controls->Add(this->btnTypeTranslate2);
			this->panelDictionary->Controls->Add(this->btnTypeSearch2);
			this->panelDictionary->Controls->Add(this->comboBoxDictionary);
			this->panelDictionary->Controls->Add(this->btnSearch);
			this->panelDictionary->Controls->Add(this->btnTypeTranslate1);
			this->panelDictionary->Controls->Add(this->pictureBackground);
			this->panelDictionary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDictionary->Location = System::Drawing::Point(0, 104);
			this->panelDictionary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelDictionary->Name = L"panelDictionary";
			this->panelDictionary->Size = System::Drawing::Size(1859, 884);
			this->panelDictionary->TabIndex = 5;
			// 
			// btnTypeTranslate2
			// 
			this->btnTypeTranslate2->BackColor = System::Drawing::Color::Yellow;
			this->btnTypeTranslate2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTypeTranslate2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTypeTranslate2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnTypeTranslate2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTypeTranslate2->Location = System::Drawing::Point(945, 174);
			this->btnTypeTranslate2->Name = L"btnTypeTranslate2";
			this->btnTypeTranslate2->Size = System::Drawing::Size(505, 112);
			this->btnTypeTranslate2->TabIndex = 8;
			this->btnTypeTranslate2->Text = L"Việt - Anh";
			this->btnTypeTranslate2->UseVisualStyleBackColor = false;
			this->btnTypeTranslate2->Click += gcnew System::EventHandler(this, &FormDictionary::btnTypeTranslate2_Click);
			// 
			// btnTypeSearch2
			// 
			this->btnTypeSearch2->BackColor = System::Drawing::Color::Azure;
			this->btnTypeSearch2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTypeSearch2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTypeSearch2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTypeSearch2->Location = System::Drawing::Point(671, 404);
			this->btnTypeSearch2->Name = L"btnTypeSearch2";
			this->btnTypeSearch2->Size = System::Drawing::Size(240, 100);
			this->btnTypeSearch2->TabIndex = 7;
			this->btnTypeSearch2->Text = L"Từ đã tra";
			this->btnTypeSearch2->UseVisualStyleBackColor = false;
			this->btnTypeSearch2->Click += gcnew System::EventHandler(this, &FormDictionary::btnTypeSearch2_Click);
			// 
			// comboBoxDictionary
			// 
			this->comboBoxDictionary->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBoxDictionary->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxDictionary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDictionary->FormattingEnabled = true;
			this->comboBoxDictionary->Location = System::Drawing::Point(945, 404);
			this->comboBoxDictionary->Name = L"comboBoxDictionary";
			this->comboBoxDictionary->Size = System::Drawing::Size(505, 84);
			this->comboBoxDictionary->TabIndex = 5;
			this->comboBoxDictionary->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormDictionary::comboBoxDictionary_KeyDown);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::LightGray;
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(1479, 403);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(240, 100);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Tìm kiếm";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &FormDictionary::btnSearch_Click);
			// 
			// btnTypeTranslate1
			// 
			this->btnTypeTranslate1->BackColor = System::Drawing::Color::Azure;
			this->btnTypeTranslate1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTypeTranslate1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTypeTranslate1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnTypeTranslate1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTypeTranslate1->Location = System::Drawing::Point(945, 47);
			this->btnTypeTranslate1->Name = L"btnTypeTranslate1";
			this->btnTypeTranslate1->Size = System::Drawing::Size(505, 112);
			this->btnTypeTranslate1->TabIndex = 0;
			this->btnTypeTranslate1->Text = L"Anh - Việt";
			this->btnTypeTranslate1->UseVisualStyleBackColor = false;
			this->btnTypeTranslate1->Click += gcnew System::EventHandler(this, &FormDictionary::btnTypeTranslate1_Click);
			// 
			// pictureBackground
			// 
			this->pictureBackground->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBackground->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBackground.Image")));
			this->pictureBackground->Location = System::Drawing::Point(0, 0);
			this->pictureBackground->Name = L"pictureBackground";
			this->pictureBackground->Size = System::Drawing::Size(1857, 882);
			this->pictureBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBackground->TabIndex = 3;
			this->pictureBackground->TabStop = false;
			this->pictureBackground->Click += gcnew System::EventHandler(this, &FormDictionary::pictureBackground_Click);
			// 
			// FormDictionary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 988);
			this->Controls->Add(this->panelDictionary);
			this->Controls->Add(this->panelLabelTopic);
			this->Name = L"FormDictionary";
			this->Text = L"FormDictionary";
			this->panelLabelTopic->ResumeLayout(false);
			this->panelLabelTopic->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelDictionary->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBackground))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Windows::Forms::Form^ activeForm;
	
	private: void openChildForm(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}

		activeForm = form;
		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelDictionary->Controls->Add(form);
		panelDictionary->Tag = form;
		panelDictionary->AutoScroll = false;
		form->BringToFront();
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

	void SearchByEvent() {
		
		
		if (this->typeTranslate == 1) {
			int index = System::Array::IndexOf(arrEnToVi, this->comboBoxDictionary->Text);

			if (index != -1) {
				this->comboBoxDictionary->Text = L"";
				FormContentVocabulary^ formContent = gcnew FormContentVocabulary(&appEnToVi->_dict[index], panelDictionary);
				openChildForm(formContent);
				if (find(appEnToVi->_look_up_history_index.begin(), appEnToVi->_look_up_history_index.end(), index) == appEnToVi->_look_up_history_index.end()) {
					appEnToVi->_look_up_history_index.push_back(index);

				}

				
			}

			else {
				MessageBox::Show(L"Không tìm thấy từ " + this->comboBoxDictionary->Text);
			}
		}

		else {
			int index = System::Array::IndexOf(arrViToEn, this->comboBoxDictionary->Text);

			if (index != -1) {
				this->comboBoxDictionary->Text = L"";
				if (find(appViToEn->_look_up_history_index.begin(), appViToEn->_look_up_history_index.end(), index) == appViToEn->_look_up_history_index.end()) {
					appViToEn->_look_up_history_index.push_back(index);

				}
				FormContentVocabulary^ formContent = gcnew FormContentVocabulary(&appViToEn->_dict[index], panelDictionary);
				openChildForm(formContent);
				
			}

			else {
				MessageBox::Show(L"Không tìm thấy từ " + this->comboBoxDictionary->Text);
			}
		}
		

		
		
	}

	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchByEvent();
		
		
	}

	private: System::Void comboBoxDictionary_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyCode == Keys::Enter) {
			SearchByEvent();
		}

	}
private: System::Void pictureBackground_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnTypeTranslate1_Click(System::Object^ sender, System::EventArgs^ e) {
	typeTranslate = 1;
	this->btnTypeTranslate1->BackColor = System::Drawing::Color::Yellow;
	this->btnTypeTranslate2->BackColor = System::Drawing::Color::Azure;
	this->comboBoxDictionary->DataSource = this->arrEnToVi;
}
private: System::Void btnTypeTranslate2_Click(System::Object^ sender, System::EventArgs^ e) {
	typeTranslate = 2;
	this->btnTypeTranslate2->BackColor = System::Drawing::Color::Yellow;
	this->btnTypeTranslate1->BackColor = System::Drawing::Color::Azure;
	this->comboBoxDictionary->DataSource = this->arrViToEn;
}

private: System::Void btnTypeSearch2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (typeTranslate == 1) {

		FormVocabulary^ formContent = gcnew FormVocabulary(appEnToVi->_look_up_history_index, appEnToVi,panelDictionary);
		openChildForm(formContent);
	}

	else {
		FormVocabulary^ formContent = gcnew FormVocabulary(appViToEn->_look_up_history_index, appViToEn, panelDictionary);
		openChildForm(formContent);
	}
	
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
		this->panelDictionary->Controls->Remove(activeForm);
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
