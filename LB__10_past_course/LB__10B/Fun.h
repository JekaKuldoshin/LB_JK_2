#pragma once

#include <iostream>
#include "windows.h"       // ������� �� �������
#include <conio.h>        // ��� ������ � _getch()

using namespace std;

#define N 3                //��������� ���-�� ��������� �������

class ARR {
	int min = 0; int max = 0;       //���������� ��� ���������� ��� � ����
	int i, b;                      //i - ��� ������, b - ��� ������ ����� ����������
	int c = 1;                    //������� ��������� �������
public:
	void set(int arr[N]);                 //�-� ��� ���������� ��������� �������
	void show(int arr[N]);               //�-� ��� ��������� ��������� �������
	void swap_ref(int(&arr)[N]);       //�-� ��� ������ �� ������
	void swap_indicator(int* arr);     //�-� ��� ������ ����� ���������

};