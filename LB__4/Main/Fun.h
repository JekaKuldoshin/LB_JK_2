#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

#define N 3             //���������� ����������� ������

using namespace std;

class UFO {
	int sc;                       /*���*/
	char* name;                  /*���*/
	unsigned int size;          /*�������*/
	unsigned int mhz;          /*�������*/

	friend ostream& operator<<(ostream& stream, UFO& obj);    //���������� ��������� ���������� ������ '<<'
	friend istream& operator>>(istream& stream, UFO& obj);   //���������� ��������� ���������� ����� '>>'

	friend void shapka();    //����. ����-� ��� ������ ������� ����� ����.
	friend void linebuild();  //����. ����-� ��� ������ ������ ����� ����.
public:

	UFO();     //����������� �� ����.
	UFO(int sc, const char* na, unsigned int size, unsigned int mhz);

	void setall(int a, const char* b, unsigned int, unsigned int);
	void getall(int a, char* b, unsigned int& c, unsigned int& d) const;
	char getName() { return *name; }
	void showall() const;
	void show() const;
	char  ret_name() { return *name; }
	int   ret_sc() { return sc;}

	friend ostream& operator<<(ostream& stream, UFO& temp);
};

class DB {
	string title;      /*�������� ���� ������*/
	UFO* rows[12];    /*���������� ����� � ���� ������*/
	
	bool sorted; /* ����, ������������ ������������� / ��������������� ���� ������*/
public:
	int col;         /*������ ����� � ���� ������*/
	DB();
	DB(string q);
	~DB() { if (col) for (int i = 0; i < col; i++) delete rows[i]; }
	void add_rec(int a, const char* b, unsigned int c, unsigned int d);
	void del_rec();
	void sort_DB();
	friend ostream& operator<<(ostream& stream, DB& temp);
};


void shapka();              //����� �������� �����
void linebuild();          //����� ������ �����

#endif