#pragma once

#include <iostream>
#include "windows.h"
#include <conio.h>

using namespace std;

class MATH {
	int a;           // ���������� ��� ��������
	int b, c;       // ���������� ��� ��������������
	int S1, S2;    // ���������� ��� ����������

public:
	MATH();                 // ����������� ��� ����������  
	void count();          // ������� ��� �������� S
	void show()const;     // ������� ��� ������ �����������, ������ ��� ��� �� �������� ������ 

};
