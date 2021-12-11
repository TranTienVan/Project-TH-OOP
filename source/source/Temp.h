#pragma once
#include"app.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Temp
	/// </summary>
	public ref class Temp : public System::Windows::Forms::Form
	{
	public:
		Temp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Temp(Json::Value obj) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			app^ software = gcnew app(obj);
			openChildForm(software);

			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Temp()
		{
			if (components)
			{
				delete components;
			}
		}
		User* me;
	private: System::Windows::Forms::Panel^ panelTemp;
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
			this->panelTemp = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panelTemp
			// 
			this->panelTemp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTemp->Location = System::Drawing::Point(0, 0);
			this->panelTemp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelTemp->Name = L"panelTemp";
			this->panelTemp->Size = System::Drawing::Size(3800, 1900);
			this->panelTemp->TabIndex = 0;
			// 
			// Temp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3800, 1900);
			this->Controls->Add(this->panelTemp);
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Temp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Temp";
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
		panelTemp->Controls->Add(form);
		panelTemp->Tag = form;
		form->BringToFront();
		form->Show();


	}
	};
}
