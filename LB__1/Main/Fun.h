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

#define N 3

using namespace std;

class UFO {
	int sc;                       /*���*/
	char name[10];                /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
public:
	void set(int a, char* b, unsigned int c, unsigned int d);
	void get const(int& a, char* b, unsigned int& c, unsigned int& d);
	void show(void);
};

void printUP();
void printDOWN();

#endif