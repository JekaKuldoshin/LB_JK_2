#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

#define N 3             //количество экземпляров класса

using namespace std;

class UFO {
	int sc;                       /*год*/
	char* name;                  /*имя*/
	unsigned int size;          /*диаметр*/
	unsigned int mhz;          /*частота*/

	friend ostream& operator<<(ostream& stream, UFO& obj);    //Перегрузка оператора потокового вывода '<<'
	friend istream& operator>>(istream& stream, UFO& obj);   //Перегрузка оператора потокового ввода '>>'

	friend void shapka();    //Друж. функ-я для вывода верхней части табл.
	friend void linebuild();  //Друж. функ-я для вывода нижней части табл.
public:

	UFO();     //Конструктор по умол.
	UFO(int sc, const char* na, unsigned int size, unsigned int mhz);

	void setall(int a, const char* b, unsigned int, unsigned int);
	void getall(int a, char* b, unsigned int& c, unsigned int& d) const;
	char getName() { return *name; }
	void showall() const;
	void show() const;
	char  ret_name() { return *name; }
	int   ret_sc() { return sc;}

	friend ostream& operator<<(ostream& stream, UFO& temp);
};

class DB {
	string title;      /*название базы данных*/
	UFO* rows[12];    /*количество строк в базе данных*/
	
	bool sorted; /* флаг, показывающий отсортирована / неотсортирована база данных*/
public:
	int col;         /*индекс строк в базе данных*/
	DB();
	DB(string q);
	~DB() { if (col) for (int i = 0; i < col; i++) delete rows[i]; }
	void add_rec(int a, const char* b, unsigned int c, unsigned int d);
	void del_rec();
	void sort_DB();
	friend ostream& operator<<(ostream& stream, DB& temp);
};


void shapka();              //Вывод вверхней шапки
void linebuild();          //Вывод нижней шапки

#endif