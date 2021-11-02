#include "Figure.h"
#include "Triangel.h"
#include "Rectangel.h"
#include "Circle.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c1;

	cout << "Введите стороны треугольника:" << endl;
	cout << "Сторона а -> ";
	cin >> a;
	cout << "Сторона b -> ";
	cin >> b;
	cout << "Сторона с -> ";
	cin >> c1;

	Triangel t(a, b, c1);
	Figure* tt = &t;
	tt->show();

	_getch();
	system("cls");

	cout << "Введите стороны прямоугольника:" << endl;
	cout << "Сторона а -> ";
	cin >> a;
	cout << "Сторона b -> ";
	cin >> b;

	Rectangel r(a, b);
	Figure* rr = &r;
	rr->show();

	_getch();
	system("cls");

	cout << "Введите стороны круга:" << endl;
	cout << "Сторона а -> ";
	cin >> a;

	Circle c(a);
	Figure* cc = &c;
	cc->show();

	_getch();
}