#pragma once

#include <iostream>
#include "windows.h"       // ������� �� �������
#include <conio.h>        // ��� ������ � _getch()

using namespace std;

class SUM {            // ������ ������ � ��������� �����������
	int x, y;
	int Sum = 0;

public:               // �������� ������ 

	SUM() :x(3), y(4) {}                      // � �� ��������� 
	SUM(int a, int b) :x(a), y(b) {}         // � � �����������   

	void set(int a, int b);                // ������� ��� ������������� � � �
	void print();                         // ������� ��� ������ ����������
	void sum();                          // ������� ��� �������� sum
	void NUL();                         // ������� ��� ������� sum
};