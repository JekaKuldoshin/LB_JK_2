#include "UFO.h"

UFO::UFO(string l){
	line = l; 
}

string UFO::getLine() {
	return line;
}


void fun() {
	UFO obj;
	fstream fout("A.txt", ios::out | ios::app);               //Подключил заголовочный файл
    //открываем и дописываем в конце файла
	fout << obj.getLine();

}

string fun2() {
	UFO obj;
	string l;
	ifstream fin("A.txt");   //Файловый ввод переменной name      функция передвижения указателя
	while (fin >> l)
	{
		obj.getLine() = l;
	}
	return obj.getLine();
}