//Предоставляемая услуга(наименование, единица измерения, стоимость 
//за единицу, стоимость расходных материалов за единицу)

#include <string>
#include <iomanip>
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

class Service
{

public:
	string name;
	int count;
	long cost;
	double cost_price ;

	Service();

	string getName() { return name; }
	int getCount() { return count; }
	long getCost() { return cost; }
	double getCost_price() { return cost_price; }
};

void sort(Service* objs, int n);

void print(Service* objs, int num);

void change(Service& ob, string n, int count, long cost, double cost_price);