#pragma once
#include "Fun.h"

void fun_change_ref(int& v1, int& v2, int& v3) {

	int min, max;
	min = v1;
	max = v2;

	if (v2 < min) min = v2;
	if (v2 > max) max = v2;
	if (v3 < min) min = v3;
	if (v3 > max) max = v3;
	if (v1 < min) min = v1;
	if (v1 > max) max = v1;

	if (v1 == min) v1 = max;
	else if (v1 == max) v1 = min;
	if (v2 == min) v2 = max;
	else if (v2 == max) v2 = min;
	if (v3 == min) v3 = max;
	else if (v3 == max) v3 = min;

	cout << "Число 1 ->" << v1 << endl;
	cout << "Число 2 ->" << v2 << endl;
	cout << "Число 3 ->" << v3 << endl;
}

void fun_change_pointer(int* v1, int* v2, int* v3) {

	int min, max;
	min = *v1;
	max = *v2;

	if (*v2 < min) min = *v2;
	if (*v2 > max) max = *v2;
	if (*v3 < min) min = *v3;
	if (*v3 > max) max = *v3;
	if (*v1 < min) min = *v1;
	if (*v1 > max) max = *v1;

	if (*v1 == min) *v1 = max;
	else if (*v1 == max) *v1 = min;
	if (*v2 == min) *v2 = max;
	else if (*v2 == max) *v2 = min;
	if (*v3 == min) *v3 = max;
	else if (*v3 == max) *v3 = min;

	cout << "Число 1 ->" << *v1 << endl;
	cout << "Число 2 ->" << *v2 << endl;
	cout << "Число 3 ->" << *v3 << endl;
}
