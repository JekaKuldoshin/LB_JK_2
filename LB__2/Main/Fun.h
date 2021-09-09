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
	char* name;
	char* school;
	unsigned int count;
	float square;
	friend ostream& operator<<(ostream& stream, church& o1);
	friend istream& operator>>(istream& stream, church& o1);
	friend void shapka(void);
	friend void linebuild(void);
	friend int isvalid(int a, int b);
public:
	church() { square = 0; count = 0; }
	church(char* a, char* b, unsigned int& c, float& d);
	void setall(char* a, char* b, unsigned int, float);
	void getall(char* a, char* b, unsigned int& c, float& d);
	void showall(void);
	church operator = (church& o1);
	int    operator == (church& o1);
	church operator + (church& o1);
};


#endif