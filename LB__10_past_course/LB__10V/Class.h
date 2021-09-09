#pragma once

#include <iostream>
#include "windows.h"       // Перевод на русский
#include <conio.h>        // Для работы с _getch()

using namespace std;

class SUM {            // Создал класса с закрытыми переменными
	int x, y;
	int Sum = 0;

public:               // Открытые данные 

	SUM() :x(3), y(4) {}                      // К по умолчанию 
	SUM(int a, int b) :x(a), y(b) {}         // К с параметрами   

	void set(int a, int b);                // Функция для инициализации Х и У
	void print();                         // Функция для вывода переменных
	void sum();                          // Функция для подсчета sum
	void NUL();                         // Функция для очистки sum
};