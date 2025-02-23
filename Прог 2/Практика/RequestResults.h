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
	/// —водка дл€ RequestResults
	/// </summary>
	public ref class RequestResults : public System::Windows::Forms::Form
	{
	public:
		RequestResults(System::Windows::Forms::Form^ form)
		{
			this->formhome = form;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RequestResults()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formhome;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Point;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Place;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выход¬ћеню«апросаToolStripMenuItem;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Point = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выход¬ћеню«апросаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->dataGridView1->Location = System::Drawing::Point(-2, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1420, 680);
			this->dataGridView1->TabIndex = 2;
			// 
			// Number
			// 
			this->Number->FillWeight = 200;
			this->Number->Frozen = true;
			this->Number->HeaderText = L"Ќомер рейса";
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			this->Number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Number->Width = 200;
			// 
			// Point
			// 
			this->Point->Frozen = true;
			this->Point->HeaderText = L"ѕункт назнчени€";
			this->Point->Name = L"Point";
			this->Point->ReadOnly = true;
			this->Point->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Point->Width = 300;
			// 
			// Date
			// 
			this->Date->HeaderText = L"ƒата отправлени€";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Date->Width = 250;
			// 
			// Time
			// 
			this->Time->HeaderText = L"¬рем€ отправлени€";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Time->Width = 200;
			// 
			// Place
			// 
			this->Place->HeaderText = L" оличество мест";
			this->Place->Name = L"Place";
			this->Place->ReadOnly = true;
			this->Place->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Place->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"÷ена билета";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			this->Price->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Price->Width = 227;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 11.25F));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выход¬ћеню«апросаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1420, 26);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выход¬ћеню«апросаToolStripMenuItem
			// 
			this->выход¬ћеню«апросаToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->выход¬ћеню«апросаToolStripMenuItem->Name = L"выход¬ћеню«апросаToolStripMenuItem";
			this->выход¬ћеню«апросаToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->выход¬ћеню«апросаToolStripMenuItem->Text = L"¬ыход в меню запроса";
			this->выход¬ћеню«апросаToolStripMenuItem->Click += gcnew System::EventHandler(this, &RequestResults::выход¬ћеню«апросаToolStripMenuItem_Click);
			// 
			// RequestResults
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
			this->Name = L"RequestResults";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Database";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &RequestResults::RequestResults_FormClosed);
			this->Load += gcnew System::EventHandler(this, &RequestResults::RequestResults_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int Count;	//ƒл€ переборки массива
	private: System::Void RequestResults_Load(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ lines = File::ReadAllLines("file_request.txt");	//„итаем файл запроса и заносим его в таблицу
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
private: System::Void выход¬ћеню«апросаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();	//«акрываем и отправл€емс€ в меню запроса
	this->formhome->Show();
}
private: System::Void RequestResults_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	File::Delete("file_request.txt");	//ѕри закрытии удал€ем файл, можно и раньше
}
};
}
