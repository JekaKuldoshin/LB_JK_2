#include "library.h"
#include "book.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	LIBRARY book1("book1", "author1", 100, 2, true);
	LIBRARY book2("book2", "author2", 150, 3, true);
	LIBRARY book3("book3", "author3", 200, 4, false);
	LIBRARY mas[3] = { book1, book2, book3 };

	show(mas);
}