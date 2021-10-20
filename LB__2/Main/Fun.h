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
	friend int isvalid(int a, int b);  //Друж. функ-я для проверки ввода

public:
	UFO();     //Конструктор по умол.
	UFO(int sc, const char* na, unsigned int size, unsigned int mhz);

	/*void setall(int a, char* b, unsigned int, unsigned int);*/            
	void getall(int a, char* b, unsigned int& c, unsigned int& d) const;
	void showall() const;
	void show() const;

	UFO operator = (const UFO& obj);     //Перегрузка оператора присваивания '='
	void operator == (const UFO& obj);  //Перегрузка оператора соответствия '=='
	UFO operator + (const UFO& obj);   //Перегрузка оператора суммы '+'

	int operator[] (int i);    //Перегрузка для нахождение длины Char*
	void operator() ();       //Перегркзка для инициализации 

};
void shapka();              //Вывод вверхней шапки
void linebuild();          //Вывод нижней шапки
int isvalid(int a, int b);  //Проверка на правильность ввода


void FunShowall(UFO obj[3]);  //Функ-я для вывода данных

#endif