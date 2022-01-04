#pragma once
#include<vector>
#include"./vocabulary/vocabulary.h"
#include"FormContentVocabulary.h"
#include"./dictionary/dictionary.h"
#include"./topic/topic_vocabulary.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormVocabulary
	/// </summary>
	public ref class FormVocabulary : public System::Windows::Forms::Form
	{
	public:
		FormVocabulary(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormVocabulary(std::vector<int> indexes, dict* dic, System::Windows::Forms::Panel^ panel) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->imgLists = gcnew System::Windows::Forms::ImageList();
			this->imgLists->ImageSize = System::Drawing::Size(90, 90);

			listVocabs->LargeImageList = imgLists;
			this->vocabs = new Vocabulary*[indexes.size()];
			System::Windows::Forms::ListViewItem^ item;
			for (int i = 0; i < indexes.size(); ++i) {
				item = gcnew System::Windows::Forms::ListViewItem();

				System::String^ path = L"../../assets/";

				item->Text = gcnew System::String(UTF8ToUnicode(dic->_dict[indexes[i]].getWord()).c_str());
				System::String^ filename = path + item->Text + L".png";

				if (dic->_dict[indexes[i]].getImage() != "") {
					imgLists->Images->Add(gcnew Bitmap(filename));
				}

				else {
					imgLists->Images->Add(gcnew Bitmap("../../assets/icon_nothing.png"));
				}


				item->ImageIndex = i;
				item->Name = L"itemVocab" + i.ToString();

				listVocabs->Items->Add(item);

				this->vocabs[i] = &dic->_dict[indexes[i]];
			}
		}
		FormVocabulary(TopicVocabulary* topic, System::Windows::Forms::Panel^ panel) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->imgLists = gcnew System::Windows::Forms::ImageList();
			this->imgLists->ImageSize = System::Drawing::Size(90, 90);

			listVocabs->LargeImageList = imgLists;
			this->vocabs = new Vocabulary*[topic->getVocabs().size()];
			System::Windows::Forms::ListViewItem^ item;
			for (int i = 0; i < topic->getVocabs().size(); ++i) {
				vocabs[i] = &topic->vocabs[i];
				item = gcnew System::Windows::Forms::ListViewItem();
				
				System::String^ path = L"../../assets/";
				
				item->Text = gcnew System::String(vocabs[i]->getWord().c_str());
				System::String^ filename = path + item->Text + L".png";

				if (vocabs[i]->getImage() != "") {
					imgLists->Images->Add(gcnew Bitmap(filename));
				}

				else {
					imgLists->Images->Add(gcnew Bitmap("../../assets/icon_nothing.png"));
				}
				
				
				item->ImageIndex = i;
				item->Name = L"itemVocab" + i.ToString();

				listVocabs->Items->Add(item);
				
				
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormVocabulary()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Vocabulary** vocabs;
	private: System::Windows::Forms::ListView^ listVocabs;
	private: System::Windows::Forms::ImageList^ imgLists;
	private: System::Windows::Forms::Panel^ panelVocabulary;


	protected:

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
			this->listVocabs = (gcnew System::Windows::Forms::ListView());
			this->panelVocabulary = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// listVocabs
			// 
			this->listVocabs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listVocabs->HideSelection = false;
			this->listVocabs->Location = System::Drawing::Point(0, 0);
			this->listVocabs->Name = L"listVocabs";
			this->listVocabs->Size = System::Drawing::Size(1827, 883);
			this->listVocabs->TabIndex = 0;
			this->listVocabs->UseCompatibleStateImageBehavior = false;
			this->listVocabs->SelectedIndexChanged += gcnew System::EventHandler(this, &FormVocabulary::listVocabs_SelectedIndexChanged);
			// 
			// panelVocabulary
			// 
			this->panelVocabulary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelVocabulary->Location = System::Drawing::Point(0, 0);
			this->panelVocabulary->Name = L"panelVocabulary";
			this->panelVocabulary->Size = System::Drawing::Size(1827, 883);
			this->panelVocabulary->TabIndex = 1;
			// 
			// FormVocabulary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1827, 883);
			this->Controls->Add(this->listVocabs);
			this->Controls->Add(this->panelVocabulary);
			this->Name = L"FormVocabulary";
			this->Text = L"FormVocabulary";
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Windows::Forms::Form^ activeForm;
	std::wstring UTF8ToUnicode(const std::string& str)
	{
		int len = 0;
		len = str.length();
		int unicodeLen = ::MultiByteToWideChar(CP_UTF8,
			0,
			str.c_str(),
			-1,
			NULL,
			0);
		wchar_t* pUnicode;
		pUnicode = new wchar_t[unicodeLen + 1];
		memset(pUnicode, 0, (unicodeLen + 1) * sizeof(wchar_t));
		::MultiByteToWideChar(CP_UTF8,
			0,
			str.c_str(),
			-1,
			(LPWSTR)pUnicode,
			unicodeLen);
		std::wstring rt;
		rt = (wchar_t*)pUnicode;
		delete pUnicode;
		return rt;
	}
	private: void openChildForm(System::Windows::Forms::Form^ form) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}

		activeForm = form;
		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = System::Windows::Forms::DockStyle::Fill;
		panelVocabulary->Controls->Add(form);
		panelVocabulary->Tag = form;
		panelVocabulary->AutoScroll = false;
		listVocabs->SendToBack();
		form->BringToFront();
		form->Show();


	}

	private: void ExecuteItem(System::Object^ sender) {
		System::Windows::Forms::ListView^ lsv= (System::Windows::Forms::ListView^)sender;
		
		int i_vocabs = 0;

		if (lsv->SelectedItems->Count > 0) {
			System::Windows::Forms::ListViewItem^ item = lsv->SelectedItems[0];
			
			while (gcnew System::String(vocabs[i_vocabs]->getWord().c_str()) != item->Text) {
				++i_vocabs;
				
			}

			

			FormContentVocabulary^ nextForm = gcnew FormContentVocabulary(vocabs[i_vocabs], listVocabs);

			openChildForm(nextForm);
		}
		
	}
	private: System::Void listVocabs_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ExecuteItem(sender);
	}

	

};
}
