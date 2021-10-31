#include <string>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	string name;
	string author;
	int pages;

public:
	Book() {              //����
		name = "";
		author = "";
		pages = 0;
	}
	Book(string n, string a, int p) {   //�������������
		name = n;
		author = a;
		pages = p;
	}
	string getName() {
		return name;
	}
	virtual void show() {
		cout << setw(10) << name << setw(10) << author << setw(10) << pages;
	}
};