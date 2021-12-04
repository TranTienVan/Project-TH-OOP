#include"../topic/topic_vocabulary.h"
#pragma once

namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for FormTopicVocabulary
	/// </summary>
	public ref class FormTopicVocabulary : public System::Windows::Forms::Form
	{
	public:
		FormTopicVocabulary(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormTopicVocabulary(std::vector<TopicVocabulary> topics) {
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			System::Windows::Forms::OpenFileDialog^ opf = gcnew System::Windows::Forms::OpenFileDialog();
			std::string a = "";
			System::String^ temp = "‪C:/Users/Among/Downloads/play.gif";

			textBoxTopic1->Text = temp;
			//Bitmap^ img = gcnew Bitmap(temp);



			



			


		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTopicVocabulary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ topic1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panelTopicVocabulary;
	private: System::Windows::Forms::TextBox^ textBoxTopic1;
	private: System::Windows::Forms::Button^ button2Topic1;


	private: System::Windows::Forms::Button^ button1Topic1;
	private: System::Windows::Forms::PictureBox^ pictureTopic1;















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTopicVocabulary::typeid));
			this->topic1 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic1 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic1 = (gcnew System::Windows::Forms::Button());
			this->button1Topic1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panelTopicVocabulary = (gcnew System::Windows::Forms::Panel());
			this->topic1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->BeginInit();
			this->panelTopicVocabulary->SuspendLayout();
			this->SuspendLayout();
			// 
			// topic1
			// 
			this->topic1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic1->Controls->Add(this->pictureTopic1);
			this->topic1->Controls->Add(this->textBoxTopic1);
			this->topic1->Controls->Add(this->button2Topic1);
			this->topic1->Controls->Add(this->button1Topic1);
			this->topic1->Location = System::Drawing::Point(23, 18);
			this->topic1->Margin = System::Windows::Forms::Padding(1);
			this->topic1->Name = L"topic1";
			this->topic1->Size = System::Drawing::Size(200, 200);
			this->topic1->TabIndex = 0;
			// 
			// pictureTopic1
			// 
			this->pictureTopic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTopic1.Image")));
			this->pictureTopic1->Location = System::Drawing::Point(26, 22);
			this->pictureTopic1->Name = L"pictureTopic1";
			this->pictureTopic1->Size = System::Drawing::Size(149, 120);
			this->pictureTopic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureTopic1->TabIndex = 5;
			this->pictureTopic1->TabStop = false;
			// 
			// textBoxTopic1
			// 
			this->textBoxTopic1->Location = System::Drawing::Point(53, 148);
			this->textBoxTopic1->Name = L"textBoxTopic1";
			this->textBoxTopic1->Size = System::Drawing::Size(100, 20);
			this->textBoxTopic1->TabIndex = 4;
			// 
			// button2Topic1
			// 
			this->button2Topic1->Location = System::Drawing::Point(100, 174);
			this->button2Topic1->Name = L"button2Topic1";
			this->button2Topic1->Size = System::Drawing::Size(75, 23);
			this->button2Topic1->TabIndex = 3;
			this->button2Topic1->Text = L"Practice";
			this->button2Topic1->UseVisualStyleBackColor = true;
			// 
			// button1Topic1
			// 
			this->button1Topic1->Location = System::Drawing::Point(26, 174);
			this->button1Topic1->Name = L"button1Topic1";
			this->button1Topic1->Size = System::Drawing::Size(75, 23);
			this->button1Topic1->TabIndex = 3;
			this->button1Topic1->Text = L"Learn";
			this->button1Topic1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Location = System::Drawing::Point(242, 18);
			this->panel2->Margin = System::Windows::Forms::Padding(1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 200);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Location = System::Drawing::Point(457, 18);
			this->panel3->Margin = System::Windows::Forms::Padding(1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 200);
			this->panel3->TabIndex = 2;
			// 
			// panelTopicVocabulary
			// 
			this->panelTopicVocabulary->AutoScroll = true;
			this->panelTopicVocabulary->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->panelTopicVocabulary->AutoScrollMinSize = System::Drawing::Size(10, 10);
			this->panelTopicVocabulary->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panelTopicVocabulary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTopicVocabulary->Controls->Add(this->panel3);
			this->panelTopicVocabulary->Controls->Add(this->panel2);
			this->panelTopicVocabulary->Controls->Add(this->topic1);
			this->panelTopicVocabulary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTopicVocabulary->Location = System::Drawing::Point(0, 0);
			this->panelTopicVocabulary->Margin = System::Windows::Forms::Padding(1);
			this->panelTopicVocabulary->Name = L"panelTopicVocabulary";
			this->panelTopicVocabulary->Size = System::Drawing::Size(697, 371);
			this->panelTopicVocabulary->TabIndex = 2;
			// 
			// FormTopicVocabulary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 371);
			this->Controls->Add(this->panelTopicVocabulary);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"FormTopicVocabulary";
			this->Text = L"FormTopicVocabulary";
			this->topic1->ResumeLayout(false);
			this->topic1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->EndInit();
			this->panelTopicVocabulary->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


private: System::Void pictureTopic1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
