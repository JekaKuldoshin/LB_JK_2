//Создать шаблон класса для работы с числами(целыми и вещественными) :
//	– К по У : – К с параметрами;   – Ф.вывода;
//– перегрузить операцию + .

#include "Class.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	number <double> a;
	number <double> b;
	number <double> c;
	cout << "Введите первое чило (/double) -> "; 
	cin >> a;
	cout << "Введите второе чило (/double) -> "; 
	cin >> b;
	
	c = a / b;
	cout << "a / b = " << c << endl;
	c = a * b;
	cout << "a * b = " << c << endl;
	c = a + b;
	cout << "a + b = " << c << endl;
	c = a - b;
	cout << "a - b = " << c << endl;


	number <int> a1;
	number <int> b1;
	number <int> c1;

	cout << "Введите первое чило (int) -> ";
	cin >> a1;
	cout << "Введите второе чило (int) -> ";
	cin >> b1;

	c1 = a1 / b1;
	cout << "a / b = " << c1 << endl;
	c1 = a1 * b1;
	cout << "a * b = " << c1 << endl;
	c1 = a1 + b1;
	cout << "a + b = " << c1 << endl;
	c1 = a1 - b1;
	cout << "a - b = " << c1 << endl;
}