#pragma once

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <cassert>

#define mas_size 10


using namespace std;


template <typename T>
T min1(T first, T second) {
    assert(!isdigit(first) && !isdigit(second) && "Not a digit");


    if (first < second)
    {
        return first;
    }
    else return second;

}

template <typename T>
    T sort1(vector <T>& mas) {
    for (int i = 0; i < mas_size; i++) {
        for (int j = i + 1; j < mas.size(); j++) {
            if (mas[i] > mas[j]) {
                swap(mas[i], mas[j]);
            }
        }

    }
    return mas;
}



template <typename T>
T sum1(vector <T> mas) {
    T a = 0;
        
        for (int i = 0; i < mas.size(); i++) {
            if (mas[i] > 0) {
                a += mas[i];
            }
        }
        return a;



}