#pragma once

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Games
	/// </summary>
	public ref class Games : public System::Windows::Forms::Form
	{
	public:
		Games(System::Windows::Forms::Form^ form1); //������ ��� ������������ � ������������ ������ �� ���� �����

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Games()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formback;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ GameData;
	private: System::Windows::Forms::Label^ Score;

	private: System::Windows::Forms::GroupBox^ Settings;
	private: System::Windows::Forms::Label^ SpeedLabel;
	private: System::Windows::Forms::NumericUpDown^ SpeedControl;
	private: System::Windows::Forms::Button^ Apply;
	private: System::Windows::Forms::PictureBox^ LimitUp;
	private: System::Windows::Forms::PictureBox^ LimitDown;
	private: System::Windows::Forms::PictureBox^ LimitLeft;
	private: System::Windows::Forms::PictureBox^ LimitRight;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ GameOverLabel;

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
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameData = (gcnew System::Windows::Forms::GroupBox());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->Settings = (gcnew System::Windows::Forms::GroupBox());
			this->Apply = (gcnew System::Windows::Forms::Button());
			this->SpeedControl = (gcnew System::Windows::Forms::NumericUpDown());
			this->SpeedLabel = (gcnew System::Windows::Forms::Label());
			this->LimitUp = (gcnew System::Windows::Forms::PictureBox());
			this->LimitDown = (gcnew System::Windows::Forms::PictureBox());
			this->LimitLeft = (gcnew System::Windows::Forms::PictureBox());
			this->LimitRight = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->GameOverLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->GameData->SuspendLayout();
			this->Settings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedControl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitUp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitRight))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Games::���������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Games::���������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->���������������ToolStripMenuItem->Text = L"���������� � ����";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Games::���������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->�����������ToolStripMenuItem->Text = L"����� �� ����";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Games::�����������ToolStripMenuItem_Click);
			// 
			// GameData
			// 
			this->GameData->Controls->Add(this->Score);
			this->GameData->ForeColor = System::Drawing::Color::White;
			this->GameData->Location = System::Drawing::Point(12, 27);
			this->GameData->Name = L"GameData";
			this->GameData->Size = System::Drawing::Size(142, 51);
			this->GameData->TabIndex = 1;
			this->GameData->TabStop = false;
			this->GameData->Text = L"������ ����";
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Score->Location = System::Drawing::Point(3, 16);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(111, 33);
			this->Score->TabIndex = 0;
			this->Score->Text = L"����: 0";
			// 
			// Settings
			// 
			this->Settings->Controls->Add(this->Apply);
			this->Settings->Controls->Add(this->SpeedControl);
			this->Settings->Controls->Add(this->SpeedLabel);
			this->Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Settings->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Settings->ForeColor = System::Drawing::Color::White;
			this->Settings->Location = System::Drawing::Point(139, 226);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(401, 118);
			this->Settings->TabIndex = 2;
			this->Settings->TabStop = false;
			this->Settings->Text = L"���������";
			this->Settings->Visible = false;
			// 
			// Apply
			// 
			this->Apply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Apply->FlatAppearance->BorderSize = 0;
			this->Apply->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Apply->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Apply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Apply->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Apply->Location = System::Drawing::Point(147, 87);
			this->Apply->Name = L"Apply";
			this->Apply->Size = System::Drawing::Size(101, 25);
			this->Apply->TabIndex = 2;
			this->Apply->Text = L"���������";
			this->Apply->UseVisualStyleBackColor = false;
			this->Apply->Click += gcnew System::EventHandler(this, &Games::Apply_Click);
			// 
			// SpeedControl
			// 
			this->SpeedControl->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 11.25F, System::Drawing::FontStyle::Bold));
			this->SpeedControl->Location = System::Drawing::Point(279, 23);
			this->SpeedControl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->SpeedControl->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SpeedControl->Name = L"SpeedControl";
			this->SpeedControl->Size = System::Drawing::Size(116, 26);
			this->SpeedControl->TabIndex = 1;
			this->SpeedControl->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// SpeedLabel
			// 
			this->SpeedLabel->AutoSize = true;
			this->SpeedLabel->Location = System::Drawing::Point(6, 26);
			this->SpeedLabel->Name = L"SpeedLabel";
			this->SpeedLabel->Size = System::Drawing::Size(267, 23);
			this->SpeedLabel->TabIndex = 0;
			this->SpeedLabel->Text = L"������� �������� ������";
			// 
			// LimitUp
			// 
			this->LimitUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->LimitUp->Location = System::Drawing::Point(0, 79);
			this->LimitUp->Name = L"LimitUp";
			this->LimitUp->Size = System::Drawing::Size(684, 10);
			this->LimitUp->TabIndex = 3;
			this->LimitUp->TabStop = false;
			// 
			// LimitDown
			// 
			this->LimitDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->LimitDown->Location = System::Drawing::Point(0, 648);
			this->LimitDown->Name = L"LimitDown";
			this->LimitDown->Size = System::Drawing::Size(684, 10);
			this->LimitDown->TabIndex = 4;
			this->LimitDown->TabStop = false;
			// 
			// LimitLeft
			// 
			this->LimitLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->LimitLeft->Location = System::Drawing::Point(0, 79);
			this->LimitLeft->Name = L"LimitLeft";
			this->LimitLeft->Size = System::Drawing::Size(10, 579);
			this->LimitLeft->TabIndex = 5;
			this->LimitLeft->TabStop = false;
			// 
			// LimitRight
			// 
			this->LimitRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->LimitRight->Location = System::Drawing::Point(674, 79);
			this->LimitRight->Name = L"LimitRight";
			this->LimitRight->Size = System::Drawing::Size(10, 579);
			this->LimitRight->TabIndex = 6;
			this->LimitRight->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Games::Games_Update);
			// 
			// GameOverLabel
			// 
			this->GameOverLabel->AutoSize = true;
			this->GameOverLabel->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GameOverLabel->ForeColor = System::Drawing::Color::White;
			this->GameOverLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->GameOverLabel->Location = System::Drawing::Point(156, 110);
			this->GameOverLabel->Name = L"GameOverLabel";
			this->GameOverLabel->Size = System::Drawing::Size(357, 84);
			this->GameOverLabel->TabIndex = 7;
			this->GameOverLabel->Text = L"���� ��������!\r\n������������� ����";
			this->GameOverLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->GameOverLabel->Visible = false;
			// 
			// Games
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(684, 661);
			this->Controls->Add(this->GameOverLabel);
			this->Controls->Add(this->LimitRight);
			this->Controls->Add(this->LimitLeft);
			this->Controls->Add(this->LimitDown);
			this->Controls->Add(this->LimitUp);
			this->Controls->Add(this->Settings);
			this->Controls->Add(this->GameData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Games";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake by Andrey22250";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Games::Games_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Games::Games_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->GameData->ResumeLayout(false);
			this->GameData->PerformLayout();
			this->Settings->ResumeLayout(false);
			this->Settings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedControl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitUp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LimitRight))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//������ ����
	private: PictureBox^ fruit;//�����
	private: array<PictureBox^>^ Snake;//����
	private: bool play;//������
	private: bool die;//������
	private: bool firstLaunch;//������ ������
	private: int step = 10;//���
	private: float updateInterval = 200;//�������� ���������� �����������
	private: float updateInterval1 = 1;//�������� ���������� - ����������� ��������
	private: int score = 1;//���� 
	private: int scoreshow = 0; //������������ ����
		   //�������� ����
	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();
		   //��� ������� ������������ � .cpp � �������������� ��� ��� ��������
		   //������� ����:

	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Apply_Click(System::Object^ sender, System::EventArgs^ e);
		   //������������ ������� ������
	private: System::Void Games_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //������� �� ���������� ���� - ����������� � timer
	private: void Games_Update(Object^ obgect, EventArgs^ e);
	private: System::Void Games_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->formback->Show();
}
};
}
