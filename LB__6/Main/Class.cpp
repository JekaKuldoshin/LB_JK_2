#include "Class.h"

Service::Service() {
	name = "";
	count = 0;
	cost = 0;
	cost_price = 0.0;
}

void sort(Service* objs, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (objs[i].getName() < objs[j].getName())
			{
				Service temp = objs[i];
				objs[i] = objs[j];
				objs[j] = temp;
			}
		}
	}
}

void print(Service* objs, int num) {
	cout << setw(10) << "Наименование" << setw(10) << "Кол-в" << setw(25) << "Стоимость за единицу" << setw(45) << "Стоимость расходных материалов за единицу |" << endl;
	cout << setw(92) << "-------------------------------------------------------------------------------------------|" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << setw(10) << objs[i].getName() << setw(10) << objs[i].getCount() << setw(20) << objs[i].getCost() << setw(20) << objs[i].getCost_price() << endl;
	}
}

void change(Service& ob, string n, int count, long cost, double cost_price) {
	ob.name = n;
	ob.count = count;
	ob.cost = cost;
	ob.cost_price = cost_price;
}