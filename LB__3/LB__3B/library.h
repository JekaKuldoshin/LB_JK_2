#include <string>
#include <iomanip>

using namespace std;

class Library : public Book
{
protected:
	int catalog;
	bool available;

public:
	Library() {             // по”м
		catalog = 0;
		available = false;
	}
	Library(string n, string a, int p, int c, bool av) : Book(n, a, p) {      // сѕараметрами
		catalog = c;
		available = av;
	}
	void setAvail(bool a) {
		available = a;
	}
	bool getAvail() {
		return available;
	}
	string boolToTxt(bool av) {          //¬ыводит одно из двух 
		string a;
		if (av) {
			a = "в наличии";
		}
		else a = "нет в наличии";
		return a;
	}
	void show() override {
		Book::show(); cout << setw(8) << catalog << setw(17) << boolToTxt(available) << endl;
	}
	
};