#include "UFO.h"

UFO::UFO(string l){     //���
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
	ofstream fout;           //������� ���������� ��� ���������� ������� ������
	fout.open("test.txt");     //��������� ��� ������� ���� "test.txt"
	fout << obj.getLine();   //��� ��� � ��� ��� ������ ����-�, ��������� ����� Get
	                        //����� �������� ���������� �� ������ � ��������� � ����
}

string read(UFO& obj) {
	string l;                        //������ ����� ���������� ��� ������ �� �����
	ifstream infile("test.txt"); // �������� �� ������
	if (infile.is_open()) {     //���� �����������
		while (!infile.eof()) {    //���� �� ����� �����
			infile >> l;          //�������� ������ � ����������
			cout << l << endl; // ������ ���������� l 
		} 		       
		infile.close(); //�������� ����
	}
	else cout << "������! ���� �� ������!";
	return l;  //������� �������� � []
}
