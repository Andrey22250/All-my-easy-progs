#pragma once
#include "admin.h"	//Подключаем формы для работы
#include "AddStr.h"
#include "Changestr.h"
#include "Deletestr.h"
#include "Request.h"

namespace Practic {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;	//Подключаем библиотеку для работы с файлами

	/// <summary>
	/// Сводка для Database
	/// </summary>
	public ref class Database : public System::Windows::Forms::Form
	{
	public:
		Database(System::Windows::Forms::Form^ form4)	//Конструктор с возвращением в главное меню
		{
			formback = form4;	//Переменная в форме
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Database()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formback;	//Обозначение переменной формы
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ редактированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ запросToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходВМенюToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьБазуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ режимАдминистратораToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Point;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Place;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->редактированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьБазуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->режимАдминистратораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходВМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Point = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 11.25F));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->редактированиеToolStripMenuItem,
					this->режимАдминистратораToolStripMenuItem, this->запросToolStripMenuItem, this->выходВМенюToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1420, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// редактированиеToolStripMenuItem
			// 
			this->редактированиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавитьСтрокуToolStripMenuItem,
					this->редактироватьСтрокуToolStripMenuItem, this->удалитьСтрокуToolStripMenuItem, this->загрузитьБазуToolStripMenuItem
			});
			this->редактированиеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 11.25F));
			this->редактированиеToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->редактированиеToolStripMenuItem->Name = L"редактированиеToolStripMenuItem";
			this->редактированиеToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->редактированиеToolStripMenuItem->Text = L"Редактирование";
			this->редактированиеToolStripMenuItem->DropDownOpening += gcnew System::EventHandler(this, &Database::редактированиеToolStripMenuItem_DropDownOpening);
			// 
			// добавитьСтрокуToolStripMenuItem
			// 
			this->добавитьСтрокуToolStripMenuItem->Enabled = false;
			this->добавитьСтрокуToolStripMenuItem->Name = L"добавитьСтрокуToolStripMenuItem";
			this->добавитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->добавитьСтрокуToolStripMenuItem->Text = L"Добавить строку";
			this->добавитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::добавитьСтрокуToolStripMenuItem_Click);
			// 
			// редактироватьСтрокуToolStripMenuItem
			// 
			this->редактироватьСтрокуToolStripMenuItem->Enabled = false;
			this->редактироватьСтрокуToolStripMenuItem->Name = L"редактироватьСтрокуToolStripMenuItem";
			this->редактироватьСтрокуToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->редактироватьСтрокуToolStripMenuItem->Text = L"Редактировать строку";
			this->редактироватьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::редактироватьСтрокуToolStripMenuItem_Click);
			// 
			// удалитьСтрокуToolStripMenuItem
			// 
			this->удалитьСтрокуToolStripMenuItem->Enabled = false;
			this->удалитьСтрокуToolStripMenuItem->Name = L"удалитьСтрокуToolStripMenuItem";
			this->удалитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->удалитьСтрокуToolStripMenuItem->Text = L"Удалить строку";
			this->удалитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::удалитьСтрокуToolStripMenuItem_Click);
			// 
			// загрузитьБазуToolStripMenuItem
			// 
			this->загрузитьБазуToolStripMenuItem->Name = L"загрузитьБазуToolStripMenuItem";
			this->загрузитьБазуToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->загрузитьБазуToolStripMenuItem->Text = L"Загрузить базу";
			this->загрузитьБазуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::загрузитьБазуToolStripMenuItem_Click);
			// 
			// режимАдминистратораToolStripMenuItem
			// 
			this->режимАдминистратораToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->режимАдминистратораToolStripMenuItem->Name = L"режимАдминистратораToolStripMenuItem";
			this->режимАдминистратораToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->режимАдминистратораToolStripMenuItem->Text = L"Режим администратора";
			this->режимАдминистратораToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::режимАдминистратораToolStripMenuItem_Click);
			// 
			// запросToolStripMenuItem
			// 
			this->запросToolStripMenuItem->Enabled = false;
			this->запросToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->запросToolStripMenuItem->Name = L"запросToolStripMenuItem";
			this->запросToolStripMenuItem->Size = System::Drawing::Size(71, 22);
			this->запросToolStripMenuItem->Text = L"Запрос";
			this->запросToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::запросToolStripMenuItem_Click);
			// 
			// выходВМенюToolStripMenuItem
			// 
			this->выходВМенюToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->выходВМенюToolStripMenuItem->Name = L"выходВМенюToolStripMenuItem";
			this->выходВМенюToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->выходВМенюToolStripMenuItem->Text = L"Выход в меню";
			this->выходВМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::выходВМенюToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Number,
					this->Point, this->Date, this->Time, this->Place, this->Price
			});
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dataGridView1->Location = System::Drawing::Point(0, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1420, 680);
			this->dataGridView1->TabIndex = 1;
			// 
			// Number
			// 
			this->Number->FillWeight = 200;
			this->Number->Frozen = true;
			this->Number->HeaderText = L"Номер рейса";
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			this->Number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Number->Width = 200;
			// 
			// Point
			// 
			this->Point->Frozen = true;
			this->Point->HeaderText = L"Пункт назнчения";
			this->Point->Name = L"Point";
			this->Point->ReadOnly = true;
			this->Point->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Point->Width = 300;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Дата отправления";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Date->Width = 250;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Время отправления";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Time->Width = 200;
			// 
			// Place
			// 
			this->Place->HeaderText = L"Количество мест";
			this->Place->Name = L"Place";
			this->Place->ReadOnly = true;
			this->Place->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Place->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Цена билета";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			this->Price->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Price->Width = 227;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Database
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(1420, 707);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Database";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Database";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Database::Database_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool FirstLaunch = true; // переменная логическая для подгрузки
	private: int Count = 0;	//Для массива
	private: String^ filename = ""; //Переменная, куда запишем название файла
	private: System::Void выходВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	//Выход в главное меню
		this->Close();
	}
	private: System::Void Database_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->formback->Show(); //Возврат в главное меню
	}
	private: System::Void добавитьСтрокуToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)	//Добавление строки
	{
		AddStr^ form6 = gcnew AddStr();	//Открытие формы
		form6->ShowDialog();	//ShowDialog - тормозит основную форму и не позволяет взаимодействовать с родительской формой, только с дочерней
		addstr(); //Функция добавления
		Load_file();	//Перезагрузка и чтение файла
	}
	private: System::Void редактироватьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)	//Редактирование
	{
		Changestr^ form7 = gcnew Changestr(this->filename);	//Открытие и передеча названия файла
		form7->ShowDialog();
		changestr();	//Функция редактирования
		Load_file();
	}
	private: Void changestr() {
		{
			if (File::Exists("new_str.txt") == false)	//Проверка на существование новой строки
				return;
			else
			{
				array<String^>^ line = File::ReadAllLines("new_str.txt");	//Читаем новую строку - можно и в одну записать
				StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt");	//Записываем новый временный файл
				array<String^>^ lines = File::ReadAllLines(filename);	//Читаем изначальный файл
				for (Count = 0; Count < lines->Length; Count++)	//Заполнение Временного файла
				{
					if (selectnumber != Count)
						f1->Write(lines[Count] + "\n");
					else
						f1->Write(line[0] + "\n");
				}
				f1->Close();
				array<String^>^ lines1 = File::ReadAllLines("file_temp.txt");	//Чтение временного файла и перепись в основной
				StreamWriter^ f2 = gcnew StreamWriter(filename);
				for (Count = 0; Count < lines1->Length; Count++)
					f2->Write(lines1[Count] + "\n");
				f2->Close();
				File::Delete("file_temp.txt");	//Удаление файла
				File::Delete("new_str.txt");
			}
		}
	}
	private: System::Void удалитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Deletestr^ form8 = gcnew Deletestr(this->filename); //Открытие и передеча названия файла
		form8->ShowDialog();
		deletestr();
		Load_file();
	}
	private: Void deletestr() {
		if (selectednumber != -1)	//Если выбран элемент
		{
			StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt");	//Также, как и в изменении
			array<String^>^ lines = File::ReadAllLines(filename);
			for (Count = 0; Count < lines->Length; Count++)
			{
				if (selectednumber != Count)
					f1->Write(lines[Count] + "\n");
			}
			f1->Close();
			array<String^>^ lines1 = File::ReadAllLines("file_temp.txt");
			StreamWriter^ f2 = gcnew StreamWriter(filename);
			if (lines1->Length != 0)
				for (Count = 0; Count < lines1->Length; Count++)
					f2->Write(lines1[Count] + "\n");
			f2->Close();
			File::Delete("file_temp.txt");
		}
	}
	private: System::Void загрузитьБазуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{		
		openFileDialog1->Filter = "txt файлы (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)	//Запуск проводника и файла
		{
			if (FirstLaunch == false)
			{
				dataGridView1->Rows->Clear();	//Чистим таблицу
			}
			FirstLaunch = false;	//Убираем параметр, что это первый запуск
			filename = openFileDialog1->FileName;	//Записываем в переменную название файла
			array<String^>^ lines = File::ReadAllLines(filename);	//Читаем и переписываем в таблицу
			for (Count = 0; Count < lines->Length; Count++)
			{
				DataGridViewRow^ row = gcnew DataGridViewRow(); //Создаём таблицу
				row->CreateCells(dataGridView1);	
				array<String^>^ splitted = lines[Count]->Split(L';');
				for (int j = 0; j < splitted->Length; j++)
					row->Cells[j]->Value = splitted[j];
				dataGridView1->Rows->Add(row);
			}
		}
	}
	private: System::Void режимАдминистратораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (flagbase == 0)	//Реализовано глобальной переменной из этой формы
		{
			admin^ form5 = gcnew admin(this); //Создаём и выводим форму
			form5->Show();
		}
	}
	private: System::Void запросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //Запрос
	{
		Request^ form9 = gcnew Request(this->filename);	//Создание формы запроса
		form9->ShowDialog();
	}
	private: Void Checkpassword() //Проверка, вошли ли в режим администратора - реализован так, т.к. не не знал про ShowDialog()
	{
		if (flagbase == 1 && FirstLaunch == false && Count > 0)
		{
			удалитьСтрокуToolStripMenuItem->Enabled = true; //Активация элемента
			добавитьСтрокуToolStripMenuItem->Enabled = true;
			редактироватьСтрокуToolStripMenuItem->Enabled = true;
			запросToolStripMenuItem->Enabled = true;	
		}
		else if (flagbase == 1 && FirstLaunch == false && Count == 0)	//Если база пуста
		{
			добавитьСтрокуToolStripMenuItem->Enabled = true;
		}
	}
	private: System::Void редактированиеToolStripMenuItem_DropDownOpening(System::Object^ sender, System::EventArgs^ e) //Проверка пароля
	{
		Checkpassword();
	}
	private: Void Load_file() //Перезагрузка файла
	{
		dataGridView1->Rows->Clear();	//См загрузку базы
		array<String^>^ lines = File::ReadAllLines(filename);	//Т.к. имя файла уже записано
		for (Count = 0; Count < lines->Length; Count++)
		{
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);
			array<String^>^ splitted = lines[Count]->Split(L';');
			for (int j = 0; j < splitted->Length; j++)
				row->Cells[j]->Value = splitted[j];
			dataGridView1->Rows->Add(row);
		}
	}
	private: Void addstr()	//Добавление строки
	{
		if (File::Exists("new_str.txt") == false)
			return;
		else
		{
			array<String^>^ line = File::ReadAllLines("new_str.txt"); //Читаем новую строку - можно и в одну записать
			StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt"); //Записываем новый временный файл
			array<String^>^ lines = File::ReadAllLines(filename); //Читаем изначальный файл
			for (Count = 0; Count < lines->Length; Count++)	//Запись изначального файла
				f1->Write(lines[Count] + "\n");
			f1->Write(line[0]);	//Запись новой строки
			f1->Close();
			array<String^>^ lines1 = File::ReadAllLines("file_temp.txt");	//Перепись в начальную базу данных
			StreamWriter^ f2 = gcnew StreamWriter(filename);
			for (Count = 0; Count < lines1->Length; Count++)
				f2->Write(lines1[Count] + "\n");
			f2->Close();
			File::Delete("file_temp.txt");	//Удаление временных файлов
			File::Delete("new_str.txt");
		}
	}
};
}
