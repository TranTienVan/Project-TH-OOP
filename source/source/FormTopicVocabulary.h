
#pragma once
#include"./topic/topic_vocabulary.h"
#include"FormVocabulary.h"
#include<string>
#include"./game/traditional_game.h"
#include"FormTraditionalGame.h"
#include"FormHome.h"
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
		FormTopicVocabulary(std::vector<AppComponent*> topics, std::vector<AppComponent*> traditionalGame, System::Windows::Forms::Panel^ panelContent) {
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTopicVocabulary::typeid));

			// this->pictureTopic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"action")));
			// this->pictureTopic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			int i_topic = 0;
			this->topicVocabularies = new TopicVocabulary*[12];
			this->topicGames = new TraditionalGame * [12];
			for each (System::Windows::Forms::Panel ^ pn in this->panelTopicVocabulary->Controls)
			{
				this->topicVocabularies[i_topic] = (TopicVocabulary*)topics[i_topic];
				this->topicGames[i_topic] = (TraditionalGame*)traditionalGame[i_topic];
				for each (System::Windows::Forms::Control ^ ctr in pn->Controls) {
					
					System::String^ s = gcnew System::String(this->topicVocabularies[i_topic]->getName().c_str());
					
					if (ctr->Name->Contains(L"pictureTopic") ){
						System::Windows::Forms::PictureBox^ temp = (System::Windows::Forms::PictureBox^)ctr;

						temp->Image = gcnew Bitmap(L"../../assets/" + s + L".png");
						
						temp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					}

					else if (ctr->Name->Contains(L"textBoxTopic")) {
						System::Windows::Forms::TextBox^ temp = (System::Windows::Forms::TextBox^)ctr;

						temp->Text = s;
						temp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					}
					


				}
				
				++i_topic;
			}
			
			

			
			this->panelContent = panelContent;


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
	private: TopicVocabulary** topicVocabularies;
	private: TraditionalGame** topicGames;
	private: private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::TextBox^ nameTopic;
	private: System::Windows::Forms::Panel^ panelLabelTopic;
	private: System::Windows::Forms::Panel^ topic12;
	private: System::Windows::Forms::PictureBox^ pictureTopic12;
	private: System::Windows::Forms::TextBox^ textBoxTopic12;
	private: System::Windows::Forms::Button^ button2Topic12;
	private: System::Windows::Forms::Button^ button1Topic12;
	private: System::Windows::Forms::Panel^ topic11;
	private: System::Windows::Forms::PictureBox^ pictureTopic11;
	private: System::Windows::Forms::TextBox^ textBoxTopic11;
	private: System::Windows::Forms::Button^ button2Topic11;
	private: System::Windows::Forms::Button^ button1Topic11;
	private: System::Windows::Forms::Panel^ topic10;
	private: System::Windows::Forms::PictureBox^ pictureTopic10;
	private: System::Windows::Forms::TextBox^ textBoxTopic10;
	private: System::Windows::Forms::Button^ button2Topic10;
	private: System::Windows::Forms::Button^ button1Topic10;
	private: System::Windows::Forms::Panel^ topic9;
	private: System::Windows::Forms::PictureBox^ pictureTopic9;
	private: System::Windows::Forms::TextBox^ textBoxTopic9;
	private: System::Windows::Forms::Button^ button2Topic9;
	private: System::Windows::Forms::Button^ button1Topic9;
	private: System::Windows::Forms::Panel^ topic8;
	private: System::Windows::Forms::PictureBox^ pictureTopic8;
	private: System::Windows::Forms::TextBox^ textBoxTopic8;
	private: System::Windows::Forms::Button^ button2Topic8;
	private: System::Windows::Forms::Button^ button1Topic8;
	private: System::Windows::Forms::Panel^ topic7;
	private: System::Windows::Forms::PictureBox^ pictureTopic7;
	private: System::Windows::Forms::TextBox^ textBoxTopic7;
	private: System::Windows::Forms::Button^ button2Topic7;
	private: System::Windows::Forms::Button^ button1Topic7;
	private: System::Windows::Forms::Panel^ topic6;
	private: System::Windows::Forms::PictureBox^ pictureTopic6;
	private: System::Windows::Forms::TextBox^ textBoxTopic6;
	private: System::Windows::Forms::Button^ button2Topic6;
	private: System::Windows::Forms::Button^ button1Topic6;
	private: System::Windows::Forms::Panel^ topic5;
	private: System::Windows::Forms::PictureBox^ pictureTopic5;
	private: System::Windows::Forms::TextBox^ textBoxTopic5;
	private: System::Windows::Forms::Button^ button2Topic5;
	private: System::Windows::Forms::Button^ button1Topic5;
	private: System::Windows::Forms::Panel^ topic4;
	private: System::Windows::Forms::PictureBox^ pictureTopic4;
	private: System::Windows::Forms::TextBox^ textBoxTopic4;
	private: System::Windows::Forms::Button^ button2Topic4;
	private: System::Windows::Forms::Button^ button1Topic4;
	private: System::Windows::Forms::Panel^ topic3;
	private: System::Windows::Forms::PictureBox^ pictureTopic3;
	private: System::Windows::Forms::TextBox^ textBoxTopic3;
	private: System::Windows::Forms::Button^ button2Topic3;
	private: System::Windows::Forms::Button^ button1Topic3;
	private: System::Windows::Forms::Panel^ topic2;
	private: System::Windows::Forms::PictureBox^ pictureTopic2;
	private: System::Windows::Forms::TextBox^ textBoxTopic2;
	private: System::Windows::Forms::Button^ button2Topic2;
	private: System::Windows::Forms::Button^ button1Topic2;
	private: System::Windows::Forms::Panel^ panelTopicVocabulary;
	private: System::Windows::Forms::Panel^ topic1;
	private: System::Windows::Forms::PictureBox^ pictureTopic1;
	private: System::Windows::Forms::TextBox^ textBoxTopic1;
	private: System::Windows::Forms::Button^ button2Topic1;
	private: System::Windows::Forms::Button^ button1Topic1;
private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:


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
			this->nameTopic = (gcnew System::Windows::Forms::TextBox());
			this->panelLabelTopic = (gcnew System::Windows::Forms::Panel());
			this->topic12 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic12 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic12 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic12 = (gcnew System::Windows::Forms::Button());
			this->button1Topic12 = (gcnew System::Windows::Forms::Button());
			this->topic11 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic11 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic11 = (gcnew System::Windows::Forms::Button());
			this->button1Topic11 = (gcnew System::Windows::Forms::Button());
			this->topic10 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic10 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic10 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic10 = (gcnew System::Windows::Forms::Button());
			this->button1Topic10 = (gcnew System::Windows::Forms::Button());
			this->topic9 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic9 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic9 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic9 = (gcnew System::Windows::Forms::Button());
			this->button1Topic9 = (gcnew System::Windows::Forms::Button());
			this->topic8 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic8 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic8 = (gcnew System::Windows::Forms::Button());
			this->button1Topic8 = (gcnew System::Windows::Forms::Button());
			this->topic7 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic7 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic7 = (gcnew System::Windows::Forms::Button());
			this->button1Topic7 = (gcnew System::Windows::Forms::Button());
			this->topic6 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic6 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic6 = (gcnew System::Windows::Forms::Button());
			this->button1Topic6 = (gcnew System::Windows::Forms::Button());
			this->topic5 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic5 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic5 = (gcnew System::Windows::Forms::Button());
			this->button1Topic5 = (gcnew System::Windows::Forms::Button());
			this->topic4 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic4 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic4 = (gcnew System::Windows::Forms::Button());
			this->button1Topic4 = (gcnew System::Windows::Forms::Button());
			this->topic3 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic3 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic3 = (gcnew System::Windows::Forms::Button());
			this->button1Topic3 = (gcnew System::Windows::Forms::Button());
			this->topic2 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic2 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic2 = (gcnew System::Windows::Forms::Button());
			this->button1Topic2 = (gcnew System::Windows::Forms::Button());
			this->panelTopicVocabulary = (gcnew System::Windows::Forms::Panel());
			this->topic1 = (gcnew System::Windows::Forms::Panel());
			this->pictureTopic1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxTopic1 = (gcnew System::Windows::Forms::TextBox());
			this->button2Topic1 = (gcnew System::Windows::Forms::Button());
			this->button1Topic1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelLabelTopic->SuspendLayout();
			this->topic12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic12))->BeginInit();
			this->topic11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic11))->BeginInit();
			this->topic10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic10))->BeginInit();
			this->topic9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic9))->BeginInit();
			this->topic8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic8))->BeginInit();
			this->topic7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic7))->BeginInit();
			this->topic6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic6))->BeginInit();
			this->topic5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic5))->BeginInit();
			this->topic4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->BeginInit();
			this->topic3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->BeginInit();
			this->topic2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->BeginInit();
			this->panelTopicVocabulary->SuspendLayout();
			this->topic1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// nameTopic
			// 
			this->nameTopic->BackColor = System::Drawing::Color::Linen;
			this->nameTopic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTopic->Location = System::Drawing::Point(718, 23);
			this->nameTopic->Name = L"nameTopic";
			this->nameTopic->Size = System::Drawing::Size(384, 68);
			this->nameTopic->TabIndex = 0;
			this->nameTopic->Text = L"Topic";
			this->nameTopic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->panelLabelTopic->TabIndex = 3;
			// 
			// topic12
			// 
			this->topic12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic12->Controls->Add(this->pictureTopic12);
			this->topic12->Controls->Add(this->textBoxTopic12);
			this->topic12->Controls->Add(this->button2Topic12);
			this->topic12->Controls->Add(this->button1Topic12);
			this->topic12->Location = System::Drawing::Point(1222, 1611);
			this->topic12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic12->Name = L"topic12";
			this->topic12->Size = System::Drawing::Size(533, 477);
			this->topic12->TabIndex = 11;
			// 
			// pictureTopic12
			// 
			this->pictureTopic12->Location = System::Drawing::Point(69, 52);
			this->pictureTopic12->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic12->Name = L"pictureTopic12";
			this->pictureTopic12->Size = System::Drawing::Size(397, 286);
			this->pictureTopic12->TabIndex = 5;
			this->pictureTopic12->TabStop = false;
			// 
			// textBoxTopic12
			// 
			this->textBoxTopic12->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic12->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic12->Name = L"textBoxTopic12";
			this->textBoxTopic12->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic12->TabIndex = 4;
			// 
			// button2Topic12
			// 
			this->button2Topic12->Location = System::Drawing::Point(267, 400);
			this->button2Topic12->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic12->Name = L"button2Topic12";
			this->button2Topic12->Size = System::Drawing::Size(200, 70);
			this->button2Topic12->TabIndex = 3;
			this->button2Topic12->Text = L"Practice";
			this->button2Topic12->UseVisualStyleBackColor = true;
			this->button2Topic12->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic12_Click);
			// 
			// button1Topic12
			// 
			this->button1Topic12->Location = System::Drawing::Point(69, 400);
			this->button1Topic12->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic12->Name = L"button1Topic12";
			this->button1Topic12->Size = System::Drawing::Size(200, 70);
			this->button1Topic12->TabIndex = 3;
			this->button1Topic12->Text = L"Learn";
			this->button1Topic12->UseVisualStyleBackColor = true;
			this->button1Topic12->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic12_Click);
			// 
			// topic11
			// 
			this->topic11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic11->Controls->Add(this->pictureTopic11);
			this->topic11->Controls->Add(this->textBoxTopic11);
			this->topic11->Controls->Add(this->button2Topic11);
			this->topic11->Controls->Add(this->button1Topic11);
			this->topic11->Location = System::Drawing::Point(634, 1611);
			this->topic11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic11->Name = L"topic11";
			this->topic11->Size = System::Drawing::Size(533, 477);
			this->topic11->TabIndex = 10;
			// 
			// pictureTopic11
			// 
			this->pictureTopic11->Location = System::Drawing::Point(69, 52);
			this->pictureTopic11->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic11->Name = L"pictureTopic11";
			this->pictureTopic11->Size = System::Drawing::Size(397, 286);
			this->pictureTopic11->TabIndex = 5;
			this->pictureTopic11->TabStop = false;
			// 
			// textBoxTopic11
			// 
			this->textBoxTopic11->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic11->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic11->Name = L"textBoxTopic11";
			this->textBoxTopic11->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic11->TabIndex = 4;
			// 
			// button2Topic11
			// 
			this->button2Topic11->Location = System::Drawing::Point(266, 400);
			this->button2Topic11->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic11->Name = L"button2Topic11";
			this->button2Topic11->Size = System::Drawing::Size(200, 70);
			this->button2Topic11->TabIndex = 3;
			this->button2Topic11->Text = L"Practice";
			this->button2Topic11->UseVisualStyleBackColor = true;
			this->button2Topic11->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic11_Click);
			// 
			// button1Topic11
			// 
			this->button1Topic11->Location = System::Drawing::Point(68, 400);
			this->button1Topic11->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic11->Name = L"button1Topic11";
			this->button1Topic11->Size = System::Drawing::Size(200, 70);
			this->button1Topic11->TabIndex = 3;
			this->button1Topic11->Text = L"Learn";
			this->button1Topic11->UseVisualStyleBackColor = true;
			this->button1Topic11->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic11_Click);
			// 
			// topic10
			// 
			this->topic10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic10->Controls->Add(this->pictureTopic10);
			this->topic10->Controls->Add(this->textBoxTopic10);
			this->topic10->Controls->Add(this->button2Topic10);
			this->topic10->Controls->Add(this->button1Topic10);
			this->topic10->Location = System::Drawing::Point(47, 1611);
			this->topic10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic10->Name = L"topic10";
			this->topic10->Size = System::Drawing::Size(533, 477);
			this->topic10->TabIndex = 9;
			// 
			// pictureTopic10
			// 
			this->pictureTopic10->Location = System::Drawing::Point(69, 52);
			this->pictureTopic10->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic10->Name = L"pictureTopic10";
			this->pictureTopic10->Size = System::Drawing::Size(397, 286);
			this->pictureTopic10->TabIndex = 5;
			this->pictureTopic10->TabStop = false;
			// 
			// textBoxTopic10
			// 
			this->textBoxTopic10->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic10->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic10->Name = L"textBoxTopic10";
			this->textBoxTopic10->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic10->TabIndex = 4;
			// 
			// button2Topic10
			// 
			this->button2Topic10->Location = System::Drawing::Point(267, 400);
			this->button2Topic10->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic10->Name = L"button2Topic10";
			this->button2Topic10->Size = System::Drawing::Size(200, 70);
			this->button2Topic10->TabIndex = 3;
			this->button2Topic10->Text = L"Practice";
			this->button2Topic10->UseVisualStyleBackColor = true;
			this->button2Topic10->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic10_Click);
			// 
			// button1Topic10
			// 
			this->button1Topic10->Location = System::Drawing::Point(69, 400);
			this->button1Topic10->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic10->Name = L"button1Topic10";
			this->button1Topic10->Size = System::Drawing::Size(200, 70);
			this->button1Topic10->TabIndex = 3;
			this->button1Topic10->Text = L"Learn";
			this->button1Topic10->UseVisualStyleBackColor = true;
			this->button1Topic10->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic10_Click);
			// 
			// topic9
			// 
			this->topic9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic9->Controls->Add(this->pictureTopic9);
			this->topic9->Controls->Add(this->textBoxTopic9);
			this->topic9->Controls->Add(this->button2Topic9);
			this->topic9->Controls->Add(this->button1Topic9);
			this->topic9->Location = System::Drawing::Point(1222, 1085);
			this->topic9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic9->Name = L"topic9";
			this->topic9->Size = System::Drawing::Size(533, 477);
			this->topic9->TabIndex = 8;
			// 
			// pictureTopic9
			// 
			this->pictureTopic9->Location = System::Drawing::Point(69, 52);
			this->pictureTopic9->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic9->Name = L"pictureTopic9";
			this->pictureTopic9->Size = System::Drawing::Size(397, 286);
			this->pictureTopic9->TabIndex = 5;
			this->pictureTopic9->TabStop = false;
			// 
			// textBoxTopic9
			// 
			this->textBoxTopic9->Location = System::Drawing::Point(141, 334);
			this->textBoxTopic9->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic9->Name = L"textBoxTopic9";
			this->textBoxTopic9->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic9->TabIndex = 4;
			// 
			// button2Topic9
			// 
			this->button2Topic9->Location = System::Drawing::Point(267, 400);
			this->button2Topic9->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic9->Name = L"button2Topic9";
			this->button2Topic9->Size = System::Drawing::Size(200, 70);
			this->button2Topic9->TabIndex = 3;
			this->button2Topic9->Text = L"Practice";
			this->button2Topic9->UseVisualStyleBackColor = true;
			this->button2Topic9->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic9_Click);
			// 
			// button1Topic9
			// 
			this->button1Topic9->Location = System::Drawing::Point(69, 400);
			this->button1Topic9->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic9->Name = L"button1Topic9";
			this->button1Topic9->Size = System::Drawing::Size(200, 70);
			this->button1Topic9->TabIndex = 3;
			this->button1Topic9->Text = L"Learn";
			this->button1Topic9->UseVisualStyleBackColor = true;
			this->button1Topic9->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic9_Click);
			// 
			// topic8
			// 
			this->topic8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic8->Controls->Add(this->pictureTopic8);
			this->topic8->Controls->Add(this->textBoxTopic8);
			this->topic8->Controls->Add(this->button2Topic8);
			this->topic8->Controls->Add(this->button1Topic8);
			this->topic8->Location = System::Drawing::Point(634, 1085);
			this->topic8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic8->Name = L"topic8";
			this->topic8->Size = System::Drawing::Size(533, 477);
			this->topic8->TabIndex = 7;
			// 
			// pictureTopic8
			// 
			this->pictureTopic8->Location = System::Drawing::Point(69, 52);
			this->pictureTopic8->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic8->Name = L"pictureTopic8";
			this->pictureTopic8->Size = System::Drawing::Size(397, 286);
			this->pictureTopic8->TabIndex = 5;
			this->pictureTopic8->TabStop = false;
			// 
			// textBoxTopic8
			// 
			this->textBoxTopic8->Location = System::Drawing::Point(141, 334);
			this->textBoxTopic8->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic8->Name = L"textBoxTopic8";
			this->textBoxTopic8->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic8->TabIndex = 4;
			// 
			// button2Topic8
			// 
			this->button2Topic8->Location = System::Drawing::Point(267, 400);
			this->button2Topic8->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic8->Name = L"button2Topic8";
			this->button2Topic8->Size = System::Drawing::Size(200, 70);
			this->button2Topic8->TabIndex = 3;
			this->button2Topic8->Text = L"Practice";
			this->button2Topic8->UseVisualStyleBackColor = true;
			this->button2Topic8->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic8_Click);
			// 
			// button1Topic8
			// 
			this->button1Topic8->Location = System::Drawing::Point(69, 400);
			this->button1Topic8->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic8->Name = L"button1Topic8";
			this->button1Topic8->Size = System::Drawing::Size(200, 70);
			this->button1Topic8->TabIndex = 3;
			this->button1Topic8->Text = L"Learn";
			this->button1Topic8->UseVisualStyleBackColor = true;
			this->button1Topic8->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic8_Click);
			// 
			// topic7
			// 
			this->topic7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic7->Controls->Add(this->pictureTopic7);
			this->topic7->Controls->Add(this->textBoxTopic7);
			this->topic7->Controls->Add(this->button2Topic7);
			this->topic7->Controls->Add(this->button1Topic7);
			this->topic7->Location = System::Drawing::Point(47, 1085);
			this->topic7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic7->Name = L"topic7";
			this->topic7->Size = System::Drawing::Size(533, 477);
			this->topic7->TabIndex = 6;
			// 
			// pictureTopic7
			// 
			this->pictureTopic7->Location = System::Drawing::Point(69, 52);
			this->pictureTopic7->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic7->Name = L"pictureTopic7";
			this->pictureTopic7->Size = System::Drawing::Size(397, 286);
			this->pictureTopic7->TabIndex = 5;
			this->pictureTopic7->TabStop = false;
			// 
			// textBoxTopic7
			// 
			this->textBoxTopic7->Location = System::Drawing::Point(141, 334);
			this->textBoxTopic7->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic7->Name = L"textBoxTopic7";
			this->textBoxTopic7->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic7->TabIndex = 4;
			// 
			// button2Topic7
			// 
			this->button2Topic7->Location = System::Drawing::Point(267, 400);
			this->button2Topic7->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic7->Name = L"button2Topic7";
			this->button2Topic7->Size = System::Drawing::Size(200, 70);
			this->button2Topic7->TabIndex = 3;
			this->button2Topic7->Text = L"Practice";
			this->button2Topic7->UseVisualStyleBackColor = true;
			this->button2Topic7->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic7_Click);
			// 
			// button1Topic7
			// 
			this->button1Topic7->Location = System::Drawing::Point(69, 400);
			this->button1Topic7->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic7->Name = L"button1Topic7";
			this->button1Topic7->Size = System::Drawing::Size(200, 70);
			this->button1Topic7->TabIndex = 3;
			this->button1Topic7->Text = L"Learn";
			this->button1Topic7->UseVisualStyleBackColor = true;
			this->button1Topic7->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic7_Click);
			// 
			// topic6
			// 
			this->topic6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic6->Controls->Add(this->pictureTopic6);
			this->topic6->Controls->Add(this->textBoxTopic6);
			this->topic6->Controls->Add(this->button2Topic6);
			this->topic6->Controls->Add(this->button1Topic6);
			this->topic6->Location = System::Drawing::Point(1222, 565);
			this->topic6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic6->Name = L"topic6";
			this->topic6->Size = System::Drawing::Size(533, 477);
			this->topic6->TabIndex = 5;
			// 
			// pictureTopic6
			// 
			this->pictureTopic6->Location = System::Drawing::Point(69, 52);
			this->pictureTopic6->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic6->Name = L"pictureTopic6";
			this->pictureTopic6->Size = System::Drawing::Size(397, 286);
			this->pictureTopic6->TabIndex = 5;
			this->pictureTopic6->TabStop = false;
			// 
			// textBoxTopic6
			// 
			this->textBoxTopic6->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic6->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic6->Name = L"textBoxTopic6";
			this->textBoxTopic6->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic6->TabIndex = 4;
			// 
			// button2Topic6
			// 
			this->button2Topic6->Location = System::Drawing::Point(267, 400);
			this->button2Topic6->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic6->Name = L"button2Topic6";
			this->button2Topic6->Size = System::Drawing::Size(200, 70);
			this->button2Topic6->TabIndex = 3;
			this->button2Topic6->Text = L"Practice";
			this->button2Topic6->UseVisualStyleBackColor = true;
			this->button2Topic6->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic6_Click);
			// 
			// button1Topic6
			// 
			this->button1Topic6->Location = System::Drawing::Point(69, 400);
			this->button1Topic6->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic6->Name = L"button1Topic6";
			this->button1Topic6->Size = System::Drawing::Size(200, 70);
			this->button1Topic6->TabIndex = 3;
			this->button1Topic6->Text = L"Learn";
			this->button1Topic6->UseVisualStyleBackColor = true;
			this->button1Topic6->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic6_Click);
			// 
			// topic5
			// 
			this->topic5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic5->Controls->Add(this->pictureTopic5);
			this->topic5->Controls->Add(this->textBoxTopic5);
			this->topic5->Controls->Add(this->button2Topic5);
			this->topic5->Controls->Add(this->button1Topic5);
			this->topic5->Location = System::Drawing::Point(634, 565);
			this->topic5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic5->Name = L"topic5";
			this->topic5->Size = System::Drawing::Size(533, 477);
			this->topic5->TabIndex = 4;
			// 
			// pictureTopic5
			// 
			this->pictureTopic5->Location = System::Drawing::Point(69, 52);
			this->pictureTopic5->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic5->Name = L"pictureTopic5";
			this->pictureTopic5->Size = System::Drawing::Size(397, 286);
			this->pictureTopic5->TabIndex = 5;
			this->pictureTopic5->TabStop = false;
			// 
			// textBoxTopic5
			// 
			this->textBoxTopic5->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic5->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic5->Name = L"textBoxTopic5";
			this->textBoxTopic5->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic5->TabIndex = 4;
			// 
			// button2Topic5
			// 
			this->button2Topic5->Location = System::Drawing::Point(267, 405);
			this->button2Topic5->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic5->Name = L"button2Topic5";
			this->button2Topic5->Size = System::Drawing::Size(200, 70);
			this->button2Topic5->TabIndex = 3;
			this->button2Topic5->Text = L"Practice";
			this->button2Topic5->UseVisualStyleBackColor = true;
			this->button2Topic5->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic5_Click);
			// 
			// button1Topic5
			// 
			this->button1Topic5->Location = System::Drawing::Point(69, 405);
			this->button1Topic5->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic5->Name = L"button1Topic5";
			this->button1Topic5->Size = System::Drawing::Size(200, 70);
			this->button1Topic5->TabIndex = 3;
			this->button1Topic5->Text = L"Learn";
			this->button1Topic5->UseVisualStyleBackColor = true;
			this->button1Topic5->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic5_Click);
			// 
			// topic4
			// 
			this->topic4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic4->Controls->Add(this->pictureTopic4);
			this->topic4->Controls->Add(this->textBoxTopic4);
			this->topic4->Controls->Add(this->button2Topic4);
			this->topic4->Controls->Add(this->button1Topic4);
			this->topic4->Location = System::Drawing::Point(47, 565);
			this->topic4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic4->Name = L"topic4";
			this->topic4->Size = System::Drawing::Size(533, 477);
			this->topic4->TabIndex = 3;
			// 
			// pictureTopic4
			// 
			this->pictureTopic4->Location = System::Drawing::Point(69, 52);
			this->pictureTopic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic4->Name = L"pictureTopic4";
			this->pictureTopic4->Size = System::Drawing::Size(397, 286);
			this->pictureTopic4->TabIndex = 5;
			this->pictureTopic4->TabStop = false;
			// 
			// textBoxTopic4
			// 
			this->textBoxTopic4->Location = System::Drawing::Point(141, 335);
			this->textBoxTopic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic4->Name = L"textBoxTopic4";
			this->textBoxTopic4->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic4->TabIndex = 4;
			// 
			// button2Topic4
			// 
			this->button2Topic4->Location = System::Drawing::Point(267, 400);
			this->button2Topic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic4->Name = L"button2Topic4";
			this->button2Topic4->Size = System::Drawing::Size(200, 70);
			this->button2Topic4->TabIndex = 3;
			this->button2Topic4->Text = L"Practice";
			this->button2Topic4->UseVisualStyleBackColor = true;
			this->button2Topic4->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic4_Click);
			// 
			// button1Topic4
			// 
			this->button1Topic4->Location = System::Drawing::Point(69, 400);
			this->button1Topic4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic4->Name = L"button1Topic4";
			this->button1Topic4->Size = System::Drawing::Size(200, 70);
			this->button1Topic4->TabIndex = 3;
			this->button1Topic4->Text = L"Learn";
			this->button1Topic4->UseVisualStyleBackColor = true;
			this->button1Topic4->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic4_Click);
			// 
			// topic3
			// 
			this->topic3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic3->Controls->Add(this->pictureTopic3);
			this->topic3->Controls->Add(this->textBoxTopic3);
			this->topic3->Controls->Add(this->button2Topic3);
			this->topic3->Controls->Add(this->button1Topic3);
			this->topic3->Location = System::Drawing::Point(1222, 47);
			this->topic3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic3->Name = L"topic3";
			this->topic3->Size = System::Drawing::Size(533, 477);
			this->topic3->TabIndex = 2;
			// 
			// pictureTopic3
			// 
			this->pictureTopic3->Location = System::Drawing::Point(69, 52);
			this->pictureTopic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic3->Name = L"pictureTopic3";
			this->pictureTopic3->Size = System::Drawing::Size(397, 286);
			this->pictureTopic3->TabIndex = 5;
			this->pictureTopic3->TabStop = false;
			// 
			// textBoxTopic3
			// 
			this->textBoxTopic3->Location = System::Drawing::Point(141, 340);
			this->textBoxTopic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic3->Name = L"textBoxTopic3";
			this->textBoxTopic3->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic3->TabIndex = 4;
			// 
			// button2Topic3
			// 
			this->button2Topic3->Location = System::Drawing::Point(267, 405);
			this->button2Topic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic3->Name = L"button2Topic3";
			this->button2Topic3->Size = System::Drawing::Size(200, 70);
			this->button2Topic3->TabIndex = 3;
			this->button2Topic3->Text = L"Practice";
			this->button2Topic3->UseVisualStyleBackColor = true;
			this->button2Topic3->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic3_Click);
			// 
			// button1Topic3
			// 
			this->button1Topic3->Location = System::Drawing::Point(69, 405);
			this->button1Topic3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic3->Name = L"button1Topic3";
			this->button1Topic3->Size = System::Drawing::Size(200, 70);
			this->button1Topic3->TabIndex = 3;
			this->button1Topic3->Text = L"Learn";
			this->button1Topic3->UseVisualStyleBackColor = true;
			this->button1Topic3->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic3_Click);
			// 
			// topic2
			// 
			this->topic2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic2->Controls->Add(this->pictureTopic2);
			this->topic2->Controls->Add(this->textBoxTopic2);
			this->topic2->Controls->Add(this->button2Topic2);
			this->topic2->Controls->Add(this->button1Topic2);
			this->topic2->Location = System::Drawing::Point(634, 47);
			this->topic2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic2->Name = L"topic2";
			this->topic2->Size = System::Drawing::Size(533, 477);
			this->topic2->TabIndex = 1;
			// 
			// pictureTopic2
			// 
			this->pictureTopic2->Location = System::Drawing::Point(69, 52);
			this->pictureTopic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic2->Name = L"pictureTopic2";
			this->pictureTopic2->Size = System::Drawing::Size(397, 286);
			this->pictureTopic2->TabIndex = 5;
			this->pictureTopic2->TabStop = false;
			// 
			// textBoxTopic2
			// 
			this->textBoxTopic2->Location = System::Drawing::Point(141, 340);
			this->textBoxTopic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic2->Name = L"textBoxTopic2";
			this->textBoxTopic2->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic2->TabIndex = 4;
			// 
			// button2Topic2
			// 
			this->button2Topic2->Location = System::Drawing::Point(267, 405);
			this->button2Topic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic2->Name = L"button2Topic2";
			this->button2Topic2->Size = System::Drawing::Size(200, 70);
			this->button2Topic2->TabIndex = 3;
			this->button2Topic2->Text = L"Practice";
			this->button2Topic2->UseVisualStyleBackColor = true;
			this->button2Topic2->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic2_Click);
			// 
			// button1Topic2
			// 
			this->button1Topic2->Location = System::Drawing::Point(69, 405);
			this->button1Topic2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic2->Name = L"button1Topic2";
			this->button1Topic2->Size = System::Drawing::Size(200, 70);
			this->button1Topic2->TabIndex = 3;
			this->button1Topic2->Text = L"Learn";
			this->button1Topic2->UseVisualStyleBackColor = true;
			this->button1Topic2->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic2_Click);
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
			this->panelTopicVocabulary->Controls->Add(this->topic5);
			this->panelTopicVocabulary->Controls->Add(this->topic6);
			this->panelTopicVocabulary->Controls->Add(this->topic7);
			this->panelTopicVocabulary->Controls->Add(this->topic8);
			this->panelTopicVocabulary->Controls->Add(this->topic9);
			this->panelTopicVocabulary->Controls->Add(this->topic10);
			this->panelTopicVocabulary->Controls->Add(this->topic11);
			this->panelTopicVocabulary->Controls->Add(this->topic12);
			this->panelTopicVocabulary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTopicVocabulary->Location = System::Drawing::Point(0, 105);
			this->panelTopicVocabulary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelTopicVocabulary->Name = L"panelTopicVocabulary";
			this->panelTopicVocabulary->Size = System::Drawing::Size(1859, 880);
			this->panelTopicVocabulary->TabIndex = 2;
			// 
			// topic1
			// 
			this->topic1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->topic1->Controls->Add(this->pictureTopic1);
			this->topic1->Controls->Add(this->textBoxTopic1);
			this->topic1->Controls->Add(this->button2Topic1);
			this->topic1->Controls->Add(this->button1Topic1);
			this->topic1->Location = System::Drawing::Point(47, 47);
			this->topic1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->topic1->Name = L"topic1";
			this->topic1->Size = System::Drawing::Size(533, 477);
			this->topic1->TabIndex = 0;
			// 
			// pictureTopic1
			// 
			this->pictureTopic1->Location = System::Drawing::Point(70, 52);
			this->pictureTopic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureTopic1->Name = L"pictureTopic1";
			this->pictureTopic1->Size = System::Drawing::Size(397, 286);
			this->pictureTopic1->TabIndex = 5;
			this->pictureTopic1->TabStop = false;
			// 
			// textBoxTopic1
			// 
			this->textBoxTopic1->Location = System::Drawing::Point(141, 340);
			this->textBoxTopic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBoxTopic1->Name = L"textBoxTopic1";
			this->textBoxTopic1->Size = System::Drawing::Size(260, 38);
			this->textBoxTopic1->TabIndex = 4;
			// 
			// button2Topic1
			// 
			this->button2Topic1->Location = System::Drawing::Point(267, 405);
			this->button2Topic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2Topic1->Name = L"button2Topic1";
			this->button2Topic1->Size = System::Drawing::Size(200, 70);
			this->button2Topic1->TabIndex = 3;
			this->button2Topic1->Text = L"Practice";
			this->button2Topic1->UseVisualStyleBackColor = true;
			this->button2Topic1->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button2Topic1_Click);
			// 
			// button1Topic1
			// 
			this->button1Topic1->Location = System::Drawing::Point(69, 405);
			this->button1Topic1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button1Topic1->Name = L"button1Topic1";
			this->button1Topic1->Size = System::Drawing::Size(200, 70);
			this->button1Topic1->TabIndex = 3;
			this->button1Topic1->Text = L"Learn";
			this->button1Topic1->UseVisualStyleBackColor = true;
			this->button1Topic1->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::button1Topic1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormTopicVocabulary::pictureBox1_Click);
			// 
			// FormTopicVocabulary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1859, 985);
			this->Controls->Add(this->panelTopicVocabulary);
			this->Controls->Add(this->panelLabelTopic);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FormTopicVocabulary";
			this->Text = L"FormTopicVocabulary";
			this->panelLabelTopic->ResumeLayout(false);
			this->panelLabelTopic->PerformLayout();
			this->topic12->ResumeLayout(false);
			this->topic12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic12))->EndInit();
			this->topic11->ResumeLayout(false);
			this->topic11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic11))->EndInit();
			this->topic10->ResumeLayout(false);
			this->topic10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic10))->EndInit();
			this->topic9->ResumeLayout(false);
			this->topic9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic9))->EndInit();
			this->topic8->ResumeLayout(false);
			this->topic8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic8))->EndInit();
			this->topic7->ResumeLayout(false);
			this->topic7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic7))->EndInit();
			this->topic6->ResumeLayout(false);
			this->topic6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic6))->EndInit();
			this->topic5->ResumeLayout(false);
			this->topic5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic5))->EndInit();
			this->topic4->ResumeLayout(false);
			this->topic4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic4))->EndInit();
			this->topic3->ResumeLayout(false);
			this->topic3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic3))->EndInit();
			this->topic2->ResumeLayout(false);
			this->topic2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic2))->EndInit();
			this->panelTopicVocabulary->ResumeLayout(false);
			this->topic1->ResumeLayout(false);
			this->topic1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTopic1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		panelTopicVocabulary->Controls->Add(form);
		panelTopicVocabulary ->Tag = form;
		panelTopicVocabulary->AutoScroll = false;
		form->BringToFront();
		form->Show();


	}

	private: void ExecuteButtonLearn(System::Object^ sender) {
		System::Windows::Forms::Button^ btn = (System::Windows::Forms::Button^)sender;

		System::String^ temp = btn->Name->Substring(12);
		int i_topic = int::Parse(temp);
		
		
		FormVocabulary^ nextForm = gcnew FormVocabulary(topicVocabularies[i_topic - 1], panelTopicVocabulary);

		openChildForm(nextForm);
	}
	
	private: void ExecuteButtonPractice(System::Object^ sender) {
		System::Windows::Forms::Button^ btn = (System::Windows::Forms::Button^)sender;
		System::String^ temp = btn->Name->Substring(12);
		int i_topic = int::Parse(temp);


		FormTraditionalGame^ nextForm = gcnew FormTraditionalGame(topicGames[i_topic - 1], panelTopicVocabulary);

		openChildForm(nextForm);

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   

	private: System::Void button1Topic1_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic2_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic3_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic6_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic5_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic4_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic10_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic7_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic8_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic12_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic11_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}
	private: System::Void button1Topic9_Click(System::Object^ sender, System::EventArgs^ e) {
		ExecuteButtonLearn(sender);
	}

private: System::Void button2Topic1_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic2_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic3_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic4_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic5_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic6_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic12_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic8_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic9_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic10_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic11_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
}
private: System::Void button2Topic7_Click(System::Object^ sender, System::EventArgs^ e) {
	ExecuteButtonPractice(sender);
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
		panelTopicVocabulary->AutoScroll = true;
		this->panelTopicVocabulary->Controls->Remove(activeForm);
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
