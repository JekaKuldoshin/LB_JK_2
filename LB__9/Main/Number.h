//#pragma once
//
//#include <iostream>
//#include <windows.h>
//#include <iomanip>
//#include <conio.h>
//#include <fstream>
//#include <string>
//#include <map>
//
//
//using namespace std;
//
//
//class Number {
//public:
//	int number;
//
//	Number();
//	Number(int n);
//	Number(Number& a);
//
//	int getNumber();
//
//	friend bool operator == (const Number& a, const Number& b);
//	friend bool operator < (const Number& a, const Number& b);
//	friend ostream& operator << (ostream& stream, const Number& a);
//
//
//};
//

using namespace std;

class Number
{
public:
	int number;
	Number() { number = 0; }
	Number(int n) {
		number = n;
	}
	Number(Number& a) {
		number = a.number;
	}
	int getNumber() {
		return number;
	}
	friend bool operator ==(const Number& a, const Number& b);
	friend bool operator < (const Number& a, const Number& b);
	friend ostream& operator << (ostream& stream, const Name& a);
};

bool operator == (const Number& a, const Number& b) {
	return a.number == b.number;
}
inline bool operator<(const Number& a, const Number& b) {
	if (a.number < b.number)
		return true;
	else return false;
}
inline ostream& operator<<(ostream& stream, const Number& a)
{
	stream << a.number;
	return stream;
}