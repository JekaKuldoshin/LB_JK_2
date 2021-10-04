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

	friend ostream& operator<<(ostream& stream, UFO& obj);
	friend istream& operator>>(istream& stream, UFO& obj);

	friend void shapka();    //Друж. функ-я для вывода верхней части табл.
	friend void linebuild();  //Друж. функ-я для вывода нижней части табл.
	friend int isvalid(int a, int b);  //Друж. функ-я для проверки ввода

public:
	UFO();     //Конструктор по умол.
	UFO(int sc, const char* na, unsigned int size, unsigned int mhz);

	void setall(int a, char* b, unsigned int, unsigned int);
	void getall(int a, char* b, unsigned int& c, unsigned int& d) const;
	void showall() const;
	void show() const;

	UFO operator = (const UFO& obj);
	void operator == (const UFO& obj);
	UFO operator + (const UFO& obj);
};
void shapka();
void linebuild();
int isvalid(int a, int b);


void FunShowall(UFO obj[3]);

#endif