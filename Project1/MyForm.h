#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
using namespace System::IO;
namespace Project1 {

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
		MyForm()
		{
			InitializeComponent();

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(178, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(110, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Login:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(37, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(246, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 29);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(246, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(275, 29);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Coral;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(522, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Вход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Coral;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(93, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 37);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Peru;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(277, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ещё нет аккаунта\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 400);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ log;
		String^ pas;
		bool Log_Pas(String^ log, String^ pas)
		{
			for (int i = 0; i < 10; i++) {
				if (log ==arrForName[i] && pas == arrForPass[i] ) {
					return true;
				}
			}
					MessageBox::Show(this, "Вы ввели неверный пароль или логин!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return false;
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();
	}
		   cli::array<String^>^ arrForName = gcnew cli::array<String^>(512);
		   cli::array<String^>^ arrForPass = gcnew cli::array<String^>(512);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ sw = gcnew StreamReader("D:\\Text.txt");
		StreamReader^ s = gcnew StreamReader("D:\\Text1.txt");
		int count = 0;
		for (size_t i = 0; i < 10; i++)
		{
            arrForName[i] = sw->ReadLine();
			arrForPass[i] = s->ReadLine();
		}

		sw->Close();
		s->Close();
		log = textBox1->Text;
		pas = textBox2->Text;
		for (size_t i = 0; i < 10; i++)
		{
			if (arrForName[i] != ""&& arrForPass[i]) {
				count++;
			}
		}
		if (Log_Pas(log, pas))
		{
			
			MyForm3^ form2 = gcnew MyForm3();
			for (size_t i = 0; i < count; i++)
			{
            form2->text1->Text += System::Convert::ToString ("["+ (i + 1) +"]" + (arrForName[i]) + " ");
			form2->text2->Text += System::Convert::ToString("[" + (i + 1) + "]" + (arrForPass[i]) + " ");
			}
			form2->Show();
			MyForm::Hide();
		}

	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->Hide();
		MyForm2^ f3 = gcnew MyForm2();
		f3->Show();
	}
	};
}


