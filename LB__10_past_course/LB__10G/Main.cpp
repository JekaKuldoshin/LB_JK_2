#include "Timer.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	TIMER Second(9);                //Если объект принимает 1 аргумент, значит работа с секундами
	Second.show();

	TIMER Minute_second(3, 41);    //Если объект принимает 2 аргумента, значит работа с минутами и сек.
	Minute_second.show();

	TIMER Copy(Second);         //Копируем один из оъектов
	Copy.show();



}

