#pragma once
#include"./game/matrix_word_game.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMatrixWordGame
	/// </summary>
	public ref class FormMatrixWordGame : public System::Windows::Forms::Form
	{
	public:
		FormMatrixWordGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			System::Windows::Forms::Button^ temp;
			for (int i = 0; i < 13 * 17; ++i) {
				temp = gcnew System::Windows::Forms::Button();
				temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				temp->Location = System::Drawing::Point(i / 17 * 60, i % 13 * 60);
				temp->Name = L"ceil" + i.ToString();
				temp->Size = System::Drawing::Size(60, 60);
				
				temp->Text = i.ToString();
				temp->UseVisualStyleBackColor = true;

				ceil->Controls->Add(temp);
			}

			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
		}

		FormMatrixWordGame(MatrixWordGame* games) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			
			System::Windows::Forms::Button^ temp;
			for (int i = 0; i < 13 * 17; ++i) {
				temp = gcnew System::Windows::Forms::Button();
				temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
				temp->Location = System::Drawing::Point((i % 17) * 60 , (i / 13) * 60);
				temp->Name = L"ceil" + i.ToString();
				temp->Size = System::Drawing::Size(60, 60);
				temp->TabIndex = 1;
				temp->Text = L"a";
				temp->UseVisualStyleBackColor = true;

				ceil->Controls->Add(temp);
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMatrixWordGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMatrixGame;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ ceil;



	
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
			this->panelMatrixGame = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ceil = (gcnew System::Windows::Forms::Panel());
			this->panelMatrixGame->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMatrixGame
			// 
			this->panelMatrixGame->Controls->Add(this->panel1);
			this->panelMatrixGame->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMatrixGame->Location = System::Drawing::Point(0, 0);
			this->panelMatrixGame->Name = L"panelMatrixGame";
			this->panelMatrixGame->Size = System::Drawing::Size(1827, 883);
			this->panelMatrixGame->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ceil);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1113, 883);
			this->panel1->TabIndex = 0;
			// 
			// ceil
			// 
			this->ceil->Location = System::Drawing::Point(39, 52);
			this->ceil->Name = L"ceil";
			this->ceil->Size = System::Drawing::Size(1020, 780);
			this->ceil->TabIndex = 1;
			// 
			// FormMatrixWordGame
			// 
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->panelMatrixGame);
			this->Name = L"FormMatrixWordGame";
			this->Text = L"FormMatrixWordGame";
			this->panelMatrixGame->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
