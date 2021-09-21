#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>

#define N 2

using namespace std;

class UFO {
	int sc;                       /*год*/
	char name[10];                /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
public:
	void set(int a, char* b, unsigned int c, unsigned int d);

	void set_sc(int a);                 //Отдельные SET для изменения их через консоль
	void set_name(char* b);
	void set_size(unsigned int c);
	void set_mhz(unsigned int d);

	void get (int& a, char* b, unsigned int& c, unsigned int& d) const;     //Для копирования данных с переменной
	void show () const;
};

void printUP();         //Вывод вверхней шапки
void printDOWN();      //Вывод нижней шапки
void NUL(int year, char name[10], int size, int  mhz);   //Очистка данных в главной функции

#endif