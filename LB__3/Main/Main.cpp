
/*
	Лабораторная работа №3
	Множественное наследование в языке С++
	Вариант №25
	Пример выполнения
	После рефакторинга
*/

#include <iostream>
#include <conio.h>
using namespace std;

class B1 {
	int a;
public:
	B1(int x) { a = x; }

};

class B2 {
	int b;
public:
	B2(int x) { b = x; }

};

class D1 : public B1 {
	int c;
public:
	D1(int x, int y) : B1(y) { c = x; };

};

class D2 : private D1 {
	int d;
public:
	D2(int x, int y, int z) : D1(y, z) { d = x; };
};

class D3 :  public D2 {
	int e;
public:
	D3(int x, int y, int z) : D2(y, z) { e = x; };
};

class B2 : private D3 {
	int f;
public:
	B2(int x, int y, int z) : D3(y, z) { f = x; };
};

int main() {
	setlocale(LC_ALL, "Ukrainian");
	system("cls");
	

	_getch();
	return 0;
}