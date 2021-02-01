#pragma once
#include <vector>

namespace SQCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sizeSelector->Value = sizeSelector->Maximum / 2;
			DisplayVector();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ nInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FlowLayoutPanel^ flPanel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ inputFrom;
	private: System::Windows::Forms::TrackBar^ sizeSelector;
	private: System::Windows::Forms::TextBox^ inputTo;
	private: System::Windows::Forms::Button^ btnGenerate;
	private: System::Windows::Forms::Label^ lblResult;

	protected:

	protected:
	private:
		void DisplayVector();
		std::vector<int> GetVector();
		void SearchInVector();
		System::String^ VectorToString(std::vector<int> v);

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->nInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->flPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->inputFrom = (gcnew System::Windows::Forms::TextBox());
			this->sizeSelector = (gcnew System::Windows::Forms::TrackBar());
			this->inputTo = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeSelector))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"enther value to search for";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(387, 12);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(95, 33);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// nInput
			// 
			this->nInput->Location = System::Drawing::Point(281, 12);
			this->nInput->Name = L"nInput";
			this->nInput->Size = System::Drawing::Size(100, 29);
			this->nInput->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Vector is";
			// 
			// flPanel1
			// 
			this->flPanel1->Location = System::Drawing::Point(13, 79);
			this->flPanel1->Name = L"flPanel1";
			this->flPanel1->Size = System::Drawing::Size(469, 100);
			this->flPanel1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"from";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(166, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"vector size";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(356, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"to";
			// 
			// inputFrom
			// 
			this->inputFrom->Location = System::Drawing::Point(13, 229);
			this->inputFrom->Name = L"inputFrom";
			this->inputFrom->Size = System::Drawing::Size(29, 29);
			this->inputFrom->TabIndex = 6;
			this->inputFrom->Text = L"0";
			// 
			// sizeSelector
			// 
			this->sizeSelector->Location = System::Drawing::Point(48, 229);
			this->sizeSelector->Name = L"sizeSelector";
			this->sizeSelector->Size = System::Drawing::Size(298, 45);
			this->sizeSelector->TabIndex = 7;
			// 
			// inputTo
			// 
			this->inputTo->Location = System::Drawing::Point(352, 229);
			this->inputTo->Name = L"inputTo";
			this->inputTo->Size = System::Drawing::Size(29, 29);
			this->inputTo->TabIndex = 6;
			this->inputTo->Text = L"5";
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(387, 225);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(95, 33);
			this->btnGenerate->TabIndex = 1;
			this->btnGenerate->Text = L"generate";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// lblResult
			// 
			this->lblResult->Location = System::Drawing::Point(12, 346);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(470, 34);
			this->lblResult->TabIndex = 8;
			this->lblResult->Text = L"awaiting calculation...";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 389);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->sizeSelector);
			this->Controls->Add(this->inputTo);
			this->Controls->Add(this->inputFrom);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->flPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nInput);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeSelector))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
			lblResult->Text = "";
			SearchInVector();
		}

		System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
			flPanel1->Controls->Clear();
			DisplayVector();
		}
};
}
