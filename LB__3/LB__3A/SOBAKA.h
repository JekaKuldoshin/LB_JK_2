#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

class SOBAKA {
protected:
	double weight;
	int age;

public:
	SOBAKA() {
		weight = 5.0;
		age = 5;
		cout << "����������� 'SOBAKA': \n��� -> " << weight << "\n������� -> " << age << endl;
		cout << "\n-------------" << endl;
	}

	SOBAKA(double w, int a) {
		weight = w;
		age = a;
		cout << "����� 'SOBAKA': \n��� -> " << w << "\n������� -> " << a << endl;
	}
	~SOBAKA() {
		cout << "���������� SOBAKA" << endl;
	}

	void golos() {
		if (weight >= 10)
			cout << "GAV" << endl;
		else
			cout << "gav" << endl;
	}


};
