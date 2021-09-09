#include "fun.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	char* n;
	char* t;
	unsigned int s;
	float h;
	short i, k;
	unsigned int s1;
	short q, q1;

	church obj[N] = { church("Тодайдзи","Т",220,368.8),
					  church("Якусидзи","С",50,54.7),
					  church("Дайандзи","Д",10,12.2) };
	system("cls");

	cout.precision(2);
	cout << "Название, Школа, Количество монахов, Площадь земли: \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nПерегрузка оператора присваивания '='.\n";
	cout << "Введите номера экземпляров класса: заменяемый и заменяющий>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] = obj[q1];

	cout << "Название, Школа, Количество монахов, Площадь земли: \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nПерегрузка оператора соответствия '=='.\n";
	cout << "Введите номера экземпляров класса, которые надо сравнить>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] == obj[q1];

	cout << "\nПерегрузка оператора суммы '+'.\n";
	cout << "Введите номера экземпляров класса, которые надо сложить>\n";
	cin >> q;
	cin >> q1;
	church temp;
	if (isvalid(q, q1) != 0) exit(-1);
	temp = obj[q] + obj[q1];
	cout << "Наименование, Тип, Посевная площадь, Урожайность: ";
	temp.getall(n, t, s, h);

	cout << "\nПерегрузка оператора потокового ввода '>>'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; getch(); exit(-1); }
	cin >> obj[q];

	cout << "\nПерегрузка оператора потокового вывода '<<'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; getch(); exit(-1); }
	cout << obj[q];

	getch();
	return 0;
}