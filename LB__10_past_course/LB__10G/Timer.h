#pragma once

#include <iostream>
#include "windows.h"       // ������� �� �������
#include <conio.h>        // ��� ������ � _getch()

using namespace std;

class TIMER {
	int second;           //���������� ��� ������
	int minute = 0;      //���������� ��� �����

public:
	TIMER(int s) :second(s) {}                          //����������� � �����������, ��� ������������� ������
	TIMER(int m, int s) :minute(m), second(s) {}        //����������� � �����������, ��� ������������� ����� � ������
	TIMER(const  TIMER& ob) : minute(ob.minute), second(ob.second) {}    //����������� �����������

	void show() {                           //� ����������� �� ���� ��� ������� �����������, �� � ����� ���������
		if (minute == 0)
		{
			cout << "������� ������ ���-�� ������ -> " << second << endl;
		}
		else
		{
			cout << "������� ������ ���-�� ����� � ������ -> " << minute << ":" << second << endl;
		}
	}
};