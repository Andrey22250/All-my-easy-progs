#pragma once
#include "admin.h"	//���������� ����� ��� ������
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
	using namespace System::IO;	//���������� ���������� ��� ������ � �������

	/// <summary>
	/// ������ ��� Database
	/// </summary>
	public ref class Database : public System::Windows::Forms::Form
	{
	public:
		Database(System::Windows::Forms::Form^ form4)	//����������� � ������������ � ������� ����
		{
			formback = form4;	//���������� � �����
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Database()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formback;	//����������� ���������� �����
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
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
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->��������������ToolStripMenuItem,
					this->�������������������ToolStripMenuItem, this->������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1420, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������������ToolStripMenuItem,
					this->�������������������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->�������������ToolStripMenuItem
			});
			this->��������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 11.25F));
			this->��������������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������������ToolStripMenuItem->Text = L"��������������";
			this->��������������ToolStripMenuItem->DropDownOpening += gcnew System::EventHandler(this, &Database::��������������ToolStripMenuItem_DropDownOpening);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Enabled = false;
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::��������������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Enabled = false;
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->�������������������ToolStripMenuItem->Text = L"������������� ������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::�������������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Enabled = false;
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::�������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->�������������ToolStripMenuItem->Text = L"��������� ����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::�������������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->�������������������ToolStripMenuItem->Text = L"����� ��������������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::�������������������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Enabled = false;
			this->������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(71, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->����������ToolStripMenuItem->Text = L"����� � ����";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Database::����������ToolStripMenuItem_Click);
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
			this->Number->HeaderText = L"����� �����";
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			this->Number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Number->Width = 200;
			// 
			// Point
			// 
			this->Point->Frozen = true;
			this->Point->HeaderText = L"����� ���������";
			this->Point->Name = L"Point";
			this->Point->ReadOnly = true;
			this->Point->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Point->Width = 300;
			// 
			// Date
			// 
			this->Date->HeaderText = L"���� �����������";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Date->Width = 250;
			// 
			// Time
			// 
			this->Time->HeaderText = L"����� �����������";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Time->Width = 200;
			// 
			// Place
			// 
			this->Place->HeaderText = L"���������� ����";
			this->Place->Name = L"Place";
			this->Place->ReadOnly = true;
			this->Place->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Place->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"���� ������";
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
	private: bool FirstLaunch = true; // ���������� ���������� ��� ���������
	private: int Count = 0;	//��� �������
	private: String^ filename = ""; //����������, ���� ������� �������� �����
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {	//����� � ������� ����
		this->Close();
	}
	private: System::Void Database_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->formback->Show(); //������� � ������� ����
	}
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)	//���������� ������
	{
		AddStr^ form6 = gcnew AddStr();	//�������� �����
		form6->ShowDialog();	//ShowDialog - �������� �������� ����� � �� ��������� ����������������� � ������������ ������, ������ � ��������
		addstr(); //������� ����������
		Load_file();	//������������ � ������ �����
	}
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)	//��������������
	{
		Changestr^ form7 = gcnew Changestr(this->filename);	//�������� � �������� �������� �����
		form7->ShowDialog();
		changestr();	//������� ��������������
		Load_file();
	}
	private: Void changestr() {
		{
			if (File::Exists("new_str.txt") == false)	//�������� �� ������������� ����� ������
				return;
			else
			{
				array<String^>^ line = File::ReadAllLines("new_str.txt");	//������ ����� ������ - ����� � � ���� ��������
				StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt");	//���������� ����� ��������� ����
				array<String^>^ lines = File::ReadAllLines(filename);	//������ ����������� ����
				for (Count = 0; Count < lines->Length; Count++)	//���������� ���������� �����
				{
					if (selectnumber != Count)
						f1->Write(lines[Count] + "\n");
					else
						f1->Write(line[0] + "\n");
				}
				f1->Close();
				array<String^>^ lines1 = File::ReadAllLines("file_temp.txt");	//������ ���������� ����� � �������� � ��������
				StreamWriter^ f2 = gcnew StreamWriter(filename);
				for (Count = 0; Count < lines1->Length; Count++)
					f2->Write(lines1[Count] + "\n");
				f2->Close();
				File::Delete("file_temp.txt");	//�������� �����
				File::Delete("new_str.txt");
			}
		}
	}
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Deletestr^ form8 = gcnew Deletestr(this->filename); //�������� � �������� �������� �����
		form8->ShowDialog();
		deletestr();
		Load_file();
	}
	private: Void deletestr() {
		if (selectednumber != -1)	//���� ������ �������
		{
			StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt");	//�����, ��� � � ���������
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
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{		
		openFileDialog1->Filter = "txt ����� (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)	//������ ���������� � �����
		{
			if (FirstLaunch == false)
			{
				dataGridView1->Rows->Clear();	//������ �������
			}
			FirstLaunch = false;	//������� ��������, ��� ��� ������ ������
			filename = openFileDialog1->FileName;	//���������� � ���������� �������� �����
			array<String^>^ lines = File::ReadAllLines(filename);	//������ � ������������ � �������
			for (Count = 0; Count < lines->Length; Count++)
			{
				DataGridViewRow^ row = gcnew DataGridViewRow(); //������ �������
				row->CreateCells(dataGridView1);	
				array<String^>^ splitted = lines[Count]->Split(L';');
				for (int j = 0; j < splitted->Length; j++)
					row->Cells[j]->Value = splitted[j];
				dataGridView1->Rows->Add(row);
			}
		}
	}
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (flagbase == 0)	//����������� ���������� ���������� �� ���� �����
		{
			admin^ form5 = gcnew admin(this); //������ � ������� �����
			form5->Show();
		}
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //������
	{
		Request^ form9 = gcnew Request(this->filename);	//�������� ����� �������
		form9->ShowDialog();
	}
	private: Void Checkpassword() //��������, ����� �� � ����� �������������� - ���������� ���, �.�. �� �� ���� ��� ShowDialog()
	{
		if (flagbase == 1 && FirstLaunch == false && Count > 0)
		{
			�������������ToolStripMenuItem->Enabled = true; //��������� ��������
			��������������ToolStripMenuItem->Enabled = true;
			�������������������ToolStripMenuItem->Enabled = true;
			������ToolStripMenuItem->Enabled = true;	
		}
		else if (flagbase == 1 && FirstLaunch == false && Count == 0)	//���� ���� �����
		{
			��������������ToolStripMenuItem->Enabled = true;
		}
	}
	private: System::Void ��������������ToolStripMenuItem_DropDownOpening(System::Object^ sender, System::EventArgs^ e) //�������� ������
	{
		Checkpassword();
	}
	private: Void Load_file() //������������ �����
	{
		dataGridView1->Rows->Clear();	//�� �������� ����
		array<String^>^ lines = File::ReadAllLines(filename);	//�.�. ��� ����� ��� ��������
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
	private: Void addstr()	//���������� ������
	{
		if (File::Exists("new_str.txt") == false)
			return;
		else
		{
			array<String^>^ line = File::ReadAllLines("new_str.txt"); //������ ����� ������ - ����� � � ���� ��������
			StreamWriter^ f1 = gcnew StreamWriter("file_temp.txt"); //���������� ����� ��������� ����
			array<String^>^ lines = File::ReadAllLines(filename); //������ ����������� ����
			for (Count = 0; Count < lines->Length; Count++)	//������ ������������ �����
				f1->Write(lines[Count] + "\n");
			f1->Write(line[0]);	//������ ����� ������
			f1->Close();
			array<String^>^ lines1 = File::ReadAllLines("file_temp.txt");	//�������� � ��������� ���� ������
			StreamWriter^ f2 = gcnew StreamWriter(filename);
			for (Count = 0; Count < lines1->Length; Count++)
				f2->Write(lines1[Count] + "\n");
			f2->Close();
			File::Delete("file_temp.txt");	//�������� ��������� ������
			File::Delete("new_str.txt");
		}
	}
};
}
