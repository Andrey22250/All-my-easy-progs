#pragma once
extern int flagbase;	//Глобальная переменная, строка из cpp - bool flagclose = false;

namespace Practic {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для admin
	/// </summary>

	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(System::Windows::Forms::Form^ form6)
		{
			formback1 = form6;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formback1;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ Passwordfield;
	private: System::Windows::Forms::Button^ Passwordcheck;

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
			this->Password = (gcnew System::Windows::Forms::Label());
			this->Passwordfield = (gcnew System::Windows::Forms::TextBox());
			this->Passwordcheck = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Password->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Location = System::Drawing::Point(41, 70);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(111, 29);
			this->Password->TabIndex = 0;
			this->Password->Text = L"Пароль:";
			this->Password->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Passwordfield
			// 
			this->Passwordfield->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Passwordfield->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Passwordfield->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 18, System::Drawing::FontStyle::Bold));
			this->Passwordfield->ForeColor = System::Drawing::Color::White;
			this->Passwordfield->Location = System::Drawing::Point(158, 70);
			this->Passwordfield->MaxLength = 16;
			this->Passwordfield->Name = L"Passwordfield";
			this->Passwordfield->PasswordChar = '*';
			this->Passwordfield->Size = System::Drawing::Size(232, 29);
			this->Passwordfield->TabIndex = 1;
			this->Passwordfield->UseSystemPasswordChar = true;
			// 
			// Passwordcheck
			// 
			this->Passwordcheck->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Passwordcheck->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Passwordcheck->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Passwordcheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Passwordcheck->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 8.25F));
			this->Passwordcheck->ForeColor = System::Drawing::Color::White;
			this->Passwordcheck->Location = System::Drawing::Point(345, 161);
			this->Passwordcheck->Name = L"Passwordcheck";
			this->Passwordcheck->Size = System::Drawing::Size(75, 23);
			this->Passwordcheck->TabIndex = 2;
			this->Passwordcheck->Text = L"Принять";
			this->Passwordcheck->UseVisualStyleBackColor = false;
			this->Passwordcheck->Click += gcnew System::EventHandler(this, &admin::Passwordcheck_Click);
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(453, 196);
			this->Controls->Add(this->Passwordcheck);
			this->Controls->Add(this->Passwordfield);
			this->Controls->Add(this->Password);
			this->MaximizeBox = false;
			this->Name = L"admin";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Passwordcheck_Click(System::Object^ sender, System::EventArgs^ e) // Проверка пароля, лучше сделать зашифрованно в другом месте
	{
		if (Passwordfield->Text == "24071977F_x")
		{
			flagbase = 1;
			this->Close();
		}
		else
		{
			MessageBox::Show(L"Ошибка, введён неверный пароль", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Passwordfield->Text=L"";
		}
	}
};
}
