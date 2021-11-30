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
	int a = 6;
	int b = 10;
	cout <<"Минимальное число -> " << min1(a, b);
	assert(min1(a, b) == a && "а не больше б");


	cout << endl << endl;

	//SORT

	vector <int> mas1 = { -1,22,13,-43,55,16 };
	vector <int> mas2 = { 11,52,-13,-44,53,76 };
	sort1(mas1);

	for (int i = 0; i < mas1.size(); i++) {
		cout << mas1[i] << "\t";
		assert(mas1[i] == mas2[i] && "Не правильно отсортированно");
	}

	cout << endl << endl;

	/*SUM*/

	cout << "Сумма: "; 
	cout << sum1(mas2);
	assert(sum1(mas2) == 3 && "Сумма не правильная!");

}



