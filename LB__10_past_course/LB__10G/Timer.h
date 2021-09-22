#pragma once

#include <iostream>
#include "windows.h"       // ������� �� �������
#include <conio.h>        // ��� ������ � _getch()

using namespace std;

class TIMER {
	int second;           //���������� ��� ������
	int minute;      //���������� ��� �����

public:
	TIMER(int s) :second(s) {}                          //����������� � �����������, ��� ������������� ������
	TIMER(int m, int s) :minute(m), second(s) { second = minute * 60 + second; }        //����������� � �����������, ��� ������������� ����� � ������, ������� ������
	TIMER(const  TIMER& ob) : minute(ob.minute), second(ob.second) {}    //����������� �����������

	void show() const;                         //������� ������ ������
};