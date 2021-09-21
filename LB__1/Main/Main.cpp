#include "fun.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;               //Переменные для инициализации ввода
	char name[10];
	unsigned int size;
	unsigned int mhz;
	short i;                 //Переменная для подсчета иттераций

	bool check = false;
	int var;

	UFO obj[N];            //Создал объект для обращения к классу
	 

	int menu;
	int menu2;

	while (true) {            // Цикл для меню
		cout << "                Меню                            |" << endl;
		cout << "------------------------------------------------|" << endl;
		cout << "1 - Работа Set   | 3 - Работа Get&Show          |" << endl;
		cout << "2 - Работа Show  | 4 - Смена значениий таблицы  |" << endl;
		cout << "------------------------------------------------|" << endl;
		cout << "               5 - Выход                        |" << endl;
		cout << "------------------------------------------------|" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			system("cls");

			for (int i = 0; i < N; i++)
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
			cout << "Успех! Данные были иннициализированны!\n\nДля перехода в меню нажмите любую клавишу..." << endl;
			check = true;
			_getch();
			system("cls");
			break;

		case 2:

			if (check == true) {

				system("cls");
				cout << "Работа функции SHOW!  |\n";
				cout << "----------------------|\n\n";

				printUP();

				for (i = 0; i < N; i++)
					obj[i].show();

				printDOWN();
				cout << "\n";
				cout << "Для перехода в меню нажмите любую клавишу..." << endl;

				_getch();
				system("cls");
			}
			else
			{
				system("cls");
				cout << "Ошибка! Вы не иннициализировали данные через функцию SET!!! \n\n\nДля перехода в меню нажмите любую клавишу... " << endl;
				_getch();
				system("cls");
			}
			break;

		case 3:
			if (check == true) {
				system("cls");
				cout << "Работа функции GET и SHOW!   |\n";
				cout << "-----------------------------|\n\n";

				NUL(year, name, size, mhz);

				printUP();
				for (i = 0; i < N; i++)
				{
					obj[i].get(year, name, size, mhz);
					obj[i].show();
				}
				printDOWN();
				cout << "\n";

				cout << "Для перехода в меню нажмите любую клавишу..." << endl; 
				_getch();
			}

			else
			{
				system("cls");
				cout << "Ошибка! Вы не иннициализировали данные через функцию SET!!! \n\n\nДля перехода в меню нажмите любую клавишу... " << endl;
				_getch();
				system("cls");
			}
				break;
		case 4:
			system("cls");
			if (check == true)
			{
				cout << "                           Меню                              |\n";
				cout << "-------------------------------------------------------------|\n";
				cout << "1 - Смена года                |  3 - Смена диаметра антены   |" << endl;
				cout << "2 - Смена имени руководителя  |  4 - Смена рабочей частоты   |" << endl;
				cout << "-------------------------------------------------------------|\n";
				cout << "                         5 - Выход                           |" << endl;
				cout << "-------------------------------------------------------------|" << endl;
				cin >> menu2;

				switch (menu2)
				{
				case 1:
					system("cls");
					printUP();

					for (i = 0; i < N; i++)
						obj[i].show();

					printDOWN();

					cout << "Введите желаемую позицию для смены значения - >";
					cin >> var;
					cout << "\nВведите год -> ";
					cin >> year;

					obj[var--].set_sc(year);

					break;
				case 2:

					break;
				}
			
			
			}
			else
			{
				system("cls");
				cout << "Ошибка! Вы не иннициализировали данные через функцию SET!!! \n\n\nДля перехода в меню нажмите любую клавишу... " << endl;
				_getch();
				system("cls");
			}
				break;

		}

		/*for (int i = 0; i < N; i++)
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
		system("cls");*/

		//////////////

		/*cout << "Работа функции SHOW!  |\n";
		cout << "----------------------|\n\n";

		printUP();

		for (i = 0; i < N; i++)
			obj[i].show();

		printDOWN();
		cout << "\n";

		_getch();
		system("cls");*/

		//////////////

	/*	cout << "Работа функции GET и SHOW!   |\n";
		cout << "-----------------------------|\n\n";

		NUL(year, name, size, mhz);

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
		return 0;*/

	}

	return 0;
}