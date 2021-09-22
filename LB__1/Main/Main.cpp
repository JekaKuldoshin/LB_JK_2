#include "fun.h"

int main(void) {
	SetConsoleCP(1251);            //Руссификатор для ввода
	SetConsoleOutputCP(1251);     //Руссификатор для вывода

	int year;               //Переменные для инициализации ввода
	char name[10];
	unsigned int size;
	unsigned int mhz;
	short i;                 //Переменная для подсчета иттераций

	bool check = false;          //Лог. переменная для меню от неправильного использования программы
	int var;                    //Переменная для обозначения места изменения данных

	UFO obj[N];            //Создал объект для обращения к классу
	 

	int menu;       //Переменные для меню
	int menu2;

	while (true) {            // Цикл для меню
		system("cls");
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

				NUL(year, name, size, mhz);                    //Специально обнулил значения переменных

				printUP();
				for (i = 0; i < N; i++)
				{
					obj[i].get(year, name, size, mhz);    //использую get
					obj[i].show();                       //Вывожу через Show
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
				cout << "Сделайте свой выбор -> ";
				cin >> menu2;

				switch (menu2)
				{
				case 1:
					system("cls");
					printUP();

					for (i = 0; i < N; i++)
						obj[i].show();

					printDOWN();

					cout << "Введите желаемую позицию для смены значения - > ";
					cin >> var;
					var--;
					cout << "\nВведите год -> ";
					cin >> year;

					obj[var].set_sc(year);

					break;
				case 2:
					system("cls");
					printUP();

					for (i = 0; i < N; i++)
						obj[i].show();

					printDOWN();

					cout << "Введите желаемую позицию для смены значения - > ";
					cin >> var;
					var--;
					cout << "\nВведите имя руководителя -> ";
					cin >> name;

					obj[var].set_name(name);
					break;
				case 3:
					system("cls");
					printUP();

					for (i = 0; i < N; i++)
						obj[i].show();

					printDOWN();

					cout << "Введите желаемую позицию для смены значения - > ";
					cin >> var;
					var--;
					cout << "\nВведите диаметр -> ";
					cin >> size;

					obj[var].set_size(size);
					break;
				case 4:
					system("cls");
					printUP();

					for (i = 0; i < N; i++)
						obj[i].show();

					printDOWN();

					cout << "Введите желаемую позицию для смены значения - > ";
					cin >> var;
					var--;
					cout << "\nВведите частоту -> ";
					cin >> mhz;

					obj[var].set_mhz(mhz);
					break;
					case 5:
						
						break;

					default:
						system("cls");
						cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
						_getch();
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
				case 5:
					return 0;
					break;

				default:
					system("cls");
					cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
					_getch();
					break;
		}
	}

	return 0;
}