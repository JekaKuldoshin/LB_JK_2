#include "Timer.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	TIMER Second(9);                //���� ������ ��������� 1 ��������, ������ ������ � ���������
	Second.show();

	TIMER Minute_second(3, 41);    //���� ������ ��������� 2 ���������, ������ ������ � �������� � ���.
	Minute_second.show();

	TIMER Copy(Second);         //�������� ���� �� �������
	Copy.show();



}

