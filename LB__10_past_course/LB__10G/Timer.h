#pragma once

#include <iostream>
#include "windows.h"       // Перевод на русский
#include <conio.h>        // Для работы с _getch()

using namespace std;

class TIMER {
	int second;           //Переменная для секунд
	int minute = 0;      //Переменная для минут

public:
	TIMER(int s) :second(s) {}                          //Конструктор с параметрами, для инициализации секунд
	TIMER(int m, int s) :minute(m), second(s) {}        //Конструктор с параметрами, для инициализации минут и секунд
	TIMER(const  TIMER& ob) : minute(ob.minute), second(ob.second) {}    //Конструктор копирования

	void show() {                           //В зависимости от того что приймет конструктор, то и будет выведенно
		if (minute == 0)
		{
			cout << "Функция вывода кол-ва секунд -> " << second << endl;
		}
		else
		{
			cout << "Функция вывода кол-ва минут и секунд -> " << minute << ":" << second << endl;
		}
	}
};