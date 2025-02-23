#include "Games.h"

using namespace System;
using namespace System::Windows::Forms;

//Структура, удобная для 2D пространства 
struct Vector2 {
	int X, Y;
};

Vector2 direction;//направление змейки
Vector2 positionFruit;//позиция фрукта
Vector2 gameArea;//игровая зона

//Конструктор формы
Practic::Games::Games(System::Windows::Forms::Form^ form3)
{
	formback = form3;
	InitializeComponent();

	//Задаем размеры игровой зоны
	gameArea.X = 600;
	gameArea.Y = 600;

	firstLaunch = true;//первый запуск
	MessageBox::Show("Правила игры:\n1. Для управления использовать стрелки\n2. Ешьте фрукты для набора счета и увеличения змейки\n3. Нельзя есть себя и врезаться в стенки\n", "Правила игры!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	NewGame();//новая игра
}

//Реализация действий игры
void Practic::Games::GeneratePositionFruit()
{
	//Генерируем случайную позицию фрукту
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);//10 - смещение относительно боков формы
	positionFruit.Y = rand->Next(90, gameArea.Y);//90 - смещение верхней граници относительно верха формы

	//Проверка, чтобы фрукт не создался на змейке
	for (int i = 0; i < score-1; i++) {
		if (positionFruit.X == Snake[i]->Location.X &&
			positionFruit.Y == Snake[i]->Location.Y)
			GeneratePositionFruit();
	}

	//Преобразуем значение, чтобы было кратно шагу
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//Присваеваем позицию фрукту
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//Добавляем объект на форму
	this->Controls->Add(fruit);
}

void Practic::Games::Eating()
{
	// Проверим позицию головы змеи и позицию фрукта
		if (Snake[0]->Location.X == positionFruit.X && Snake[0]->Location.Y == positionFruit.Y) {
			scoreshow = ++score - 1;
			Score->Text = "Счет: " + scoreshow;

			//Добавляем новый элемент змейке
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
	//Двигаем каждый компонет змейки
	for (int i = score; i >= 1; i--) {
		Snake[i]->Location = Snake[i - 1]->Location;
	}
	Snake[0]->Location = Point(Snake[0]->Location.X + direction.X * step, Snake[0]->Location.Y + direction.Y * step);
}

void Practic::Games::EatYourself()
{
	//Проверяем позицию каждой части змейки
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
	//Если инициализация была, то удаляем объекты с формы
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

	//Инициализируем змейку
	Snake = gcnew array <PictureBox^, 1>(400);
	Snake[0] = gcnew PictureBox();
	Snake[0]->Location = Point(200, 200);
	Snake[0]->BackColor = Color::Lime;//голова будет яркой, чтобы отличалась от всех
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

	//Инициализируем фрукт
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Red;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//Задаем интревал обнавления и запускаем таймер для обновления
	timer1->Interval = updateInterval / updateInterval1;
	timer1->Start();

	//Задаем направление на запуске
	direction.X = 1;
	direction.Y = 0;

	//Можно играть
	play = true;
	die = false;

	Score->Text = "Счет: 0";

	//Скрываем ненужные компоненты на форме
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

System::Void Practic::Games::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();

	return System::Void();
}

System::Void Practic::Games::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Settings->Visible == false) {
		//Приостанавливаем игру
		play = false;

		Apply->Enabled = true;
		SpeedControl->Enabled = true;
		Settings->Visible = true;
	}
	else {
		//Запускаем игру
		play = true;
		timer1->Start();

		Apply->Enabled = false;
		SpeedControl->Enabled = false;
		Settings->Visible = false;
	}
}

System::Void Practic::Games::информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Правила игры:\n1. Для управления использовать стрелки\n2. Ешьте фрукты для набора счета и увеличения змейки\n3. Нельзя есть себя и врезаться в стенки\n", "Правила игры!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	return System::Void();
}

System::Void Practic::Games::выходИзИгрыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

	//Запускаем игру
	play = true;
	timer1->Start();

	return System::Void();
}

System::Void Practic::Games::Games_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//Считываем нажатую клавишу
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
		//Задает движение змейки
		Movement();

		Eating();//проверка, что съели фрукт
		EatYourself();//проверка, что съел себя
		ChackBorders();//проверка на столкновение с стеной
	}
	else if (die && play) {
		timer1->Stop();
		MessageBox::Show("Игра окончена!", "Внимание!");
	}
	else if (!play && !die) {
		timer1->Stop();
		MessageBox::Show("Игра приостановлена!", "Внимание!");
	}
}
