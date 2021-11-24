#include "Number.h"

Number::Number() {
	number = 0;
}

Number::Number(int n) {
	number = n;
}

int Number::getNumber() {
	return number;
}

bool operator < (const Number& a, const Number& b) {
	if (a.number < b.number) {
		return true;
	}
	else return false;
}


bool operator == (const Number& a, const Number& b) {
	return a.number == b.number;
}

inline ostream& operator << (ostream& stream, const Number& a) {
	stream << a.number;
	return stream;
}