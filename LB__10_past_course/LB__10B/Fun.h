#pragma once

#include <iostream>
#include "windows.h"       // Перевод на русский
#include <conio.h>        // Для работы с _getch()

using namespace std;

#define N 3                //Константа кол-ва элементов массива

class ARR {
	int min = 0; int max = 0;       //Переменные для нахождения мин и макс
	int i, b;                      //i - для циклов, b - для обмена через переменную
	int c = 1;                    //Счетчик элементов массива
public:
	void set(int arr[N]);                 //Ф-я для добавления элементов массива
	void show(int arr[N]);               //Ф-я для просмотра элементов массива
	void swap_ref(int(&arr)[N]);       //Ф-я для обмена по ссылке
	void swap_indicator(int* arr);     //Ф-я для обмена через указатель

};