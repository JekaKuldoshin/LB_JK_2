#include"Fun.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char c;                             //��������� ��� ���� �����
	do
	{
		int v1, v2, v3;

		cout << "������� ����� 1 -> ";
		cin >> v1;
		cout << "������� ����� 2 -> ";
		cin >> v2;
		cout << "������� ����� 3 -> ";
		cin >> v3;

		cout << endl << "����� ����� ������: " << endl;
		fun_change(v1, v2, v3);    //������� ��� ������ ����� ������
		cout << endl << "����� ����� ���������: " << endl;
		fun_change(&v1, &v2, &v3);    //������� ��� ������ ����� ���������

		cout << "��������� ���� ��������� �������?  +/-";
		c = _getch();            //��������� ����������
		system("cls");
	} while (c != '-');

	cout << "Thanks for your attention!!" << endl;



}