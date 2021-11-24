#include "Fun.h"

void Write() {

	int num = 0;
	fstream fil;         //Создал переменную для ввода в файл
	fil.open("7B.bin", ios::binary | ios::out);      //Открываем -> Открываем бинарный файл для ввода
	if (!fil.is_open()) throw "Ошибка! Файл был не создан!"; //Исключение при не открытие файла

	cout << "10 случайных чисел:" << endl; 
	for (int i = 0; i < size; i++) {            //Цикл на 10 итераций 
		num = rand() % 20 + 1;                 //Заполняем рандомными числами
		fil.write((char*)&num, sizeof(int));   //Записываем в файл как символы
	}
	fil.close();

}

void Read() {

	fstream fil;                       //Создал переменную для вывода инф. с файла
	fil.open("7B.bin", ios::binary | ios::in); //Открываем -> Открываем бинарный файл для вывода
	if (!fil.is_open()) throw "Ошибка! Файл был не найден!";

	int num = 0;
	fil.seekg(0);                        //Передвигаем указатель на 0 (начало файла)
	for (int i = 0; i < size; i++) {            //Цикл на 10 итераций 
		fil.read((char*)&num, sizeof(int));    //Выводим с файла символы
		cout << num << '\t';                  //Печатаем 
	}
	fil.close();
}

void CheakNum(int number) {

	fstream fil;                   //Создал переменную для вывода инф. с файла
	fil.open("7B.bin", ios::binary | ios::in | ios::out);  //Открываем -> вывод -> ввод
	if (!fil.is_open()) throw "Ошибка! Файл был не найден!";

	int  n1 = 77, n2 = 88;                  //Переменные для замены
	int num = 0;                          //Переменная для вывода
	fil.seekg((number - 1) * sizeof(int));          //Передвигаем указатель на 4 элемент файла
	fil.read((char*)&num, sizeof(int));      //Читаем с файла 4 элемент
	cout << endl << endl << num;            //Выводим элемент


	if (num % 2 == 0) {                   //Если четное
		fil.seekp(0);               //указатель вывода на (0) на начало файла
		for (int i = 0; i < number-1; i++) {      //
			fil.write((char*)&n1, sizeof(int));
		}
		cout << " -> четное" << endl << endl;
	}
	else {                                 //Если не четное
		fil.seekp(number * sizeof(int));
		for (int i = 0; i < number; i++) {
			fil.write((char*)&n2, sizeof(int));
		}
		cout << " -> не четное" << endl << endl;
	}

	fil.close();          //Закрыли файл
}