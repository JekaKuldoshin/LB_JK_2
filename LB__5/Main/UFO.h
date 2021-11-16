#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <ctime>

using namespace std;

class UFO {
protected:
	string line;

public:
	
	UFO() {};        // по” 
	UFO(string l);  // сѕ
	string getLine();    //Get
	char operator [](int index);  //ѕерегрузка []
	
};

void write(UFO&obj);    //‘унк-€ записи в файл
string read(UFO& obj);  //‘унк-€ чтени€ из файл