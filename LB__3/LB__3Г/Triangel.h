class Triangel : public Figure {
public:
	int x, y, z;

	Triangel(int a, int b, int c) {
		if ((a + b) > c && (b + c) > a && (a + c) > b)
		{
			x = a;
			y = b;
			z = c;
		}
		else
		{
			cout << "������ ����������� �����������" << endl;
			x = 2;
			y = 2;
			z = 2;
		}
	}
	
	Triangel() {
		cout << "������ ����������� �����������" << endl;
		x = 2;
		y = 2;
		z = 2;
	}

	double area() {
		double p = (x + y + z) / 2;
		double q = sqrt((p - x) * (p - y) * (p - z));
		return q;
	}

	void show() override {
		cout << "���� ������������ -> " << area() << endl;

	}




};