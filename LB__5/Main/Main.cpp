//Реализуйте класс, для которого[] перегружено для реализации
//случайного чтения символов из файла.

#include "UFO.h"

int main() {
	srand(time(0));        

	string ll = "12dfg5r";    //Создал переменную для передачи в файл
	int size;                //Переменная для подсчета кол-ва элементов в строке
	size = ll.length();     //Узнаю размер строки и передаю в переменную
	

	UFO ob(ll);     //Обращаюсь к КсП и передаю строку
	write(ob);     //Обращаюсь к функцие записи в файл
	//read(ob);   
	cout << endl;
	int a = rand() % size;
	cout << endl << a << endl;
	cout << ob[a];  //В перегрузке []-скобок происход заход в 

	//функ-ю чтения с файла и передаю значение через return -> 
	//создал перегрузку символов и нахожу i-тый элемент
	
	
}