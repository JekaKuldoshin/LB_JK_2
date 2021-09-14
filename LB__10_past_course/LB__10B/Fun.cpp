#pragma once
#include "Fun.h"

void ARR::set(int arr[N]) {
	for (i = 0; i < N; i++)
	{
		cout << "¬ведите число массива " << c++ << " -> ";
		cin >> *(arr + i);
	}
	c = 1;

}

void ARR::show(int arr[N]) {
	for (i = 0; i < N; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

}

void ARR::swap_ref(int(&arr)[N]) {
	for (i = 0; i < N; i++) {
		if (*(arr + i) < *(arr + min))
		{
			min = i;
		}
		if (*(arr + i) > * (arr + max))
		{
			max = i;
		}
	}

	b = *(arr + min);
	*(arr + min) = *(arr + max);
	*(arr + max) = b;


}

void ARR::swap_indicator(int* arr) {
	for (i = 0; i < N; i++) {
		if (*(arr + i) < *(arr + min))
		{
			min = i;
		}
		if (*(arr + i) > * (arr + max))
		{
			max = i;
		}
	}

	b = *(arr + min);
	*(arr + min) = *(arr + max);
	*(arr + max) = b;

}

