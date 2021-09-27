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
#include <math.h>
#include <iomanip>

#define N 3             //количество экземпляров класса

using namespace std;

class church {
	int sc;                       /*ãîä*/
	char* name[10];                /*èìÿ*/
	unsigned int size;            /*äèàìåòð*/
	unsigned int mhz;             /*÷àñòîòà*/

	friend ostream& operator<<(ostream& stream, church& o1);
	friend istream& operator>>(istream& stream, church& o1);

	friend void shapka(void);
	friend void linebuild(void);
	friend int isvalid(int a, int b);
public:
	church() { sc = 0, name[1] = "----",size = 0; mhz = 0; }
	church(int a, char* b, unsigned int& c, unsigned int& d);
	void setall(int a, char* b, unsigned int, unsigned int);
	void getall(int a, char* b, unsigned int& c, unsigned int& d);
	void showall(void);
	church operator = (church& o1);
	int    operator == (church& o1);
	church operator + (church& o1);
};


#endif