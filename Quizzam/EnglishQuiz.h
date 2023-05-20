#pragma once

#include <vector>
#include <string>

using namespace std;

namespace Quizzam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EnglishQuiz
	/// </summary>
	public ref class EnglishQuiz : public System::Windows::Forms::Form
	{
	public:
		EnglishQuiz(void)
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
		~EnglishQuiz()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(99, 45);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(828, 10);
			this->progressBar1->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(12, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(965, 657);
			this->panel1->TabIndex = 11;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(104, 572);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(124, 29);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"answer4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(104, 519);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(124, 29);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"answer3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(104, 464);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(124, 29);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"answer2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(104, 407);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(124, 29);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"answer1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(104, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(693, 253);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Question";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 779);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(278, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnglishQuiz::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(699, 770);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(278, 50);
			this->button2->TabIndex = 12;
			this->button2->Text = L"next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EnglishQuiz::button2_Click);
			// 
			// EnglishQuiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1369, 933);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"EnglishQuiz";
			this->Text = L"EnglishQuiz";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
};
}
