#include "Games.h"

using namespace System;
using namespace System::Windows::Forms;

//���������, ������� ��� 2D ������������ 
struct Vector2 {
	int X, Y;
};

Vector2 direction;//����������� ������
Vector2 positionFruit;//������� ������
Vector2 gameArea;//������� ����

//����������� �����
Practic::Games::Games(System::Windows::Forms::Form^ form3)
{
	formback = form3;
	InitializeComponent();

	//������ ������� ������� ����
	gameArea.X = 600;
	gameArea.Y = 600;

	firstLaunch = true;//������ ������
	MessageBox::Show("������� ����:\n1. ��� ���������� ������������ �������\n2. ����� ������ ��� ������ ����� � ���������� ������\n3. ������ ���� ���� � ��������� � ������\n", "������� ����!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	NewGame();//����� ����
}

//���������� �������� ����
void Practic::Games::GeneratePositionFruit()
{
	//���������� ��������� ������� ������
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);//10 - �������� ������������ ����� �����
	positionFruit.Y = rand->Next(90, gameArea.Y);//90 - �������� ������� ������� ������������ ����� �����

	//��������, ����� ����� �� �������� �� ������
	for (int i = 0; i < score-1; i++) {
		if (positionFruit.X == Snake[i]->Location.X &&
			positionFruit.Y == Snake[i]->Location.Y)
			GeneratePositionFruit();
	}

	//����������� ��������, ����� ���� ������ ����
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//����������� ������� ������
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//��������� ������ �� �����
	this->Controls->Add(fruit);
}

void Practic::Games::Eating()
{
	// �������� ������� ������ ���� � ������� ������
		if (Snake[0]->Location.X == positionFruit.X && Snake[0]->Location.Y == positionFruit.Y) {
			scoreshow = ++score - 1;
			Score->Text = "����: " + scoreshow;

			//��������� ����� ������� ������
			Snake[score] = gcnew PictureBox();
			Snake[score]->Location = Point(Snake[score - 1]->Location.X + step * direction.X, Snake[score - 1]->Location.Y - step * direction.Y);
			Snake[score]->BackColor = Color::DarkGreen;
			Snake[score]->Width = step;
			Snake[score]->Height = step;
			this->Controls->Add(Snake[score]);

			GeneratePositionFruit();
		}
}

void Practic::Games::Movement()
{
	//������� ������ �������� ������
	for (int i = score; i >= 1; i--) {
		Snake[i]->Location = Snake[i - 1]->Location;
	}
	Snake[0]->Location = Point(Snake[0]->Location.X + direction.X * step, Snake[0]->Location.Y + direction.Y * step);
}

void Practic::Games::EatYourself()
{
	//��������� ������� ������ ����� ������
	for (int i = 1; i < score; i++) {
		if (Snake[0]->Location == Snake[i]->Location) {
			GameOver();
		}
	}
}

void Practic::Games::GameOver()
{
	play = true;
	die = true;

	GameOverLabel->Visible = true;
}

void Practic::Games::NewGame()
{
	//���� ������������� ����, �� ������� ������� � �����
	if (!firstLaunch) {
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(Snake[i]);
		}

		score = 1;
	}
	else
		firstLaunch = false;

	//�������������� ������
	Snake = gcnew array <PictureBox^, 1>(400);
	Snake[0] = gcnew PictureBox();
	Snake[0]->Location = Point(200, 200);
	Snake[0]->BackColor = Color::Lime;//������ ����� �����, ����� ���������� �� ����
	Snake[0]->Width = step;
	Snake[0]->Height = step;
	Snake[1] = gcnew PictureBox();
	Snake[1]->Location = Point(Snake[1 - 1]->Location.X + step * direction.X, Snake[1 - 1]->Location.Y - step * direction.Y);
	Snake[1]->BackColor = Color::DarkGreen;
	Snake[1]->Width = step;
	Snake[1]->Height = step;
	this->Controls->Add(Snake[1]);

	score = 1;
	this->Controls->Add(Snake[0]);

	//�������������� �����
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Red;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//������ �������� ���������� � ��������� ������ ��� ����������
	timer1->Interval = updateInterval / updateInterval1;
	timer1->Start();

	//������ ����������� �� �������
	direction.X = 1;
	direction.Y = 0;

	//����� ������
	play = true;
	die = false;

	Score->Text = "����: 0";

	//�������� �������� ���������� �� �����
	GameOverLabel->Visible = false;
	Settings->Visible = false;
}

void Practic::Games::ChackBorders()
{
	if (Snake[0]->Location.X >= LimitRight->Location.X-10 || Snake[0]->Location.X <= LimitLeft->Location.X) {
		GameOver();
	}

	if (Snake[0]->Location.Y <= LimitUp->Location.Y+10 || Snake[0]->Location.Y >= LimitDown->Location.Y) {
		GameOver();
	}

}

System::Void Practic::Games::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();

	return System::Void();
}

System::Void Practic::Games::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Settings->Visible == false) {
		//���������������� ����
		play = false;

		Apply->Enabled = true;
		SpeedControl->Enabled = true;
		Settings->Visible = true;
	}
	else {
		//��������� ����
		play = true;
		timer1->Start();

		Apply->Enabled = false;
		SpeedControl->Enabled = false;
		Settings->Visible = false;
	}
}

System::Void Practic::Games::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������� ����:\n1. ��� ���������� ������������ �������\n2. ����� ������ ��� ������ ����� � ���������� ������\n3. ������ ���� ���� � ��������� � ������\n", "������� ����!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	return System::Void();
}

System::Void Practic::Games::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	this->formback->Show();
}

System::Void Practic::Games::Apply_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval1 = Convert::ToSingle(SpeedControl->Value);
	timer1->Interval = updateInterval / updateInterval1;

	Apply->Enabled = false;
	SpeedControl->Enabled = false;
	Settings->Visible = false;

	//��������� ����
	play = true;
	timer1->Start();

	return System::Void();
}

System::Void Practic::Games::Games_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//��������� ������� �������
	if ((e->KeyCode.ToString() == "Right" || e->KeyCode.ToString() == "D") && direction.Y != 0) {
		direction.X = 1;
		direction.Y = 0;
	}
	else if ((e->KeyCode.ToString() == "Left" || e->KeyCode.ToString() == "A") && direction.Y != 0) {
		direction.X = -1;
		direction.Y = 0;
	}
	else if ((e->KeyCode.ToString() == "Up" || e->KeyCode.ToString() == "W") && direction.X != 0) {
		direction.Y = -1;
		direction.X = 0;
	}
	else if ((e->KeyCode.ToString() == "Down" || e->KeyCode.ToString() == "S") && direction.X != 0) {
		direction.Y = 1;
		direction.X = 0;
	}
	return System::Void();
}

void Practic::Games::Games_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) {
		//������ �������� ������
		Movement();

		Eating();//��������, ��� ����� �����
		EatYourself();//��������, ��� ���� ����
		ChackBorders();//�������� �� ������������ � ������
	}
	else if (die && play) {
		timer1->Stop();
		MessageBox::Show("���� ��������!", "��������!");
	}
	else if (!play && !die) {
		timer1->Stop();
		MessageBox::Show("���� ��������������!", "��������!");
	}
}
