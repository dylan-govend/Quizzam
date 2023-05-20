#pragma once

#include "PlayQuiz.h"
#include "CreateQuiz.h"
#include "Leaderboard.h"
#include "Settings.h"

namespace Quizzam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserMenu
	/// </summary>
	public ref class UserMenu : public System::Windows::Forms::Form
	{
	public:
		UserMenu(void)
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
		~UserMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(473, 804);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(500, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Quit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserMenu::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 702);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(500, 80);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserMenu::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(473, 604);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(500, 80);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Leaderboard";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UserMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(473, 504);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(500, 80);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Create Quiz";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &UserMenu::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(473, 404);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(500, 80);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Play Quiz";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &UserMenu::button7_Click);
			// 
			// UserMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1478, 1019);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"UserMenu";
			this->Text = L"UserMenu";
			this->ResumeLayout(false);

		}
#pragma endregion
	// quit button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (MessageBox::Show("Do you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::None) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	
	// settings button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)  
	{
		this->Hide();
		Settings^ settings = gcnew Settings;
		settings->Show();
	}

	// leaderboard button
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		Leaderboard^ board = gcnew Leaderboard;
		board->Show();
	}

	// create quiz button
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		CreateQuiz^ create = gcnew CreateQuiz;
		create->Show();
	}
	
	// play quiz button
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		PlayQuiz^ play = gcnew PlayQuiz;
		play->Show();
	}
};
}
