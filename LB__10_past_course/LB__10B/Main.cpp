#include"Fun.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char c;                             //Перменная для меню цикла
	do
	{
		int v1, v2, v3;

		cout << "Введите число 1 -> ";
		cin >> v1;
		cout << "Введите число 2 -> ";
		cin >> v2;
		cout << "Введите число 3 -> ";
		cin >> v3;

		cout << endl << "Смена через ссылку: " << endl;
		fun_change(v1, v2, v3);    //Функция для обмена через ссылку
		cout << endl << "Смена через указатель: " << endl;
		fun_change(&v1, &v2, &v3);    //Функция для обмена через указатель

		cout << "Повторить ввод элементов массива?  +/-";
		c = _getch();            //Остановка приложения
		system("cls");
	} while (c != '-');

	cout << "Thanks for your attention!!" << endl;



}