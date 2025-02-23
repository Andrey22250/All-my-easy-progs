#pragma once
#include "RequestResults.h"

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Request(String^ filename)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->filename = filename;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ filename;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::MaskedTextBox^ price1;
	private: System::Windows::Forms::MaskedTextBox^ place1;
	private: System::Windows::Forms::TextBox^ Point1;
	private: System::Windows::Forms::MaskedTextBox^ Number1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Number;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBoxNum;
	private: System::Windows::Forms::CheckBox^ checkBoxPoint;
	private: System::Windows::Forms::CheckBox^ checkBoxDate;
	private: System::Windows::Forms::CheckBox^ checkBoxTime;
	private: System::Windows::Forms::CheckBox^ checkBoxPlace;
	private: System::Windows::Forms::CheckBox^ checkBoxPrice;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->price1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->place1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Point1 = (gcnew System::Windows::Forms::TextBox());
			this->Number1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Number = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBoxNum = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPoint = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDate = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTime = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPlace = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPrice = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(168, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 42);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Request::button1_Click);
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
			this->dateTimePicker2->Enabled = false;
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(318, 244);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker2->TabIndex = 28;
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
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(318, 189);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(136, 30);
			this->dateTimePicker1->TabIndex = 27;
			this->dateTimePicker1->Value = System::DateTime(2020, 1, 1, 16, 46, 0, 0);
			// 
			// price1
			// 
			this->price1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->price1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price1->Enabled = false;
			this->price1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->price1->ForeColor = System::Drawing::Color::White;
			this->price1->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Insert;
			this->price1->Location = System::Drawing::Point(318, 346);
			this->price1->Mask = L"00000";
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(136, 23);
			this->price1->TabIndex = 26;
			// 
			// place1
			// 
			this->place1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->place1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->place1->Enabled = false;
			this->place1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->place1->ForeColor = System::Drawing::Color::White;
			this->place1->Location = System::Drawing::Point(318, 294);
			this->place1->Mask = L"00000";
			this->place1->Name = L"place1";
			this->place1->Size = System::Drawing::Size(136, 23);
			this->place1->TabIndex = 25;
			this->place1->ValidatingType = System::Int32::typeid;
			// 
			// Point1
			// 
			this->Point1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Point1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Point1->Enabled = false;
			this->Point1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Point1->ForeColor = System::Drawing::Color::White;
			this->Point1->Location = System::Drawing::Point(318, 132);
			this->Point1->MaxLength = 16;
			this->Point1->Name = L"Point1";
			this->Point1->Size = System::Drawing::Size(136, 23);
			this->Point1->TabIndex = 24;
			// 
			// Number1
			// 
			this->Number1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Number1->BeepOnError = true;
			this->Number1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Number1->Enabled = false;
			this->Number1->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Number1->ForeColor = System::Drawing::Color::White;
			this->Number1->Location = System::Drawing::Point(318, 86);
			this->Number1->Mask = L"00000000";
			this->Number1->Name = L"Number1";
			this->Number1->Size = System::Drawing::Size(136, 23);
			this->Number1->SkipLiterals = false;
			this->Number1->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(30, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 33);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Цена билета:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(30, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 33);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Кол-во мест:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(30, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 33);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Время отправления:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(30, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 33);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Дата отпрвавления:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(30, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 33);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Пункт назначения:";
			// 
			// Number
			// 
			this->Number->AutoSize = true;
			this->Number->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Number->ForeColor = System::Drawing::Color::White;
			this->Number->Location = System::Drawing::Point(30, 83);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(186, 33);
			this->Number->TabIndex = 17;
			this->Number->Text = L"Номер рейса:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(189, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 35);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Запрос";
			// 
			// checkBoxNum
			// 
			this->checkBoxNum->AutoSize = true;
			this->checkBoxNum->Location = System::Drawing::Point(12, 95);
			this->checkBoxNum->Name = L"checkBoxNum";
			this->checkBoxNum->Size = System::Drawing::Size(15, 14);
			this->checkBoxNum->TabIndex = 30;
			this->checkBoxNum->UseVisualStyleBackColor = true;
			this->checkBoxNum->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxNum_CheckedChanged);
			// 
			// checkBoxPoint
			// 
			this->checkBoxPoint->AutoSize = true;
			this->checkBoxPoint->Location = System::Drawing::Point(12, 147);
			this->checkBoxPoint->Name = L"checkBoxPoint";
			this->checkBoxPoint->Size = System::Drawing::Size(15, 14);
			this->checkBoxPoint->TabIndex = 31;
			this->checkBoxPoint->UseVisualStyleBackColor = true;
			this->checkBoxPoint->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxPoint_CheckedChanged);
			// 
			// checkBoxDate
			// 
			this->checkBoxDate->AutoSize = true;
			this->checkBoxDate->Location = System::Drawing::Point(12, 205);
			this->checkBoxDate->Name = L"checkBoxDate";
			this->checkBoxDate->Size = System::Drawing::Size(15, 14);
			this->checkBoxDate->TabIndex = 32;
			this->checkBoxDate->UseVisualStyleBackColor = true;
			this->checkBoxDate->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxDate_CheckedChanged);
			// 
			// checkBoxTime
			// 
			this->checkBoxTime->AutoSize = true;
			this->checkBoxTime->Location = System::Drawing::Point(12, 259);
			this->checkBoxTime->Name = L"checkBoxTime";
			this->checkBoxTime->Size = System::Drawing::Size(15, 14);
			this->checkBoxTime->TabIndex = 33;
			this->checkBoxTime->UseVisualStyleBackColor = true;
			this->checkBoxTime->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxTime_CheckedChanged);
			// 
			// checkBoxPlace
			// 
			this->checkBoxPlace->AutoSize = true;
			this->checkBoxPlace->Location = System::Drawing::Point(12, 309);
			this->checkBoxPlace->Name = L"checkBoxPlace";
			this->checkBoxPlace->Size = System::Drawing::Size(15, 14);
			this->checkBoxPlace->TabIndex = 34;
			this->checkBoxPlace->UseVisualStyleBackColor = true;
			this->checkBoxPlace->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxPlace_CheckedChanged);
			// 
			// checkBoxPrice
			// 
			this->checkBoxPrice->AutoSize = true;
			this->checkBoxPrice->Location = System::Drawing::Point(12, 361);
			this->checkBoxPrice->Name = L"checkBoxPrice";
			this->checkBoxPrice->Size = System::Drawing::Size(15, 14);
			this->checkBoxPrice->TabIndex = 35;
			this->checkBoxPrice->UseVisualStyleBackColor = true;
			this->checkBoxPrice->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBoxPrice_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(451, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 34);
			this->label2->TabIndex = 36;
			this->label2->Text = L"<=";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(451, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 34);
			this->label8->TabIndex = 37;
			this->label8->Text = L"<=";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(451, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 34);
			this->label9->TabIndex = 38;
			this->label9->Text = L"<=";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(460, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 34);
			this->label10->TabIndex = 39;
			this->label10->Text = L"=";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(460, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 34);
			this->label11->TabIndex = 40;
			this->label11->Text = L"=";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(460, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 34);
			this->label12->TabIndex = 41;
			this->label12->Text = L"=";
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBoxPrice);
			this->Controls->Add(this->checkBoxPlace);
			this->Controls->Add(this->checkBoxTime);
			this->Controls->Add(this->checkBoxDate);
			this->Controls->Add(this->checkBoxPoint);
			this->Controls->Add(this->checkBoxNum);
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
			this->Name = L"Request";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление строки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int Count = 0;	//Для передорки массива
	private: array<String^>^ splitted;	//Указание строки для разбиения
	private: array<int>^ Numbers;	//Массив с флажками для строк
	private: array<String^>^ time1;	//Для перевода времени из файла
	private: int time = 0;	//Время из файла
	private: int time11 = 0;	//Время из формы
	private: array<String^>^ time121;	//Для перевода времени из формы
	private: System::Void checkBoxNum_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //Переключатели элементов
	{
	if (Number1->Enabled == 0)
		Number1->Enabled += 1;
	else
		Number1->Enabled -= 1;
	}
	private: System::Void checkBoxPoint_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Point1->Enabled == 0)
		Point1->Enabled += 1;
	else
		Point1->Enabled -= 1;
	}
	private: System::Void checkBoxDate_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (dateTimePicker1->Enabled == 0)
		dateTimePicker1->Enabled += 1;
	else
		dateTimePicker1->Enabled -= 1;
	}
	private: System::Void checkBoxTime_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (dateTimePicker2->Enabled == 0)
		dateTimePicker2->Enabled += 1;
	else
		dateTimePicker2->Enabled -= 1;
	}
	private: System::Void checkBoxPlace_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (place1->Enabled == 0)
		place1->Enabled += 1;
	else
		place1->Enabled -= 1;
	}
	private: System::Void checkBoxPrice_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (price1->Enabled == 0)
		price1->Enabled += 1;
	else
		price1->Enabled -= 1;
	}
	private: Void Request1()	//Сам запрос
	{
		String^ time12 = dateTimePicker2->Value.ToLongTimeString();	//Перевод времени из формы
		array<String^>^ time121 = time12->Split(L':');
		array<String^>^ lines = File::ReadAllLines(filename);
		for (Count = 0; Count < lines->Length; Count++)	//Записываем номера рейсов
		{
			Numbers = gcnew array<Int32>(lines->Length);
		}
		time11 = Convert::ToInt32(time121[0])*60 + Convert::ToInt32(time121[1]);	//Получаем время в минутах
		for (Count = 0; Count < lines->Length; Count++)
		{
			array<String^>^ splitted = lines[Count]->Split(L';');
			array<String^>^ time1 = splitted[3]->Split(L':');
			time = Convert::ToInt32(time1[0]) * 60 + Convert::ToInt32(time1[1]);
			Numbers[Count] = -1;
			if (Number1->Enabled == true)	//Проверяем, если элемент соответствует - записываем его номер, иначе - пишем ноль, что элемент не подошёл, чтобы избежать включения выключенного
			{
				if (Number1->Text == splitted[0] && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
			if(Point1->Enabled == true)
			{
				if (Point1->Text == splitted[1] && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
			if (dateTimePicker1->Enabled == true)
			{
				if (dateTimePicker1->Text == splitted[2] && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
			if (dateTimePicker2->Enabled == true)
			{
				if (time11 >= time && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
			if (place1->Enabled == true)
			{
				if (Convert::ToInt32(place1->Text) >= Convert::ToInt32(splitted[4]) && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
			if (price1->Enabled == true)
			{
				if (Convert::ToInt32(price1->Text) >= Convert::ToInt32(splitted[5]) && Numbers[Count] != 0)
					Numbers[Count] = Convert::ToInt32(splitted[0]);
				else
					Numbers[Count] = 0;
			}
		}
		StreamWriter^ f1 = gcnew StreamWriter("file_request.txt");	//Записываем файл запроса
		for (Count = 0; Count < lines->Length; Count++)
		{
			if (Numbers[Count] > 0)
				f1->Write(lines[Count] + "\n");
		}
		f1->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Number1->Enabled == true || Point1->Enabled == true || dateTimePicker1->Enabled == true || dateTimePicker2->Enabled == true || place1->Enabled == true || price1->Enabled == true)
	{
		Request1();	//Отправляем всё в новую форму таблицы
		this->Hide();
		RequestResults^ form = gcnew RequestResults(this);
		form->ShowDialog();
	}
}
};
}
