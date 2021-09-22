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
	TIMER(int m, int s) :minute(m), second(s) { second = minute * 60 + second; }        //Конструктор с параметрами, для инициализации минут и секунд, подсчет секунд
	TIMER(const  TIMER& ob) : minute(ob.minute), second(ob.second) {}    //Конструктор копирования

	void show() const;                         //Функция вывода секунд
};