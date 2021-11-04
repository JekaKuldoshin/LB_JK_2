#include <fstream>
#include <iostream>

using namespace std;

class Comp
{
public:
	double a, b;
	
	Comp() {}
	Comp(double q, double w);
	
	void print();

};

void write(Comp& ob, string name);
double read(double* mass, string name);