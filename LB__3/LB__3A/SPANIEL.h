
class SPANIEL: public SOBAKA {
private:
	string color;
public:
	SPANIEL() {
		cout << "Without ifo." << endl;
	}
	SPANIEL(double w, int a, string c) {
		weight = w;
		age = a;
		color = c;
		cout << "Класс 'SPANIEL': \nВес -> " << weight << "\nВозраст -> " << age <<"\nЦвет -> "<<color<< endl;
	}
	~SPANIEL() {
		cout << "Дэструктор SPANIEL" << endl;
	}
};