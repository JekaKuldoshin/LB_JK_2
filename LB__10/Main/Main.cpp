//Сделать 3 функции - шаблоны(шаблон для целых, м.б.вещественных, символьных) и 3 теста.
//Функции:
//а) min() – нахождения минимального;
//б) sort() – сортировка массива по возрастанию;
//в) sum() – нахождения в массиве суммы положительных.
#include "Fun.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Test_min();                        //Для начало мы проводим тестирование работоспособности функций, а потом уже только проходим по главному проекту!
	Test_sort();
	Test_sum();

	vector<int> vect_i{ -3, -10, 5, 7, 17 };             
	vector<float> vect_f{ -3.3, -10.5, 5.2, 7.6, 17.1 };
	vector<char> vect_ch{ 'c','a','b' };

	cout << "а) min() – нахождения минимального" << endl;
	cout << Min(vect_i) << endl;                   //Прогоняю через функ-ю и вывожу результат, минимальное число
	cout << Min(vect_f) << endl;
	cout << Min(vect_ch) << endl;
	cout << "------------------------" << endl;

	cout << "б) sort() – сортировка массива по возрастанию" << endl;
	Sort(vect_i);                                 //Прогоняю через функ-ю и вывожу результат, отсортированные данные
	for (auto i : vect_i)
		cout << i << "     ";
	cout << endl;

	Sort(vect_f);
	for (auto i : vect_f)
		cout << i << "   ";
	cout << endl;

	Sort(vect_ch);
	for (auto i : vect_ch)
		cout << i << "   ";
	cout << endl;
	cout << "------------------------" << endl;
	cout << "в) sum() – нахождения в массиве суммы положительных." << endl;
	cout << Sum(vect_i) << endl;                  //Прогоняю через функ-ю и вывожу результат, сумму данных
	cout << Sum(vect_f) << endl;
	cout << Sum(vect_ch) << endl;
	cout << "------------------------" << endl;
}