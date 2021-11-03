#include <string>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <math.h>

#include <corecrt_math_defines.h>

using namespace std;

class Figure {
public:
	int x, y;
	
	Figure() {

	}
	/*set(a,b=0,c=0)*/

	virtual void show() = 0;
};