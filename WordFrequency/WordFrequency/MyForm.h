#pragma once

namespace WordFrequency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  inputtxt;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  uniquevaltxt;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  myTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  valueHeader;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  keyColumn;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputtxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->uniquevaltxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->myTable = (gcnew System::Windows::Forms::DataGridView());
			this->valueHeader = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keyColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myTable))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter text below:";
			// 
			// inputtxt
			// 
			this->inputtxt->Location = System::Drawing::Point(26, 68);
			this->inputtxt->Multiline = true;
			this->inputtxt->Name = L"inputtxt";
			this->inputtxt->Size = System::Drawing::Size(249, 150);
			this->inputtxt->TabIndex = 1;
			this->inputtxt->Text = L"Enter Sentence enter wisely what You want you";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(343, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number of unique values:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(343, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"List of unique values (acsending):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(343, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"List of values and frequency:";
			// 
			// uniquevaltxt
			// 
			this->uniquevaltxt->Location = System::Drawing::Point(346, 47);
			this->uniquevaltxt->Name = L"uniquevaltxt";
			this->uniquevaltxt->Size = System::Drawing::Size(218, 20);
			this->uniquevaltxt->TabIndex = 5;
			this->uniquevaltxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 52);
			this->button1->TabIndex = 8;
			this->button1->Text = L"GO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// myTable
			// 
			this->myTable->AllowUserToAddRows = false;
			this->myTable->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->myTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->myTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->myTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->valueHeader,
					this->keyColumn
			});
			this->myTable->Location = System::Drawing::Point(346, 241);
			this->myTable->Name = L"myTable";
			this->myTable->ReadOnly = true;
			this->myTable->RowHeadersWidth = 60;
			this->myTable->Size = System::Drawing::Size(263, 150);
			this->myTable->TabIndex = 9;
			// 
			// valueHeader
			// 
			this->valueHeader->HeaderText = L"Values";
			this->valueHeader->Name = L"valueHeader";
			this->valueHeader->ReadOnly = true;
			// 
			// keyColumn
			// 
			this->keyColumn->HeaderText = L"Frequency";
			this->keyColumn->Name = L"keyColumn";
			this->keyColumn->ReadOnly = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(346, 110);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox1->Size = System::Drawing::Size(218, 95);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(690, 357);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->myTable);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->uniquevaltxt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inputtxt);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"My Text Box";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		listBox1->Items->Clear();
		myTable->Rows->Clear();

		//gets input and coverts to array using split
		String ^ userInput = inputtxt->Text;
		cli::array<String^>^ inputtxtArray = userInput->Split(' ');

		//create a hashtable with values and corresponding frequency
		Hashtable ^ freqTable = gcnew Hashtable();
		Boolean isUnique = true;

		for (int i = 0; i<inputtxtArray->Length;i++)
		{
			for each (Object^ entry in freqTable->Keys)
			{
				//check if key is already in table
				if (entry->ToString()->ToLower() == inputtxtArray[i]->ToLower())
				{
					//increment frequency 
					freqTable[entry] = (Convert::ToInt16(freqTable[entry]) + 1);
					isUnique = false;
					break;
				}
				else
				{ 
					isUnique = true;
				}
			}
			//add key with  value of 1 to table
			if(isUnique)
			{
				freqTable->Add(inputtxtArray[i], 1);
			}
			
		}

		//add keys from freqTbl to empty arrayli uniquekeys
		ArrayList ^ uniqueKeys= gcnew ArrayList();
		
		for each (Object^ k in freqTable->Keys)
		{
			if (Convert::ToInt16(freqTable[k]) == 1)
			{
				uniqueKeys->Add(k);
			}
			
		}
		
		//Output 1: number of unique words
		uniquevaltxt->Text = Convert::ToString(uniqueKeys->Count);

		//Output 2: list of unique words
		listBox1->Items->AddRange(uniqueKeys->ToArray());
		
		for each (DictionaryEntry^ entry in freqTable)
		{
			
			//Output 3:List of value and its frequency
			myTable->Rows->Add(entry->Key, entry->Value);
		}

		
	}
};
}
