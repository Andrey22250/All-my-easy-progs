#pragma once

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для AddStr
	/// </summary>
	public ref class AddStr : public System::Windows::Forms::Form
	{
	public:
		AddStr(void)
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
		~AddStr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Number;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ Number1;



	private: System::Windows::Forms::TextBox^ Point1;
	private: System::Windows::Forms::MaskedTextBox^ place1;
	private: System::Windows::Forms::MaskedTextBox^ price1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Button^ button1;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Number = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Number1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Point1 = (gcnew System::Windows::Forms::TextBox());
			this->place1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->price1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(104, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добавление строки";
			// 
			// Number
			// 
			this->Number->AutoSize = true;
			this->Number->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Number->ForeColor = System::Drawing::Color::White;
			this->Number->Location = System::Drawing::Point(30, 76);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(186, 33);
			this->Number->TabIndex = 1;
			this->Number->Text = L"Номер рейса:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(30, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пункт назначения:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(30, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Дата отпрвавления:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(30, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Время отправления:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(30, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Кол-во мест:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(30, 339);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Цена билета:";
			// 
			// Number1
			// 
			this->Number1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Number1->BeepOnError = true;
			this->Number1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Number1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Number1->ForeColor = System::Drawing::Color::White;
			this->Number1->Location = System::Drawing::Point(318, 79);
			this->Number1->Mask = L"00000000";
			this->Number1->Name = L"Number1";
			this->Number1->Size = System::Drawing::Size(136, 23);
			this->Number1->SkipLiterals = false;
			this->Number1->TabIndex = 7;
			// 
			// Point1
			// 
			this->Point1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Point1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Point1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Point1->ForeColor = System::Drawing::Color::White;
			this->Point1->Location = System::Drawing::Point(318, 125);
			this->Point1->MaxLength = 16;
			this->Point1->Name = L"Point1";
			this->Point1->Size = System::Drawing::Size(136, 23);
			this->Point1->TabIndex = 10;
			// 
			// place1
			// 
			this->place1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->place1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->place1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->place1->ForeColor = System::Drawing::Color::White;
			this->place1->Location = System::Drawing::Point(318, 287);
			this->place1->Mask = L"00000";
			this->place1->Name = L"place1";
			this->place1->Size = System::Drawing::Size(136, 23);
			this->place1->TabIndex = 11;
			this->place1->ValidatingType = System::Int32::typeid;
			// 
			// price1
			// 
			this->price1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->price1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->price1->ForeColor = System::Drawing::Color::White;
			this->price1->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Insert;
			this->price1->Location = System::Drawing::Point(318, 339);
			this->price1->Mask = L"00000";
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(136, 23);
			this->price1->TabIndex = 12;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(318, 182);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->Value = System::DateTime(2020, 1, 1, 16, 46, 0, 0);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker2->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dateTimePicker2->CustomFormat = L"HH:mm";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(318, 237);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker2->TabIndex = 14;
			this->dateTimePicker2->Value = System::DateTime(2023, 6, 6, 0, 0, 0, 0);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(176, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 42);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddStr::button1_Click);
			// 
			// AddStr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->price1);
			this->Controls->Add(this->place1);
			this->Controls->Add(this->Point1);
			this->Controls->Add(this->Number1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Number);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"AddStr";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление строки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool check()	//Проверка, чтобы не было пустых полей
	{
		if (Number1->Text->Length == 0 || Point1->Text->Length == 0 || place1->Text->Length == 0 || price1->Text->Length == 0)
		{
			MessageBox::Show(L"Отсутствуют данные. Проверьте поля", L"Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			return true;
		}
	}
	private: String^ temp = "\0";	//Временная строка
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {	//Запись строки и выход
		if(check() == true)
		{
			temp = Number1->Text + ";" + Point1->Text + ";" + dateTimePicker1->Text + ";" + dateTimePicker2->Text + ";" + place1->Text + ";" + price1->Text;
			StreamWriter^ f1 = gcnew StreamWriter("new_str.txt");
			f1->Write(temp);
			f1->Close();
			this->Hide();
		}
	}
};
}
