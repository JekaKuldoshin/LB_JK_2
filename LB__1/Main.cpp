#include "fun.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	char name[10];
	unsigned int size;
	unsigned int mhz;
	short i;                 //���������� ��� �������� ���������

	UFO obj[N];
	
	for (i = 0; i < N; i++)
	{
		cout << "������ ������� SET!   |\n";
		cout << "----------------------|\n\n";
		cout << "������� ������: " << endl;
		cout << "������� ��� -> ";
		cin >> year;
		cout << "������� ��� �������� ������������ -> ";
		cin >> name;
		cout << "������� ������� ������ -> ";
		cin >> size;
		cout << "������� ������� ������� -> ";
		cin >> mhz;
		obj[i].set(year, name, size, mhz);
		system("cls");
	}
	system("cls");

	//////////////

	cout << "������ ������� SHOW!  |\n";
	cout << "----------------------|\n\n";

	printUP();

	for (i = 0; i < N; i++)
		obj[i].show();

	printDOWN();
	cout << "\n";

	_getch();
	system("cls");

	//////////////

	cout << "������ ������� GET � SHOW!   |\n";
	cout << "-----------------------------|\n\n";

	printUP();
	for (i = 0; i < N; i++)
	{
		obj[i].get(year, name, size, mhz);
		obj[i].show();
	}
	printDOWN();
	cout << "\n";

	_getch();

	name[0] = '\0';
	return 0;
}