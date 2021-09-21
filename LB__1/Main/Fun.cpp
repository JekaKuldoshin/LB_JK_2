#include "fun.h"

void UFO::set(int a, char* b, unsigned int c, unsigned int d) {
	sc = a;
	strcpy(name, b);
	size = c;
	mhz = d;
}

void UFO::set_sc(int a)
{
	sc = a;
}

void UFO::set_name(char* b) {
	strcpy(name, b);
}

void UFO::set_size(unsigned int c) {
	size = c;
}

void UFO::set_mhz(unsigned int d) {
	mhz = d;
}




void UFO::get (int& a, char* b, unsigned int& c, unsigned int& d)
{
	a = sc;
	strcpy(b, name);                  //Копируем
	c = size;
	d = mhz;
}

void UFO::show ()  {

	cout << "|" << setw(4) << sc << "|" << setw(21) << left <<
		name << setw(-21) << "|" << setw(12) << size << "|" << setw(28) << mhz << "|" << endl;

}


void printUP()
{
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|                  Проекты поиска внеземных сигналов                 |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|Год |Научный              |Диаметр     |Рабочая частота             |" << endl;
	cout << "|    |руководитель         |антенны (м) |частота (МГц)               |" << endl;
	cout << "|----|---------------------|------------|----------------------------|" << endl;
}

void printDOWN()
{
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
}

void NUL(int year, char name[10], int size, int  mhz) {
	year = 0;
	name[0] = '\0';
	size = 0;
	mhz = 0;
}