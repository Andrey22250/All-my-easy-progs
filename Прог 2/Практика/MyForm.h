#pragma once
#include "MyForm1.h" //Подключаем игровое меню
#include "Database.h" // Подключаем форму с базой данных

namespace Practic {

	using namespace System;  //Подключаем модули
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
		MyForm(void)	//Конструктор
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
	private: System::Windows::Forms::Label^ Title;	//Указание методов
	private: System::Windows::Forms::Button^ Work;
	private: System::Windows::Forms::Button^ Relax;
	private: System::Windows::Forms::Button^ Exit;
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
			this->Title = (gcnew System::Windows::Forms::Label());	//Создание элементов
			this->Work = (gcnew System::Windows::Forms::Button());
			this->Relax = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title
			// Описание элемента, редактируется в свойствах
			this->Title->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Title->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title->ForeColor = System::Drawing::Color::Transparent;
			this->Title->Location = System::Drawing::Point(12, 9);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(1396, 95);
			this->Title->TabIndex = 0;
			this->Title->Text = L"Выберите режим работы программы:";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Work
			// Описание элемента, редактируется в свойствах
			this->Work->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Work->FlatAppearance->BorderSize = 0;
			this->Work->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Work->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Work->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Work->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Work->ForeColor = System::Drawing::Color::White;
			this->Work->Location = System::Drawing::Point(186, 224);
			this->Work->Name = L"Work";
			this->Work->Size = System::Drawing::Size(321, 78);
			this->Work->TabIndex = 1;
			this->Work->Text = L"Работа с базой данных";
			this->Work->UseVisualStyleBackColor = false;
			this->Work->Click += gcnew System::EventHandler(this, &MyForm::Work_Click);
			// 
			// Relax
			// Описание элемента, редактируется в свойствах
			this->Relax->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Relax->FlatAppearance->BorderSize = 0;
			this->Relax->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Relax->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Relax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Relax->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Relax->ForeColor = System::Drawing::Color::White;
			this->Relax->Location = System::Drawing::Point(895, 224);
			this->Relax->Name = L"Relax";
			this->Relax->Size = System::Drawing::Size(318, 78);
			this->Relax->TabIndex = 2;
			this->Relax->Text = L"Отдых от работы";
			this->Relax->UseVisualStyleBackColor = false;
			this->Relax->Click += gcnew System::EventHandler(this, &MyForm::Relax_Click);
			// 
			// Exit
			// Описание элемента, редактируется в свойствах
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Location = System::Drawing::Point(544, 488);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(321, 78);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход из программы";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// MyForm
			// Описание элемента, редактируется в свойствах
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(1420, 707);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Relax);
			this->Controls->Add(this->Work);
			this->Controls->Add(this->Title);
			this->ForeColor = System::Drawing::Color::Black;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главное меню";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)	//Выход из программы
	{
			this->Close();
	}
	private: System::Void Work_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Database^ form4 = gcnew Database(this); //Создаём и выводим форму
		form4->Show();
		MyForm::Hide();
	}
	private: System::Void Relax_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm1^ form2 = gcnew MyForm1(this); //Создаём и выводим форму
		form2->Show();
		MyForm::Hide();
	}
	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) //Закрытие формы
	{
		if (MessageBox::Show(L"Вы уверены, что хотите выйти?", L"Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No)
			e->Cancel = true;
	}
};
}