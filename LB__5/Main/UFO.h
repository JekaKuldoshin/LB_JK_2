#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <ctime>     //��������� ���������� ��� ��������� �����

using namespace std;

class UFO {
protected:
	string line;

public:
	
	UFO() {};        //���� 
	UFO(string l);  //���
	string getLine();    //Get
	char operator [](int index);  //���������� []
	
};

void write(UFO&obj);    //����-� ������ � ����
string read(UFO& obj);  //����-� ������ �� ����