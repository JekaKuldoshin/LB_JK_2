class Rectangel : public Figure {
public:
	int x, y;

	Rectangel(int a, int b) {
		x = a;
		y = b;
	}

	int area() {
		return x * y;
	}

	void show() override {

		cout << "Зона прямоугольника -> "<< area() << endl;
	}


};