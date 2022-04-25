#pragma once

namespace LabTwo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		List<KeyValuePair<String^, int>>^ mDensity1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
		   List<KeyValuePair<String^, int>>^ mDensity2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(214, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox1->Location = System::Drawing::Point(72, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(39, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox2->Location = System::Drawing::Point(166, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(39, 21);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(264, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Count";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 267);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int den1 = System::Convert::ToInt32(comboBox1->SelectedIndex);
		int den2 = System::Convert::ToInt32(comboBox2->SelectedIndex);
		// label1->Text = String::Format("{0:F0} {1:F0}", den1, den2);
		Single a, b, c, d;
		Single A = Single::TryParse(textBox1->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, a);
		Single B = Single::TryParse(textBox2->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, b);
		Single C = Single::TryParse(textBox3->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, c);

		if (den1 > 1 && den2 < 2) {
			if (den1 == 2) {
				if (den2 == 0) {
					label1->Text = String::Format("= {0:F3}", a * b + c);
				}
				if (den2 == 1) {
					label1->Text = String::Format("= {0:F3}", a * b - c);
				}
			}
			if (den1 == 3) {
				if (den2 == 0) {
					if (b != 0) label1->Text = String::Format("= {0:F3}", a / b + c);
				}
				if (den2 == 1) {
					if (b != 0)	label1->Text = String::Format("= {0:F3}", a / b - c);
				}
			}
		}
		else if (den1 < 2 && den2 > 1) {
			if (den2 == 2) {
				if (den1 == 0) {
					label1->Text = String::Format("= {0:F3}", a + b * c);
				}
				if (den1 == 1) {
					label1->Text = String::Format("= {0:F3}", a - b * c);
				}
			}
			if (den2 == 3) {
				if (den1 == 0) {
					if (c != 0) label1->Text = String::Format("= {0:F3}", a + b / c);
				}
				if (den1 == 1) {
					if (c != 0) label1->Text = String::Format("= {0:F3}", a - b / c);
				}
			}
		}
		else if (den1 > 1 && den2 > 1) {
			if (den1 == 2) {
				if (den2 == 2) {
					label1->Text = String::Format("= {0:F3}", a * b * c);
				}
				if (den2 == 3) {
					if (c != 0) label1->Text = String::Format("= {0:F3}", a * b / c);
				}
			}
			if (den1 == 3) {
				if (den2 == 2) {
					if (b != 0) label1->Text = String::Format("= {0:F3}", a / b * c);
				}
				if (den2 == 3) {
					if (b != 0 && c != 0) label1->Text = String::Format("= {0:F3}", a / b / c);
				}
			}

		}
		else if (den1 < 2 && den2 < 2) {
			if (den1 == 0) {
				if (den2 == 0) {
					label1->Text = String::Format("= {0:F3}", a + b + c);
				}
				if (den2 == 1) {
					label1->Text = String::Format("= {0:F3}", a + b - c);
				}
			}
			if (den1 == 1) {
				if (den2 == 0) {
					label1->Text = String::Format("= {0:F3}", a - b + c);
				}
				if (den2 == 1) {
					label1->Text = String::Format("= {0:F3}", a - b - c);
				}
			}
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
