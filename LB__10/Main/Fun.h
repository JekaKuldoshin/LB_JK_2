#pragma once

#include <iostream>
#include "windows.h"
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

template <typename T>
T Min(vector<T> vec) {                              //Создал функция Min, (вектор <любой формат>, название переменной для работы в функцие)
	T temp = vec[0];                               //Выставляем на начало , создал переменную temp c форматом Т

	for (auto i = 0; i < vec.size(); ++i) {        //Исходят от размера, проходим циклом по всему массиву.
		if (vec[i] < temp)						  //Идет сравнение и присваивание минимального числа, проходим по всем числам
			temp = vec[i];
	}
	return temp;                                //Возврат для печати минимального 
}

template <typename T>
void Sort(vector<T>& mas) {                           //Создал функция Sort, (вектор <любой формат>, название переменной для работы в функцие)
	for (int i = 0; i < mas.size(); i++)             //Исходя от размера массива, проходим по всему
		for (int j = i + 1; j < mas.size(); j++)    //Передвигаем второй массив, для обмена, который идет на 1 элемент больше
			if (mas[i] > mas[j])                   //Если 2>1 идет обмен
				swap(mas[i], mas[j]);             //swap обмен данными
}

template <class T >
T Sum(vector<T> mas) {                           //Создал функция Sum, (вектор <любой формат>, название переменной для работы в функцие)
	T a = 0;                                    //Переменная для накопления суммы
	for (int i = 0; i < mas.size(); i++)       //Исходя от размера массива, проходим по всему
		if (mas[i] > 0)                       //Если число положительное, мы его прибавляем в переменную а
			a += mas[i];
	return a;                               //Возвращаем переменную для печати
}

void Test_min();
void Test_sort();
void Test_sum();