class Circle : public Figure
{
public:
	int x;
	Circle(int a = 0) {
		x = a;
	}
	double area() {
		return M_PI * x * x;
	}

	void show() override {
		cout << "���� �����: " << area() << endl;
	}


};