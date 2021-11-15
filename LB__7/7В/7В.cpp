#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include <Windows.h>

//Нужно переделать, сделать без массивов и заполнение рандомными числами
//1 переменная -> рандомнно заполнил -> записал в файл -> закрыл файл
//Поиск -> считал кол-во элементов -> выбрал 5 элемент и в зависимости от четный\не четный менять элементы


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	fstream f;          //Создал переменную для ввода и вывода в файл
	int a, i = 0;      //Переменная для вывода, i - для for(...)
	int b;        //Массив для записи чисел
	int menu;

	int size = 0;

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
				for (int i = 0; i < 10; i++)   //Заполняем числами от 0 до 9
				{
					b = rand() % 100;
					f.write((char*)&b, sizeof(b));
				}
				cout << "Запись в файл было выполенно успешно!!" << endl;
				f.close();  //Закрыли файл
			}
			_getch();
			system("cls");
			break;
		case 2:
			system("cls");
			i = 0;

			f.open("7B.bin", fstream::out | fstream::trunc | fstream::binary);  //Открываем -> сбрасываем содержимое -> Открываем бинарный файл
			if (f.is_open()) {
				for (int i = 1; i < 11; i++)   //Заполняем числами от 1 до 11
				{
					b = rand() % 100;
					f.write((char*)&i, sizeof(i));
				}
				cout << "Запись в файл было выполенно успешно!!" << endl;
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

				while (!f.eof())      //Если файл не пуст
				{
					if (f.peek() == EOF)  //Если последний элемент выходим
					{
						break;
					}
					f.read((char*)&b, sizeof(b));                  //считываем и присваиваем массиву
					cout << b << " ";      //Выводим элементы массива

					size++;
				}

				f.close();
			}
			else {
				cout << "Ошибка!!\nБинарный файл не было найдено";
				_getch();
				goto link1;
			}
			cout << endl;
			i = 0;

			f.open("7B.bin", fstream::in | fstream::binary);  //Открываем для чтения->  Открываем бинарный файл
			while (!f.eof())      //Если файл не пуст
			{
				if (f.peek() == EOF)  //Если последний элемент выходим
				{
					break;
				}
				size;

				f.read((char*)&b, sizeof(b));
				
				if (i == 6) {
					if (b % 2 == 0)                 //Если числа четные
						for (int i = 0; i < 4; i++)   //Меняем 5 элементов массива
							b = 77;

					if (b % 2 != 0)                 //Если числа нечетные
						for (int i = 5; i < 10; i++)  //Меняем 5 элементов массива
							b = 88;
				}
				cout << b << " ";
				i++;
			}
		
			f.close();
			

			size = 0;
			
			cout << endl;
			//f.open("7B.bin", fstream::out | fstream::trunc);  //Записываем изменения
			//f.close();
			
			cout << "Изменяем массив b\nЗаписываем в файл из нового массива b" << endl;
			f.open("7B.bin", fstream::app | fstream::binary);   //Открываем для добавления
			if (f.is_open()) {
				while (!f.eof())      //Если файл не пуст
				{
					if (f.peek() == EOF)  //Если последний элемент выходим
					{
						break;
					}
					f.read((char*)&b, sizeof(b));                  //считываем и присваиваем массиву
					cout << b << " ";      //Выводим элементы массива

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


//// 1 7 3 9 0 4 6 87 9 
//77 77 77 77 77 4 6 87 9



// 1 73 9 0 5 6 87 9
//11 73 9 0 5 88 88 88




//5 работа

//
//class А {
//ch:string;
//public:
//	//K
//	//ф - запись строки в файл
//	//ф - вывода
//	//[] -char  operator[](int i){   для проверки индекса обработка try 
//	открыть ф на чтение
//прочитать строку из файла
//найти i-тый сивол
//закрыть файл
//return символ
//
//};
//
//
//A ob("12dfg5r");
//ob.f1();
//ob.f2();
//cout << ob[5];  //5