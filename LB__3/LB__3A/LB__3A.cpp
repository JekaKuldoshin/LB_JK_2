#include "SOBAKA.h"
#include "SPANIEL.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SOBAKA tmp(3.5,12);

	cout << "\n-------------" << endl;
	
	tmp.golos();
	
	cout << "\n-------------" << endl;
	
	SPANIEL tmp1(10.0, 14, "Yellow");
	
	cout << "\n-------------" << endl;
	
	tmp1.golos();

	cout << endl << endl;

	_getch();
}