#include "fun.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	char name[10];
	unsigned int size;
	unsigned int mhz;
	short i;                 //Переменная для подсчета иттераций

	UFO obj[N];
	
	for (i = 0; i < N; i++)
	{
		cout << "Работа функции SET!   |\n";
		cout << "----------------------|\n\n";
		cout << "Введите данные: " << endl;
		cout << "Введите год -> ";
		cin >> year;
		cout << "Введите имя научного руководителя -> ";
		cin >> name;
		cout << "Введите диаметр антены -> ";
		cin >> size;
		cout << "Введите рабочую частоту -> ";
		cin >> mhz;
		obj[i].set(year, name, size, mhz);
		system("cls");
	}
	system("cls");

	//////////////

	cout << "Работа функции SHOW!  |\n";
	cout << "----------------------|\n\n";

	printUP();

	for (i = 0; i < N; i++)
		obj[i].show();

	printDOWN();
	cout << "\n";

	_getch();
	system("cls");

	//////////////

	cout << "Работа функции GET и SHOW!   |\n";
	cout << "-----------------------------|\n\n";

	printUP();
	for (i = 0; i < N; i++)
	{
		obj[i].get(year, name, size, mhz);
		obj[i].show();
	}
	printDOWN();
	cout << "\n";

	_getch();

	name[0] = '\0';
	return 0;
}