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
	int sc;                       /*���*/
	char name[10];                /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
public:
	void set(int a, char* b, unsigned int c, unsigned int d);

	void set_sc(int a);
	void set_name(char* b);
	void set_size(unsigned int c);
	void set_mhz(unsigned int d);

		/*sc = a;
	strcpy(name, b);
	size = c;
	mhz = d;*/


	void get (int& a, char* b, unsigned int& c, unsigned int& d);
	void show (void) ;
};

void printUP();         //����� �������� �����
void printDOWN();      //����� ������ �����
void NUL(int year, char name[10], int size, int  mhz);   //������� ������ � ������� �������

#endif