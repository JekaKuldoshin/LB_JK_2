#include"Fun.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char c;

	do
	{
		int arr[N]; //������ ������ �� N �����


		ARR obj;  //��������� � ������ ����� ������

		obj.set(arr);    //������ ������� ��� ���������� ��������� ������� 
		cout << endl;

		cout << "���������� ������: ";
		obj.show(arr);   //������ ������� ��� ��������� ��������� �������

		cout << endl;

		cout << "����� ���. � ����. �� ������: ";
		obj.swap_ref(arr);     //������ ������� ��� ������������ ���. � ����. �� ������
		obj.show(arr);        //�-� ��� ���������

		cout << endl;

		cout << "����� ���. � ����. ����� ���������: ";
		obj.swap_indicator(arr);     //������ ������� ��� ������������ ���. � ����. ����� ���������
		obj.show(arr);              //�-� ��� ���������

		cout << "��������� ���� ��������� �������?  +/-";
		c = _getch();            //��������� ����������
		system("cls");
	} while (c != '-');

	cout << "Thanks for your attention!!" << endl;
}