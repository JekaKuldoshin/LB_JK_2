#pragma once

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include <map>


using namespace std;


class Number {
public:
	int number;

	Number();
	Number(int n);
	Number(Number& a);

	int getNumber();

	friend bool operator == (const Number& a, const Number& b);
	friend bool operator < (const Number& a, const Number& b);
	friend ostream& operator << (ostream& stream, const Number& a);


};


bool operator == (const Number& a, const Number& b);
bool operator < (const Number& a, const Number& b);

inline ostream& operator << (ostream& stream, const Number& a);