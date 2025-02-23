#pragma once

extern int selectnumber; //Глобальная переменная, в cpp - int selectnumber = 0; Похожий метод и в Deletestr.h
namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Changestr
	/// </summary>
	public ref class Changestr : public System::Windows::Forms::Form
	{
	public:
		Changestr(String^ filename)	//Передаём название файла
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->filename = filename;	//Инициализируем
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Changestr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ filename;	
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Number;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::MaskedTextBox^ price1;
	private: System::Windows::Forms::MaskedTextBox^ place1;
	private: System::Windows::Forms::TextBox^ Point1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ Number1;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Number = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->price1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->place1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Point1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Number1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(24, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 33);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Цена билета:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(24, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 33);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Кол-во мест:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(24, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 33);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Время отправления:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(24, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 33);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Дата отпрвавления:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(24, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 33);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Пункт назначения:";
			// 
			// Number
			// 
			this->Number->AutoSize = true;
			this->Number->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Number->ForeColor = System::Drawing::Color::White;
			this->Number->Location = System::Drawing::Point(24, 44);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(186, 33);
			this->Number->TabIndex = 7;
			this->Number->Text = L"Номер рейса:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(97, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Изменение строки";
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
			this->button1->Location = System::Drawing::Point(158, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 48);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Changestr::button1_Click);
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
			this->dateTimePicker2->Location = System::Drawing::Point(314, 244);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker2->TabIndex = 20;
			this->dateTimePicker2->Value = System::DateTime(2023, 6, 6, 0, 0, 0, 0);
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
			this->dateTimePicker1->Location = System::Drawing::Point(314, 191);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker1->TabIndex = 19;
			this->dateTimePicker1->Value = System::DateTime(2020, 1, 1, 16, 46, 0, 0);
			// 
			// price1
			// 
			this->price1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->price1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->price1->ForeColor = System::Drawing::Color::White;
			this->price1->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Insert;
			this->price1->Location = System::Drawing::Point(314, 349);
			this->price1->Mask = L"00000";
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(136, 23);
			this->price1->TabIndex = 18;
			// 
			// place1
			// 
			this->place1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->place1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->place1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->place1->ForeColor = System::Drawing::Color::White;
			this->place1->Location = System::Drawing::Point(314, 297);
			this->place1->Mask = L"00000";
			this->place1->Name = L"place1";
			this->place1->Size = System::Drawing::Size(136, 23);
			this->place1->TabIndex = 17;
			this->place1->ValidatingType = System::Int32::typeid;
			// 
			// Point1
			// 
			this->Point1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Point1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Point1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Point1->ForeColor = System::Drawing::Color::White;
			this->Point1->Location = System::Drawing::Point(314, 145);
			this->Point1->MaxLength = 16;
			this->Point1->Name = L"Point1";
			this->Point1->Size = System::Drawing::Size(136, 23);
			this->Point1->TabIndex = 16;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(314, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(133, 31);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Changestr::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(24, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 33);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Номер рейса:";
			// 
			// Number1
			// 
			this->Number1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Number1->BeepOnError = true;
			this->Number1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Number1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Number1->ForeColor = System::Drawing::Color::White;
			this->Number1->Location = System::Drawing::Point(314, 101);
			this->Number1->Mask = L"00000000";
			this->Number1->Name = L"Number1";
			this->Number1->Size = System::Drawing::Size(136, 23);
			this->Number1->SkipLiterals = false;
			this->Number1->TabIndex = 23;
			// 
			// Changestr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->Number1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->price1);
			this->Controls->Add(this->place1);
			this->Controls->Add(this->Point1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Number);
			this->MaximizeBox = false;
			this->Name = L"Changestr";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение строки";
			this->Load += gcnew System::EventHandler(this, &Changestr::Changestr_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int Count;	//Временная переменная для массива
	private: String^ temp = "\0";	//Временная строка
	private: Void GetNum()	//Получаем номер строки, которую меняем
	{
		array<String^>^ lines = File::ReadAllLines(filename);
		for (Count = 0; Count < lines->Length; Count++)
		{
			array<String^>^ splitted = lines[Count]->Split(L';');
			comboBox1->Items->Add(splitted[0]);
		}
		this->comboBox1->SelectedIndex = 0;
	}
	private: Void Loaddata()	//Достаём элементы строки из файла
	{
		array<String^>^ lines = File::ReadAllLines(filename);
		array<String^>^ splitted = lines[this->comboBox1->SelectedIndex]->Split(L';');	//Достаём строку как индекс элемента
		Number1->Text = splitted[0];
		Point1->Text = splitted[1];
		dateTimePicker1->Text = splitted[2];
		dateTimePicker2->Text = splitted[3];
		place1->Text = splitted[4];
		price1->Text = splitted[5];
	}
	private: System::Void Changestr_Load(System::Object^ sender, System::EventArgs^ e) //Загрузка формы
	{
		GetNum();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) //Меняем индекс и подгружаем элементы
	{
		Loaddata();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //Изменение строки и запись новой строки
	{
		if (MessageBox::Show(L"Вы уверены, что хотите изменить данную строку?", L"Подтвердить", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes && check() == true)
		{
			temp = Number1->Text + ";" + Point1->Text + ";" + dateTimePicker1->Text + ";" + dateTimePicker2->Text + ";" + place1->Text + ";" + price1->Text;
			StreamWriter^ f1 = gcnew StreamWriter("new_str.txt");	//Запись новой строки
			selectnumber = comboBox1->SelectedIndex;	//Передача индекса
			f1->Write(temp);
			f1->Close();
			this->Hide();
		}
	}
	private: bool check()	//Проверка, чтобы не было пустых строк
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
};
}
