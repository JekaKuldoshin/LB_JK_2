////Создать ассоциативный массив(телефонная книжка) на основе двух классов(NAME->firstand NUMBER->second).
////Перегрузить оператор < в классе NAME для упорядочивания по имени.
////	В каждом классе : ф.вывода get();
////Организовать map<> из 3 - 5 элементов.
////Напечатать весь список.
////Осуществить поиск по ключу(по имени).
////Напечатать всех, у кого фамилия начинается на определенную букву.
////Удалить всех, у кого фамилия начинается на определенную букву.
//
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include <map>

#include "Name.h"
#include "Number.h"

using namespace std;

void findByFirst(map<Name, Number>& mp);
void delByFirst(map<Name, Number>& mp);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	map<Name, Number> mp;                    //Создал словарь Map
	mp[Name("Ilya")] = Number(1234);        //Заполняю словарь, передаю значения в класс Name и Number заполнение с параметрами
	mp[Name("Jeka")] = Number(5678);
	mp[Name("Valya")] = Number(1001);
	mp[Name("Sasha")] = Number(2002);

	auto it = mp.begin();           //Автоматически определяем тип данных и начинаем с начала
	auto iter = mp.begin();        //Автоматически определяем тип данных и начинаем с начала
	string s = "";
	bool comp;     //Для проверки правильности ввода, проверка на нахождения символа
	int e = 0;
	int menu;
	
	while (true) {
		system("cls");
		cout << "                              Меню                               |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "1 - Вывести данные              | 4 - Поиск ячейки               |" << endl;
		cout << "2 - Добавить данные в массив    | 5 - Поиск по первой букве      |" << endl;
		cout << "3 - Удалить ячейку              | 6 - Удаление по первой букве   |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "                             7 - Выход                           |" << endl;
		cout << "-----------------------------------------------------------------|" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu) {
		case 1:                                                                //Вывод данных
			system("cls");
			cout << "Данные Map <Name, Number>:" << endl << endl;
	
			for (auto it = mp.begin(); it != mp.end(); it++)       //подбирает тип данных, прохожу по всем данным до конца
			{
				cout << it->first << "  " << it->second << endl;         //Вывожу первую ячейку и вторую ячейку
			}

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 2:                                                            //Ввод данных
			system("cls");
			cout << "Введите данные:" << endl << endl;

			cout << "Name -> "; cin >> s;                             //Вводим имя
			cout << "Number -> "; cin >> e;                          //Вводим номер
			mp[s] = e;

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 3:                                                                   //Удаление ячейки
			system("cls");
			cout << "Введите данные для удаляемой ячейки:" << endl << endl;
		
			cout << "Name -> "; cin >> s;                                     //Вводим имя
			comp = mp.find(s) != mp.end();
			if (comp == true) {                                           //Проверка правильности ввода
				mp.erase(s);                                             //Удаляем ячейку
				cout << endl << "Ячейка удалена!" << endl;
			}
			else {
				cout << endl << "Ячейка была не найденна!" << endl;
			}

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 4:                                                           //Вводим данные для поиска данных
			system("cls");
			cout << "Введите данные для поиска ячейки:" << endl << endl;

			cout << "Name -> "; cin >> s;                                //Вводим имя
			comp = mp.find(s) != mp.end();
			if (comp == true) {                                        //Проверка правильности ввода
				it = mp.find(s);                                      //Находим по имени и выводим (Имя и номер)
				cout << it->first << "  " << it->second << endl;
			}
			else {
				cout << endl << "Ячейка была не найденна!" << endl;
			}

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 5:                                                        //Поиск по первой букве
			system("cls");
			cout << "Введите данные для поиска ячейки по первой букве:" << endl << endl;
			
				findByFirst(mp);                                     //Функ-я поиска по букве, вывод и проверка правильности ввода в самой функцие

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 6:                                                       //Поиск по букве для удаления
			system("cls");
			cout << "Введите данные для удаления ячейки по первой букве:" << endl << endl;

			delByFirst(mp);                                          //Функ-я поиска по букве для удаления, вывод и проверка правильности ввода в самой функцие

		

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 7:                        //Выход
			exit(3);
			system("cls");
			break;
		default:
			system("cls");
			cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
			_getch();
			break;
		}
	}
}

void findByFirst(map<Name, Number>& mp)
{
	char a;
	bool check = false;                                              //Для проверки правильности ввода
	cout << "Введите первую букву ячейки: "; cin >> a;               //Вводим символ
	for (auto it = mp.begin(); it != mp.end(); it++)           //Проходим с начала и до конца 
	{
		if (it->first.name[0] == a)                               //Если данные совпали, выводим
		{
			cout << it->first << "  " << it->second << endl;
			check = true;
		}
	}
	if (check == true) {                                         //Если данные не найдены
		cout << endl << "Ячейка была найденна!" << endl;
	}
	else
	{                                         //Если данные не найдены
		cout << endl << "Ячейка была не найденна!" << endl;
	}
}
void delByFirst(map<Name, Number>& mp)
{
	string a;
	bool check = false;
	cout << "Введите первую букву ячейки: "; cin >> a;
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->first.name[0] == a[0])
		{
			mp.erase(it);
			it = mp.begin();
			check = true;
			continue;
		}
		
	}
	if (check == true) {                                         //Если данные не найдены
		cout << endl << "Ячейка удалена!" << endl;
	}
	else
	{                                         //Если данные не найдены
		cout << endl << "Ячейка была не найденна!" << endl;
	}

	/*auto itr = mp.begin();
	while (itr != mp.end())
	{
		if (itr->first.name[0] == a[0])
		{
			mp.erase(itr);
			itr = mp.begin();
		}
		else {
			itr++;
			check = false;
		}
	}*/
	
}