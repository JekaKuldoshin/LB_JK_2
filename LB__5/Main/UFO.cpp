#include "UFO.h"

UFO::UFO(string l){
	line = l; 
}

string UFO::getLine() {
	return line;
}


void fun() {
	UFO obj;
	fstream fout("A.txt", ios::out | ios::app);               //��������� ������������ ����
    //��������� � ���������� � ����� �����
	fout << obj.getLine();

}

string fun2() {
	UFO obj;
	string l;
	ifstream fin("A.txt");   //�������� ���� ���������� name      ������� ������������ ���������
	while (fin >> l)
	{
		obj.getLine() = l;
	}
	return obj.getLine();
}