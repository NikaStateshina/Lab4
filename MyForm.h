#pragma once

namespace Laba4Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
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
	private: System::Windows::Forms::Label^ result;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ sum;

	private: System::Windows::Forms::Button^ dif;
	private: System::Windows::Forms::Button^ mul;
	private: System::Windows::Forms::Button^ equal;




	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ ACBut;


	private: double first_num;
	private: char useroper = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::Button^ but_dot;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->result = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->but_dot = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->dif = (gcnew System::Windows::Forms::Button());
			this->mul = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->ACBut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::SystemColors::ControlLight;
			this->result->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::Black;
			this->result->Location = System::Drawing::Point(12, 9);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(286, 38);
			this->result->TabIndex = 0;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(85, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 63);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(158, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 63);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 63);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(85, 139);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(158, 139);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 63);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 208);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 63);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(85, 208);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 63);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(158, 208);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 63);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(12, 277);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(140, 63);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// but_dot
			// 
			this->but_dot->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->but_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_dot->Location = System::Drawing::Point(158, 277);
			this->but_dot->Name = L"but_dot";
			this->but_dot->Size = System::Drawing::Size(67, 63);
			this->but_dot->TabIndex = 11;
			this->but_dot->Text = L",";
			this->but_dot->UseVisualStyleBackColor = false;
			this->but_dot->Click += gcnew System::EventHandler(this, &MyForm::but_dot_Click);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->sum->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sum->Location = System::Drawing::Point(231, 70);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(67, 63);
			this->sum->TabIndex = 12;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::sum_Click);
			// 
			// dif
			// 
			this->dif->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dif->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dif->Location = System::Drawing::Point(231, 139);
			this->dif->Name = L"dif";
			this->dif->Size = System::Drawing::Size(67, 63);
			this->dif->TabIndex = 13;
			this->dif->Text = L"-";
			this->dif->UseVisualStyleBackColor = false;
			this->dif->Click += gcnew System::EventHandler(this, &MyForm::dif_Click);
			// 
			// mul
			// 
			this->mul->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->mul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mul->Location = System::Drawing::Point(231, 208);
			this->mul->Name = L"mul";
			this->mul->Size = System::Drawing::Size(67, 63);
			this->mul->TabIndex = 14;
			this->mul->Text = L"*";
			this->mul->UseVisualStyleBackColor = false;
			this->mul->Click += gcnew System::EventHandler(this, &MyForm::mul_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->Location = System::Drawing::Point(12, 346);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(140, 63);
			this->equal->TabIndex = 15;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// div
			// 
			this->div->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->div->Location = System::Drawing::Point(231, 277);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(67, 63);
			this->div->TabIndex = 16;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = false;
			this->div->Click += gcnew System::EventHandler(this, &MyForm::div_Click);
			// 
			// ACBut
			// 
			this->ACBut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ACBut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ACBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ACBut->Location = System::Drawing::Point(158, 346);
			this->ACBut->Name = L"ACBut";
			this->ACBut->Size = System::Drawing::Size(140, 63);
			this->ACBut->TabIndex = 17;
			this->ACBut->Text = L"AC";
			this->ACBut->UseVisualStyleBackColor = false;
			this->ACBut->Click += gcnew System::EventHandler(this, &MyForm::ACBut_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(313, 415);
			this->Controls->Add(this->ACBut);
			this->Controls->Add(this->div);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->mul);
			this->Controls->Add(this->dif);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->but_dot);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->result);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);

	if (this->result->Text == "0" || is_equal) {
		this->result->Text = button->Text;
		is_equal = false;
	}
	else
		this->result->Text = this->result->Text + button->Text;
}
private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
	math_oper('+');
}
private: System::Void dif_Click(System::Object^ sender, System::EventArgs^ e) {
	math_oper('-');
}
private: System::Void mul_Click(System::Object^ sender, System::EventArgs^ e) {
	math_oper('*');
}
private: System::Void div_Click(System::Object^ sender, System::EventArgs^ e) {
	math_oper('/');
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e){
	if (useroper == ' ')
		return;
		double second = System::Convert::ToDouble(this->result->Text);
		double res;
		switch (this->useroper) {
		case '+':res = this->first_num + second; break;
		case '-':res = this->first_num - second; break;
		case '*':res = this->first_num * second; break;
		case '/':
			if (second == 0) {
				res = 0;
				MessageBox::Show(this, "ƒеление на ноль", "ќшибка", MessageBoxButtons::OK);
			}
			else
				res = this->first_num / second;
			break;
		}
		this->is_equal = true;
		this->result->Text = System::Convert::ToString(res);
}
private: System::Void math_oper(char oper) {
	this->first_num = System::Convert::ToDouble(this->result->Text);
	this->useroper = oper;
	this->result->Text = "0";

}
private: System::Void ACBut_Click(System::Object^ sender, System::EventArgs^ e) { 
	this->result->Text = "0";
	this->first_num = 0;
	this->useroper = ' ';
	this->is_equal = false;

}
private: System::Void but_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->result->Text;
	if(!text->Contains(","))
		this->result->Text = text + ",";
}
};
}
