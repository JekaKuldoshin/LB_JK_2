
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
		cout << "����� 'SPANIEL': \n��� -> " << weight << "\n������� -> " << age <<"\n���� -> "<<color<< endl;
	}
	~SPANIEL() {
		cout << "���������� SPANIEL" << endl;
	}
};