#include "Class.h"
using namespace std;

int main()
{
	double mas[10];         //Создал массив для записи в файл
	Comp arr[5];           //Массив класса

	read(mas, "A.txt");
	
	for (int i = 0; i < 10; i++)      //Создаем 10 элементов массива (double)
	{
		cout << mas[i] << endl;
	}
	cout << endl;

	int j = 0;
	for (int i = 0; i < 10;)
	{
		arr[j] = Comp(mas[i], mas[i + 1]);   //Элеммент 1-го i+ 2-ой элемент
		arr[j].print();
		write(arr[j], "B.txt");     //Выводим массив arr[j] = Comp (класс)
		j++;
		i += 2;       //Переход к слейдующим двум элементам
	}
}