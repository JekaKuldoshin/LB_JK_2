#include <string>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include <corecrt_math_defines.h>

using namespace std;

class Figure {
public:
	int x, y;
	
	Figure() {

	}

	virtual void show() = 0;
};