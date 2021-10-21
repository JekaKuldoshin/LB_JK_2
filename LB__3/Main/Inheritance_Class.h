#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class B1                      //Базовый класс В1
{
protected:                  //Предоставляю доступ для других классов для использования переменной b1
    int b1;
public:
    B1(int b1value) :b1(b1value) {};                                //Конструктор с парам.
    virtual void show() { cout << endl << "B1 = " << b1 << endl; }  //

    /*friend ostream& operator <<(std::ostream& out, const B1& ob) {
        out << "  B1 = " << ob.b1 << endl;
        return out;
    }*/

};

class B2                        //Базовый класс В2
{
protected:
    int b2;                 //Предоставляю доступ для других классов для использования переменной b1
public: 
    B2(int b2value) :b2(b2value) {};                               //Конструктор с парам.
    virtual void show() { cout << endl << "b2 = " << b2 << endl; }  //Фун-я для вывода
};

class D1 :virtual public B1
{
protected:
    int d1;
public:
    D1(int b1value, int d1value) :B1(b1value), d1(d1value) {};  //Конструктор с парам.
    virtual void show() override  //для проверки виртуальности
    {
        cout << endl << "B1 = " << b1 << endl << "D1 = " << d1 << endl;
        //Фун-я для вывода
    }
};

class D2 :virtual protected D1
{
protected:
    int d2;
public:       
    D2(int b1value, int d1value, int d2value) :B1(b1value), D1(0, d1value), d2(d2value) {};  //Конструктор с парам.
    virtual void show() override   //для проверки виртуальности
    {
        cout << endl << "B1 = " << b1 << endl << "D1 = " << d1 << endl << "D2 = " << d2 << endl;
        //Фун-я для вывода
    }
};

class D3 :virtual public D2, private B2
{
protected:
    int d3;
public:
    D3(int b1value, int d1value, int d2value, int d3value, int b2value) :B1(b1value), D1(0, d1value), D2(0, 0, d2value), d3(d3value), B2(b2value) {}; //Конструктор с парам.
    virtual void show() override   //для проверки виртуальности
    {
        cout << endl << "B1 = " << b1 << endl << "D1 = " << d1 << endl << "D2 = " << d2 << endl << "D3 = " << d3 << endl << "B2 = " << b2 << endl;

        cout << "\n------------\n";
        cout << D3::b1 << endl;
        cout << D3::b2 << endl;
        cout << "------------\n";

        cout << "D3 = " << d3;
        cout << "   D3::d2 = " << D3::d2;
        cout << "   D2::d1 = " << D2::d1;
        cout << "   D1::b1 = " << D1::b1;
        cout << endl << "D3::b2 = " << D3::b2;
       

    } 
    /*virtual ~D3() {};*/     //Дэструктор 
};