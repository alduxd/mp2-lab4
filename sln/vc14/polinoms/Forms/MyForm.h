#pragma once
#include "polinom.h"

#include <msclr\marshal_cppstd.h>
namespace Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите первый полином:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите второй полином:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(300, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результат:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(22, 224);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(300, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button3->Location = System::Drawing::Point(142, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 8;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(82, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 9;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Выберите операцию:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 304);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Арифмитические операции с полиномами";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Polinom *p1=new Polinom;
		Polinom *p2 = new Polinom;

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Polinom res;
try{
	
		String^ input = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string inputstr = context.marshal_as<std::string>(input);
		std::stringstream s1,s2,sres;

		s1 << inputstr;
		s1 >> (*p1);

		String^ input_ = textBox2->Text;
		std::string inputstr_ = context.marshal_as<std::string>(input_);

		s2 << inputstr_;
		s2 >> (*p2);

		res = (*p1) + (*p2);
		string str;
		sres << res;
		getline(sres, str);
		textBox3->Text = gcnew String(str.c_str());

		(*p1).Clean();
		(*p2).Clean();
		res.Clean();
	}
	
	catch (const char* error)
	{
		MessageBox::Show(gcnew String(error));
		(*p1).Clean();
		(*p2).Clean();
		res.Clean();

	}
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Polinom res;
	try {
		String^ input = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string inputstr = context.marshal_as<std::string>(input);
		std::stringstream s1, s2, sres;

		s1 << inputstr;
		s1 >> (*p1);

		String^ input_ = textBox2->Text;
		std::string inputstr_ = context.marshal_as<std::string>(input_);

		s2 << inputstr_;
		s2 >> (*p2);

		res = (*p1) * (*p2);
		string str;
		sres << res;
		getline(sres, str);
		textBox3->Text = gcnew String(str.c_str());

		(*p1).Clean();
		(*p2).Clean();
		res.Clean();
	}

	catch (const char* error)
	{
		MessageBox::Show(gcnew String(error));
		(*p1).Clean();
		(*p2).Clean();
		res.Clean();

	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Polinom res;
	try {
		String^ input = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string inputstr = context.marshal_as<std::string>(input);
		std::stringstream s1, s2, sres;

		s1 << inputstr;
		s1 >> (*p1);

		String^ input_ = textBox2->Text;
		std::string inputstr_ = context.marshal_as<std::string>(input_);

		s2 << inputstr_;
		s2 >> (*p2);

		res = (*p1) - (*p2);
		string str;
		sres << res;
		getline(sres, str);
		textBox3->Text = gcnew String(str.c_str());

		(*p1).Clean();
		(*p2).Clean();
		res.Clean();
	}

	catch (const char* error)
	{
		MessageBox::Show(gcnew String(error));
		(*p1).Clean();
		(*p2).Clean();
		res.Clean();

	}
}
};
}
