#pragma once

#include <iostream>
#include "windows.h"       // ������� �� �������
#include <conio.h>        // ��� ������ � _getch()

using namespace std;

void fun_change_ref(int& v1, int& v2, int& v3);
void fun_change_pointer(int* v1, int* v2, int* v3);