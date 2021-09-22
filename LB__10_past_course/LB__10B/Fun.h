#pragma once

#include <iostream>
#include "windows.h"       // Перевод на русский
#include <conio.h>        // Для работы с _getch()

using namespace std;

void fun_change(int& v1, int& v2, int& v3);
void fun_change(int* v1, int* v2, int* v3);