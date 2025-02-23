#pragma once
#include "Games.h"

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(System::Windows::Forms::Form^ hf) :home_form(hf)	//����������� � �������� �������� �� ������� �����
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//

		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ home_form;	//�������� �������� ��� �������� �� ������� �����
	private: System::Windows::Forms::Label^ Title1;
	private: System::Windows::Forms::Button^ Game1;

	private: System::Windows::Forms::Button^ Game2;

	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ Last_game;





	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title1 = (gcnew System::Windows::Forms::Label());
			this->Game1 = (gcnew System::Windows::Forms::Button());
			this->Game2 = (gcnew System::Windows::Forms::Button());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Last_game = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title1
			// 
			this->Title1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Title1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Title1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title1->ForeColor = System::Drawing::Color::White;
			this->Title1->Location = System::Drawing::Point(12, 9);
			this->Title1->Name = L"Title1";
			this->Title1->Size = System::Drawing::Size(1396, 95);
			this->Title1->TabIndex = 0;
			this->Title1->Text = L"������� �����";
			this->Title1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Game1
			// 
			this->Game1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Game1->FlatAppearance->BorderSize = 0;
			this->Game1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Game1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Game1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Game1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Game1->ForeColor = System::Drawing::Color::White;
			this->Game1->Location = System::Drawing::Point(186, 224);
			this->Game1->Name = L"Game1";
			this->Game1->Size = System::Drawing::Size(321, 78);
			this->Game1->TabIndex = 1;
			this->Game1->Text = L"���� ����";
			this->Game1->UseVisualStyleBackColor = false;
			this->Game1->Click += gcnew System::EventHandler(this, &MyForm1::Game1_Click);
			// 
			// Game2
			// 
			this->Game2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Game2->FlatAppearance->BorderSize = 0;
			this->Game2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Game2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Game2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Game2->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Game2->ForeColor = System::Drawing::Color::White;
			this->Game2->Location = System::Drawing::Point(904, 224);
			this->Game2->Name = L"Game2";
			this->Game2->Size = System::Drawing::Size(321, 78);
			this->Game2->TabIndex = 2;
			this->Game2->Text = L"������";
			this->Game2->UseVisualStyleBackColor = false;
			this->Game2->Click += gcnew System::EventHandler(this, &MyForm1::Game2_Click);
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Return->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Return->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Return->FlatAppearance->BorderSize = 0;
			this->Return->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Return->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Return->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Return->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Return->ForeColor = System::Drawing::Color::White;
			this->Return->Location = System::Drawing::Point(545, 487);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(321, 78);
			this->Return->TabIndex = 3;
			this->Return->Text = L"����� �\r\n������� ����";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &MyForm1::Return_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Last_game
			// 
			this->Last_game->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Last_game->FlatAppearance->BorderSize = 0;
			this->Last_game->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Last_game->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Last_game->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Last_game->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Last_game->ForeColor = System::Drawing::Color::White;
			this->Last_game->Location = System::Drawing::Point(545, 224);
			this->Last_game->Name = L"Last_game";
			this->Last_game->Size = System::Drawing::Size(321, 78);
			this->Last_game->TabIndex = 4;
			this->Last_game->Text = L"��������� �����";
			this->Last_game->UseVisualStyleBackColor = false;
			this->Last_game->Click += gcnew System::EventHandler(this, &MyForm1::Last_game_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(1420, 707);
			this->Controls->Add(this->Last_game);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Game2);
			this->Controls->Add(this->Game1);
			this->Controls->Add(this->Title1);
			this->ForeColor = System::Drawing::Color::Black;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� ������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) //����� � ������� ����
	{
		this->Close();	//��������� ������� �����
	}
	private: System::Void Game1_Click(System::Object^ sender, System::EventArgs^ e) //������ ���������� ������������
	{
		openFileDialog1->Filter = "exe ����� (*.exe)|*.exe";	//������ ������ �� ����
		String^ filename = "";		//����������, ���� ������� �������� �����
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)	//������ ���������� � �����
		{
			filename = openFileDialog1->FileName;	//������ �������� �����
			System::Diagnostics::Process::Start(filename);	//��������� �������
			StreamWriter^ f = gcnew StreamWriter("last_game.txt");	//���������� �������� �������� � ����
			f->Write(filename);
			f->Close();
		}
	}
	private: System::Void Last_game_Click(System::Object^ sender, System::EventArgs^ e)	//������ ��������� ���� ������������
	{
		if (File::Exists("last_game.txt"))	//�������� �� �������������
			{
				StreamReader^ f = File::OpenText("last_game.txt");	//�������� � ������ �����
				String^ filename = f->ReadToEnd();
				if (File::Exists(filename))
					System::Diagnostics::Process::Start(filename);	//������ ����������
				else
					MessageBox::Show(L"�������� ���� ��� ��������� ��������.\n�������� ����� ����.", L"������", MessageBoxButtons::OK, MessageBoxIcon::Error);	//���� ����������
				f->Close();
			}
		else
			MessageBox::Show(L"��������, ��� ������ ������ ������, \n�������� ������ ��������", L"������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void MyForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) //������� �� ������� �����
		{
			this->home_form->Show();	//��������� � ������� ����� � � ��������
		}
	private: System::Void Game2_Click(System::Object^ sender, System::EventArgs^ e) //������ ������
	{
		Games^ form1 = gcnew Games(this); //������ � ������� �����
		form1->Show();	//����� Show ��������� ���� � ��������� ����������������� ����� � ����� ������
		MyForm1::Hide();	//������ ������� �����
}
};
}
