#include "UFO.h"

UFO::UFO(string l){     //КсП
	line = l; 
}

string UFO::getLine() {     //Get
	return line;
}

//string UFO::setNew_line(string n) {
//	new_line = n;
//	return new_line;
//}

char UFO::operator[](int index) {     
	UFO obj;
	return read(obj)[index];
}


void write(UFO& obj) {
	ofstream fout;           //Создаем переменную для управления потоком вывода
	fout.open("test.txt");     //Открываем или создаем файл "test.txt"
	fout << obj.getLine();   //Так как у нас это просто функ-я, обращаюсь через Get
	                        //чтобы получить переменную из класса и записываю в файл
}

string read(UFO& obj) {
	string l;                        //Создал новую переменную для записи из файла
	ifstream infile("test.txt"); // открытие на чтение
	if (infile.is_open()) {     //Если открывается
		while (!infile.eof()) {    //Идти до конца файла
			infile >> l;          //Переношу данные в переменную
			cout << l << endl; // вывожу переменную l 
		} 		       
		infile.close(); //Закрываю файл
	}
	else cout << "Ошибка! Файл не найден!";
	return l;  //передаю значение в []
}
