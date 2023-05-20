#pragma once

namespace Quizzam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MathQuiz
	/// </summary>
	public ref class MathQuiz : public System::Windows::Forms::Form
	{
	public:
		MathQuiz(void)
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
		~MathQuiz()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MathQuiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1612, 1185);
			this->Name = L"MathQuiz";
			this->Text = L"MathQuiz";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
