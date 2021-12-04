#pragma once
#include"Temp.h"

namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormLogin
	/// </summary>
	public ref class FormLogin : public System::Windows::Forms::Form
	{
	public:
		FormLogin(void)
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
		~FormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelExecute;
	protected:
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelRetypePassword;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ txtRetypePassword;
	private: System::Windows::Forms::TextBox^ textPasword;
	private: System::Windows::Forms::TextBox^ textUsername;
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::Panel^ panel2;

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
			this->panelExecute = (gcnew System::Windows::Forms::Panel());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->labelRetypePassword = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtRetypePassword = (gcnew System::Windows::Forms::TextBox());
			this->textPasword = (gcnew System::Windows::Forms::TextBox());
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelExecute->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelExecute
			// 
			this->panelExecute->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelExecute->Controls->Add(this->labelEmail);
			this->panelExecute->Controls->Add(this->labelRetypePassword);
			this->panelExecute->Controls->Add(this->labelPassword);
			this->panelExecute->Controls->Add(this->labelUsername);
			this->panelExecute->Controls->Add(this->button3);
			this->panelExecute->Controls->Add(this->button2);
			this->panelExecute->Controls->Add(this->button1);
			this->panelExecute->Controls->Add(this->textEmail);
			this->panelExecute->Controls->Add(this->txtRetypePassword);
			this->panelExecute->Controls->Add(this->textPasword);
			this->panelExecute->Controls->Add(this->textUsername);
			this->panelExecute->Controls->Add(this->loginLabel);
			this->panelExecute->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelExecute->Location = System::Drawing::Point(0, 0);
			this->panelExecute->Name = L"panelExecute";
			this->panelExecute->Size = System::Drawing::Size(746, 870);
			this->panelExecute->TabIndex = 0;
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->Location = System::Drawing::Point(71, 498);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(158, 32);
			this->labelEmail->TabIndex = 6;
			this->labelEmail->Text = L"Nhập email";
			this->labelEmail->Visible = false;
			this->labelEmail->Click += gcnew System::EventHandler(this, &FormLogin::labelRetypePassword_Click);
			// 
			// labelRetypePassword
			// 
			this->labelRetypePassword->AutoSize = true;
			this->labelRetypePassword->Location = System::Drawing::Point(71, 369);
			this->labelRetypePassword->Name = L"labelRetypePassword";
			this->labelRetypePassword->Size = System::Drawing::Size(242, 32);
			this->labelRetypePassword->TabIndex = 6;
			this->labelRetypePassword->Text = L"Nhập lại mật khẩu";
			this->labelRetypePassword->Visible = false;
			this->labelRetypePassword->Click += gcnew System::EventHandler(this, &FormLogin::labelRetypePassword_Click);
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(71, 258);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(130, 32);
			this->labelPassword->TabIndex = 6;
			this->labelPassword->Text = L"Mật khẩu";
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(71, 135);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(205, 32);
			this->labelUsername->TabIndex = 5;
			this->labelUsername->Text = L"Tên đăng nhập";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(65, 740);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(611, 72);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Đăng ký tài khoản";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormLogin::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(397, 642);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(279, 77);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Quên mật khẩu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormLogin::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(65, 642);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 77);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Đăng nhập";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormLogin::button1_Click);
			// 
			// textEmail
			// 
			this->textEmail->BackColor = System::Drawing::SystemColors::Menu;
			this->textEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail->Location = System::Drawing::Point(65, 548);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(611, 53);
			this->textEmail->TabIndex = 2;
			this->textEmail->Visible = false;
			// 
			// txtRetypePassword
			// 
			this->txtRetypePassword->BackColor = System::Drawing::SystemColors::Menu;
			this->txtRetypePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRetypePassword->Location = System::Drawing::Point(65, 418);
			this->txtRetypePassword->Name = L"txtRetypePassword";
			this->txtRetypePassword->Size = System::Drawing::Size(611, 53);
			this->txtRetypePassword->TabIndex = 2;
			this->txtRetypePassword->Visible = false;
			// 
			// textPasword
			// 
			this->textPasword->BackColor = System::Drawing::SystemColors::Menu;
			this->textPasword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPasword->Location = System::Drawing::Point(65, 293);
			this->textPasword->Name = L"textPasword";
			this->textPasword->Size = System::Drawing::Size(611, 53);
			this->textPasword->TabIndex = 2;
			// 
			// textUsername
			// 
			this->textUsername->BackColor = System::Drawing::SystemColors::Menu;
			this->textUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsername->Location = System::Drawing::Point(65, 181);
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(611, 53);
			this->textUsername->TabIndex = 1;
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLabel->Location = System::Drawing::Point(166, 37);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(366, 76);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Đăng nhập";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel2->Controls->Add(this->panelExecute);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(746, 870);
			this->panel2->TabIndex = 1;
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 870);
			this->Controls->Add(this->panel2);
			this->Name = L"FormLogin";
			this->Text = L"FormLogin";
			this->panelExecute->ResumeLayout(false);
			this->panelExecute->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int activePage = 0;

		unsigned int SHF(std::string input) {
			unsigned int init = 123456789;
			unsigned int magic = 5674356;
			unsigned int hash = 1;

			for (int i = 0; i < input.length(); ++i) {
				hash = hash ^ (input[i]);
				hash = hash * magic;
			}

			return hash;
		}
		std::string ToHex(unsigned int input) {
			std::string hexHash;
			std::stringstream hexStream;
			hexStream << std::hex << input;
			hexHash = hexStream.str();
			transform(hexHash.begin(), hexHash.end(), hexHash.begin(), ::toupper);
			return hexHash;
		}


		std::string MarshalString(String^ s) {
			std::string os;
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (activePage != 0) {
			activePage = 0;
			txtRetypePassword->Visible = false;
			labelRetypePassword->Visible = false;
			labelEmail->Visible = false;
			textEmail->Visible = false;
			loginLabel->Text = L"Đăng nhập";
			labelPassword->Text = L"Mật khẩu";
			
			textUsername->Text = L"";
			textPasword->Text = L"";
			button2->Text = L"Quên mật khẩu";
		}
		else {
			std::fstream f("../../database/user.json", std::ios::in);
			Json::Value actualJson;
			Json::Reader reader;
			reader.parse(f, actualJson);
			f.close();
			for (int i = 0; i < actualJson.size(); ++i) {
				if (gcnew System::String(actualJson[i]["username"].asString().c_str()) == textUsername->Text) {
					std::string pass = MarshalString(textPasword->Text);

					if (ToHex(SHF(pass)) == actualJson[i]["password"].asString()) {


						Temp^ software = gcnew Temp(actualJson[i]);
						software->BringToFront();

						software->Show();
						this->Hide();
						return;




					}

				}
			}

			System::Windows::Forms::MessageBox::Show(L"Tên đăng nhập hoặc mật khẩu không đúng!");
		}
		

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activePage != 1) {
		activePage = 1;
		txtRetypePassword->Visible = true;
		labelRetypePassword->Visible = true;
		labelEmail->Visible = true;
		textEmail->Visible = true;
		loginLabel->Text = L"Đăng ký";
		labelPassword->Text = L"Mật khẩu";
		labelRetypePassword->Text = L"Nhập lại mật khẩu";
		labelEmail->Text = L"Nhập email";

		textUsername->Text = L"";
		textPasword->Text = L"";
		textEmail->Text = L"";
		txtRetypePassword->Text = L"";
		button2->Text = L"Quên mật khẩu";
	}

	else {
		if (textPasword->Text != txtRetypePassword->Text) {
			System::Windows::Forms::MessageBox::Show("Mật khẩu nhập lại sai!");
			return;
		}
		std::fstream f("../../database/user.json", std::ios::in);
		
		Json::Value actualJson;
		Json::Reader reader;
		reader.parse(f, actualJson);
		f.close();
		std::string newUsername = MarshalString(textUsername->Text);
		std::string newEmail = MarshalString(textEmail->Text);
		for (int i = 0; i < actualJson.size(); ++i) {
			if (actualJson[i]["username"] == newUsername) {
				System::Windows::Forms::MessageBox::Show(L"Tên đăng nhập đã tồn tại!");
				return;
			}

			if (actualJson[i]["email"] == newEmail) {
				System::Windows::Forms::MessageBox::Show(L"Email đã tồn tại!");
				return;
			}
		}

		Json::Value newUser;
		newUser["username"] = newUsername;
		newUser["password"] = ToHex(SHF(MarshalString(textPasword->Text)));
		newUser["email"] = newEmail;
		newUser["topicVocabularies"] = Json::arrayValue;
		newUser["topicGrammars"] = Json::arrayValue;
		newUser["dictionary"] = Json::arrayValue;
		newUser["score"] = 0;
		newUser["id"] = actualJson.size() + 1;

		actualJson.append(newUser);
		std::fstream f2("../../database/user.json", std::ios::out);
		f2 << actualJson;
		f2.close();
		System::Windows::Forms::MessageBox::Show(L"Đăng ký thành công!");

	}

}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activePage != 2) {
		activePage = 2;
		txtRetypePassword->Visible = true;
		labelRetypePassword->Visible = true;
		labelEmail->Visible = true;
		textEmail->Visible = true;
		loginLabel->Text = L"Đổi mật khẩu";
		labelPassword->Text = L"Nhập mật khẩu mới";
		labelRetypePassword->Text = L"Nhập lại mật khẩu";
		labelEmail->Text = L"Nhập email xác nhận";

		textUsername->Text = L"";
		textPasword->Text = L"";
		textEmail->Text = L"";
		txtRetypePassword->Text = L"";
		button2->Text = L"Xác nhận đổi";
	}

	else {
		if (textPasword->Text != txtRetypePassword->Text) {
			System::Windows::Forms::MessageBox::Show(L"Mật khẩu nhập lại sai!");
			return;
		}
		std::fstream f("../../database/user.json", std::ios::in);
		
		Json::Value actualJson;
		Json::Reader reader;
		reader.parse(f, actualJson);
		f.close();
		std::string newUsername = MarshalString(textUsername->Text);
		std::string newEmail = MarshalString(textEmail->Text);

		int i = 0;
		while(i < actualJson.size()) {
			if (actualJson[i]["username"] == newUsername && actualJson[i]["email"] == newEmail) {
				
				break;
			}
			++i;
			
		}

		if (i == actualJson.size()) {
			System::Windows::Forms::MessageBox::Show(L"Sai tên đăng nhập hoặc email!");
			return;
		}
		
		actualJson[i]["password"] = ToHex(SHF(MarshalString(textPasword->Text)));

		std::fstream f2("../../database/user.json", std::ios::out);
		f2 << actualJson;
		f2.close();
		System::Windows::Forms::MessageBox::Show(L"Đổi mật khẩu thành công!");
	}

}
private: System::Void labelRetypePassword_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
