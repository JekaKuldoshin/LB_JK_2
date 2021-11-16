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
	cout << "Введите первое чило (int/double) -> "; 
	cin >> a;
	cout << "Введите второе чило (int/double) -> "; 
	cin >> b;
	number<double> c;
	c = a / b;
	cout << "a / b = " << c << endl;
	c = a * b;
	cout << "a * b = " << c << endl;
	c = a + b;
	cout << "a + b = " << c << endl;
	c = a - b;
	cout << "a - b = " << c << endl;
}