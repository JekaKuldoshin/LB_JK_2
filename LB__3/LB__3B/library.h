#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

class LIBRARY: public BOOK {
	protected:
		int catalog;
		bool available;

	public:
		LIBRARY() {
			catalog = 0;
			available = false;
		}

		LIBRARY(string n, string a, int p, int c, bool av): BOOK(n,a,p) {
			catalog = c;
			available = av;
		}

		void setAvail(bool a) {
			available = a;
		}

		bool getAvail() {
			return available;
		}

		string boolToTxt(bool av) {
			string a;
			if (av) {
				a = "available";
			}
			else a = "not available";
			return a;
		}

		void show() override {
			BOOK::show();
			cout << setw(8) << catalog << setw(17) << boolToTxt(available) << endl;
		}

};

void show(LIBRARY* mas) {
	for (int i = 0; i < 3; i++) {
		mas[i].show();
	}
}