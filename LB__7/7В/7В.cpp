#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	fstream f;          //Создал переменную для ввода и вывода в файл
	int a, i = 0;      //Переменная для вывода, i - для for(...)
	int b[10];        //Массив для записи чисел
	int menu;

	while (true) {            // Цикл для меню
		system("cls");
		cout << "                               Меню                   |" << endl;
		cout << "------------------------------------------------------|" << endl;
		cout << "1 - Создание массива от 0 - 9   | 3 - Изменить данные |" << endl;
		cout << "2 - Создание массива от 1 - 10  | 4 - Вывести массив  |" << endl;
		cout << "------------------------------------------------------|" << endl;
		cout << "                             5 - Выход                |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			system("cls");
			f.open("7B.bin", fstream::out | fstream::trunc | fstream::binary);  //Открываем -> сбрасываем содержимое -> Открываем бинарный файл
			if (f.is_open()) {
				i = 0;
				cout << "Запись в файл было выполенно успешно!!" << endl;
				for (int i = 0; i < 10; i++)   //Заполняем числами от 0 до 9
				{
					f.write((char*)&i, sizeof(i));   
				}
				f.close();  //Закрыли файл
			}
			_getch();
			system("cls");
			break;
		case 2:
			system("cls");
			i = 0;
			cout << "Запись в файл было выполенно успешно!!" << endl;
			f.open("7B.bin", fstream::out | fstream::trunc | fstream::binary);  //Открываем -> сбрасываем содержимое -> Открываем бинарный файл
			if (f.is_open()) {
				for (int i = 1; i < 11; i++)   //Заполняем числами от 1 до 11
				{
					f.write((char*)&i, sizeof(i));
				}
				f.close();
			}
			cout << endl << endl;
			_getch();
			system("cls");
			break;
		case 3:
			system("cls");
			
			f.open("7B.bin", fstream::in | fstream::binary);  //Открываем для чтения->  Открываем бинарный файл
			if (f.is_open()) {
				cout << "Вывел массив из файла" << endl;

				int c = 0;          //Начинаем с нулевого элемента массива
				while (!f.eof())      //Если файл не пуст
				{
					if (f.peek() == EOF)  //Если последний элемент выходим
					{
						break;
					}
					f.read((char*)&b[c], sizeof(b[i]));
					cout << b[c] << " ";      //Выводим элементы массива
					c++;
				}
				c = 0;
				f.close();
			}
			else {
				cout << "Ошибка!!\nБинарный файл не было найдено";
				_getch();
				goto link1;
			}
			cout << endl;
			if (b[4] % 2 == 0)                 //Если числа четные
				for (int i = 0; i < 4; i++)   //Меняем 5 элементов массива
					b[i] = 77;

			if (b[4] % 2 != 0)                 //Если числа нечетные
				for (int i = 5; i < 10; i++)  //Меняем 5 элементов массива
					b[i] = 88;
			cout << endl;
			f.open("7B.bin", fstream::out | fstream::trunc);  //Записываем изменения
			f.close();
			
			cout << "Изменяем массив b\nЗаписываем в файл из нового массива b" << endl;
			f.open("7B.bin", fstream::app | fstream::binary);   //Открываем для добавления
			if (f.is_open()) {
				for (int i = 0; i < 10; i++)      //Выводим элементы массива
				{
					f.write((char*)&b[i], sizeof(b[i]));
					cout << b[i] << " ";
				}
				f.close();
			}
			cout << endl << endl;
			_getch();
			link1:
			system("cls");
			break;
		case 4:
			system("cls");
			
			f.open("7B.bin", fstream::in | fstream::binary); //открыли для чтения
			if (f.is_open()) {
				cout << "Чтение из файла" << endl;

				while (true)
				{
					if (f.peek() == EOF)     //Выводим пока не дойдем до конца
						break;
					f.read((char*)&a, sizeof(a));
					cout << a << " ";
				}
				f.close();
			}
			else {                    //проверка на наличие файла
				cout << "Ошибка!!\nБинарный файл не было найдено";
			}
			_getch();
			system("cls");
			break;
		case 5:
			system("cls");
			cout << "Thanks for your attention!!" << endl << endl;
			exit(1);
			break;
		default:
			system("cls");
			cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
			_getch();
			break;
		}
	} 

}