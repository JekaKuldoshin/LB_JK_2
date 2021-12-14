#pragma once

#include <iostream>
#include "windows.h"
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

template <typename T>
T Min(vector<T> vec) {                              //������ ������� Min, (������ <����� ������>, �������� ���������� ��� ������ � �������)
	T temp = vec[0];                               //���������� �� ������ , ������ ���������� temp c �������� �

	for (auto i = 0; i < vec.size(); ++i) {        //������� �� �������, �������� ������ �� ����� �������.
		if (vec[i] < temp)						  //���� ��������� � ������������ ������������ �����, �������� �� ���� ������
			temp = vec[i];
	}
	return temp;                                //������� ��� ������ ������������ 
}

template <typename T>
void Sort(vector<T>& mas) {                           //������ ������� Sort, (������ <����� ������>, �������� ���������� ��� ������ � �������)
	for (int i = 0; i < mas.size(); i++)             //������ �� ������� �������, �������� �� �����
		for (int j = i + 1; j < mas.size(); j++)    //����������� ������ ������, ��� ������, ������� ���� �� 1 ������� ������
			if (mas[i] > mas[j])                   //���� 2>1 ���� �����
				swap(mas[i], mas[j]);             //swap ����� �������
}

template <class T >
T Sum(vector<T> mas) {                           //������ ������� Sum, (������ <����� ������>, �������� ���������� ��� ������ � �������)
	T a = 0;                                    //���������� ��� ���������� �����
	for (int i = 0; i < mas.size(); i++)       //������ �� ������� �������, �������� �� �����
		if (mas[i] > 0)                       //���� ����� �������������, �� ��� ���������� � ���������� �
			a += mas[i];
	return a;                               //���������� ���������� ��� ������
}

void Test_min();
void Test_sort();
void Test_sum();