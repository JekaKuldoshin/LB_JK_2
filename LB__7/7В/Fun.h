#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "windows.h"
#include <time.h>

using namespace std;

#define size 10        //Кол-во заполняемых чисел в файл

void Write();                  //Функ-я записи
void Read();                  //Функ-я чтения
void CheakNum(int number);   //Функ-я проверки числа
