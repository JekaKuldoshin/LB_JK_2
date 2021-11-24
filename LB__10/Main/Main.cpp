//Сделать 3 функции - шаблоны(шаблон для целых, м.б.вещественных, символьных) и 3 теста.
//Функции:
//а) min() – нахождения минимального;
//б) sort() – сортировка массива по возрастанию;
//в) sum() – нахождения в массиве суммы положительных.
#include "Fun.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//MIN
	double a = 6.4;
	double b = 10.8;
	cout <<"Минимальное число -> " << min1(a, b);
	/*assert(min1(a, b) == a && "а не больше б");*/


	cout << endl << endl;

	//SORT

	vector <int> mas1 = { -1,22,13,-43,55,16 };
	vector <int> mas2 = { 11,52,-13,-44,53,76 };
	sort1(mas2);

	for (int i = 0; i < mas1.size(); i++) {
		cout << mas2[i] << "\t";
	}



}



