#pragma once
#include "Class.h"

void SUM::set(int a, int b)
{
	x = a;
	y = b;
}

void SUM::print() {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "sum = " << Sum << endl;

}

void SUM::sum() {

	Sum = x + y;
	cout << "sum = " << Sum << endl;
}

void SUM::NUL() {
	Sum = 0;
}

