#pragma once

#include "UserMenu.h"

namespace Quizzam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User
	/// </summary>
	public ref class User : public System::Windows::Forms::Form
	{
	public:
		User(void)
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
		~User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(User::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 28.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(164, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SIGN IN";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(181, 314);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 45);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Username";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(181, 465);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 45);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Password";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(181, 358);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(531, 47);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(181, 509);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '•';
			this->textBox4->Size = System::Drawing::Size(531, 48);
			this->textBox4->TabIndex = 4;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(181, 642);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(179, 29);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"I accept to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &User::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox5->Location = System::Drawing::Point(354, 640);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(326, 31);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"Terms And Condtions";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(145, 798);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 111);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &User::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(1313, 798);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(269, 111);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &User::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(443, 798);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(269, 111);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Skip For Now";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &User::button3_Click_1);
			// 
			// User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1668, 961);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"User";
			this->Text = L"Sign In";
			this->Load += gcnew System::EventHandler(this, &User::User_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkBox1->Checked)
		{
			button1->Enabled = true;
		}

		else
		{
			button1->Enabled = false;
		}
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox3->Text == "Admin")
		{
			if (textBox4->Text == "Password")
			{
				this->Hide();
				UserMenu ^ menu = gcnew UserMenu;
				menu->Show();
			}

			else
			{
				MessageBox::Show("Incorrect password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		else
		{
			MessageBox::Show("Incorrect username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox4->UseSystemPasswordChar = true;
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		UserMenu^ usermenu = gcnew UserMenu;
		usermenu->Show();
	}
};
}
