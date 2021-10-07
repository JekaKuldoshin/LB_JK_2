﻿#include "Fun.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 0;                /*год*/
	char* t;                 /*имя*/
	unsigned int s;         /*диаметр*/
	unsigned int h;        /*частота*/
    
	int i;               //Переменная для циклов
	short q, q1;        //Переменные для ввода определенной ячейки класса


	t = new char[10];

	UFO obj[N] = {                               //Создал объект с данными
					  UFO(1923,"Т",220,3684),
					  UFO(1440,"С",50,5444),
					  UFO(2020,"Д",10,1233) };
	UFO temp;  //Создал объект Temp для передачи данных и присваиванию 

	int menu;       //Переменные для меню



	while (true) {            // Цикл для меню
		system("cls");
		cout << "                                           Меню                                                 |" << endl;
		cout << "------------------------------------------------------------------------------------------------|" << endl;
		cout << "1 - Работа Show                              | 5 - Перегрузка оператора потокового ввода '>>'   |" << endl;
		cout << "2 - Перегрузка оператора присваивания '='    | 6 - Перегрузка оператора потокового вывода '<<'  |" << endl;
		cout << "3 - Перегрузка оператора соответствия '=='   | 7 - Перегрузка оператора '[]'                    |" << endl;
		cout << "4 - Перегрузка оператора суммы '+'           | 8 - Перегрузка оператора '()'                    |" << endl;
		cout << "------------------------------------------------------------------------------------------------|" << endl;
		cout << "                                          9 - Выход                                             |" << endl;
		cout << "------------------------------------------------------------------------------------------------|" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu)
		{
		case 1:                         /*Работа Show*/
			system("cls");

			shapka();

			for (i = 0; i < N; i++)
				obj[i].show();

			linebuild();

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 2:                        /*Перегрузка оператора присваивания '='*/
			system("cls");

			FunShowall(obj);

			while (true) {
				cout << "\n\nВведите номера экземпляра класса который хотите заменить -> ";
				cin >> q;
				q--;               //Уменьшаем переменную для правильности работы с массивом объекта класса
				cout << "\n\nВведите номера экземпляра класса на который хотите заменить -> ";
				cin >> q1;
				q1--;
				if (isvalid(q, q1) != 0);        //Проверка на правильность ввода
				else {
					obj[q] = obj[q1];
					break;
				}
			}

			system("cls");

			shapka();

			for (i = 0; i < N; i++)
				obj[i].show();

			linebuild();
			cout << "\n\nДля перехода в меню нажмите любую клавишу...";

			_getch();
			system("cls");
			break;

		case 3:                       /*Перегрузка оператора соответствия '=='*/
			system("cls");

			FunShowall(obj);          //Создал функцию для вывода данных класса, для уменьшения кол-ва строк кода


			cout << "\n\nВведите номера экземпляров класса, которые сравниваем:\n";
			cout << "a - > ";
			cin >> q;
			q--;                    //Уменьшаем переменную для правильности работы с массивом объекта класса
			cout << "b - > ";
			cin >> q1;
			q1--;
			if (isvalid(q, q1) != 0);    //Проверка на правильность ввода
			else {
				obj[q] == obj[q1];
				break;
			}

			_getch();
			system("cls");
			break;

		case 4:                           /* Перегрузка оператора суммы '+'*/
			system("cls");

			FunShowall(obj);             //Создал функцию для вывода данных класса, для уменьшения кол-ва строк кода

			while (true) {
				cout << "\n\nВведите номера экземпляров класса, которые нужно сложить>\n";
				cout << "a - > ";
				cin >> q;
				q--;               //Уменьшаем переменную для правильности работы с массивом объекта класса
				cout << "b - > ";
				cin >> q1;
				q1--;
				if (isvalid(q, q1) != 0);     //Проверка на правильность ввода
				else {
					temp = obj[q] + obj[q1];
					system("cls");
					cout << "Год, Имя научного руководителя, Диаметр антены, Рабочая частота:" << endl;;
					temp.getall(n, t, s, h);
					break;
				}
			}
			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 5:                        /*Перегрузка оператора потокового ввода '>>'*/
			system("cls");

			FunShowall(obj);      //Создал функцию для вывода данных класса, для уменьшения кол-ва строк кода
			 
			cout << "\n\nВыберите номер экземпляра класса для замены данных: ";
			cin >> q;
			q--;              //Уменьшаем переменную для правильности работы с массивом объекта класса
			system("cls");
			if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); }
			cin >> obj[q];
			system("cls");
			cout << "Успех! Данные были внесены" << endl;
			cout << "\nДля перехода в меню нажмите любую клавишу...";
			_getch();

			break;

		case 6:               /* Перегрузка оператора потокового вывода '<<'*/
			system("cls");

			FunShowall(obj);         //Создал функцию для вывода данных класса, для уменьшения кол-ва строк кода

			cout << "\n\nВыберите номер экземпляра класса для вывода данных: ";
			cin >> q;
			q--;            //Уменьшаем переменную для правильности работы с массивом объекта класса
			system("cls");
			if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); }
			cout << obj[q];

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 7:
			system("cls");

			cout << "Перегрузка оператора '[]'";
			cout << endl << endl;
			for (int i = 0; i < N; i++)
			{
				obj[i].show();
				cout << endl << "Размер char* -> " << obj[i].operator[](i) << endl << endl;

			}
			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;
		case 8:
			system("cls");

			cout << "Перегрузка оператора '()'";
			for (int i = 0; i < N; i++) {
				obj[i]();
			}
			cout << endl << endl;
			shapka();
			for (int i = 0; i < N; i++)
			{
				obj[i].show();
			}
			linebuild();

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

		case 9:

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
	return 0;
}