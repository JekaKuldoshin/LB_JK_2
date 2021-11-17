#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <ctime>     //Подключил библиотеку для рандомных чисел

using namespace std;

class UFO {
protected:
	string line;

public:
	
	UFO() {};        //КпоУ 
	UFO(string l);  //КсП
	string getLine();    //Get
	char operator [](int index);  //Перегрузка []
	
};

void write(UFO&obj);    //Функ-я записи в файл
string read(UFO& obj);  //Функ-я чтения из файл