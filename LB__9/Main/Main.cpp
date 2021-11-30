//Создать ассоциативный массив(телефонная книжка) на основе двух классов(NAME->firstand NUMBER->second).
//Перегрузить оператор < в классе NAME для упорядочивания по имени.
//	В каждом классе : ф.вывода get();
//Организовать map<> из 3 - 5 элементов.
//Напечатать весь список.
//Осуществить поиск по ключу(по имени).
//Напечатать всех, у кого фамилия начинается на определенную букву.
//Удалить всех, у кого фамилия начинается на определенную букву.


#include "Number.h"
#include "Name.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	map<Name, Number> mp;
	mp[Name("Ilya")] = Number(1234);
	mp[Name("Jeka")] = Number(5678);

	auto it = mp.begin();
	auto iter = mp.begin();

	string s = "";
	int e = 0, p = 0;

	int menu;

	while (true) {
		system("cls");
		cout << "                              Меню                               |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "1 - Вывести данные              | 4 - Поиск ячейки		          |" << endl;
		cout << "2 - Добавить данные в массив    | 5 - Поиск по первой букве	  |" << endl;
		cout << "3 - Удалить ячейку				 | 6 - Удаление по первой букве   |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "                             7 - Выход                           |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu) {
		case 1:
			system("cls");
			cout << "Данные:" << endl;
			for (auto it = mp.begin(); it != mp.end(); it++)
				cout << it->first << " " << it->second << endl;

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 2:

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 3:

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 4:

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 5:

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 6:

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 7:

			system("cls");
			cout << "Thanks for your attention!!" << endl << endl;
			return 0;
			break;

		default:
			system("cls");
			cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
			_getch();
			break;





		}


	}
}