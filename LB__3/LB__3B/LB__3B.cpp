#include "book.h"
#include "library.h"
using namespace std;

void show(Library* mas) {
	for (int i = 0; i < 3; i++)
	{
		mas[i].show();
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Library book1("book1", "author1", 100, 2, true);     //Вводим значения данных в библиотеку
	Library book2("book2", "author2", 150, 3, true);
	Library book3("book3", "author3", 200, 4, false);
	Library mas[3] = { book1, book2, book3 };          //Создали массив книг

	int menu;          //Переменная для работы в меню
	string a;         //Переменная для работы с вводом поиска/замены (меню)
	bool b = false;  //Булевая переменная для проверки на правильность ввода названия книг


	while (true) {            // Цикл для меню
		system("cls");
		cout << "                                        Меню                                      |" << endl;
		cout << "----------------------------------------------------------------------------------|" << endl;
		cout << "1 - Просмотр наличия книг в библиотеке    | 3 - Бронирование книги в библиотеке   |" << endl;
		cout << "2 - Поиск книг в библиотеке               | 4 - Возвращение книги в библиотеку    |" << endl;
		cout << "----------------------------------------------------------------------------------|" << endl;
		cout << "                                          5 - Выход                               |" << endl;
		cout << "----------------------------------------------------------------------------------|" << endl;
		cout << "Сделайте свой выбор -> ";
		cin >> menu;

		switch (menu)
		{
		case 1:                         /*Работа Show*/
			system("cls");

			show(mas);

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			system("cls");
			break;

			///////////////////

		case 2:
			system("cls");
			show(mas);

			cout << "\nВведите название книги для поиска во всем списке: ";
			cin >> a;

			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				if (mas[i].getName() == a)         //Если имя проходит проверку... ->
				{
					b = true;
					if (mas[i].getAvail() == true) {        //Проверка книг на наличее в библиотеке
						cout << "Эта книга на данный момент доступна в библиотеке" << endl;
						break;
					}
					else cout << "На данный момент книги нет в наличии" << endl;
				}
			}
			if (!b) {
				cout << "Книги с таким именем нет в списке" << endl;
			}


			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			break;

			///////////////////

		case 3:
			system("cls");

			show(mas);

			cout << "\nВведите название книги которую хотите взять: ";
			cin >> a;
			for (int i = 0; i < 3; i++)
			{
				if (mas[i].getName() == a)           //Проверка на правильность ввода и сравнивание данных
				{
					b = true;
					if (mas[i].getAvail() != true) {       //Проверка книг на наличее в библиотеке
						system("cls");
						cout << "\nНа данный момент книги нет вналичии" << endl;
						break;
					}
					else {
						mas[i].setAvail(false);     //Установка брони
						system("cls");
						cout << "Успех! Книга была забронированна." << endl;

					}

				}
			}
			if (!b) {
				system("cls");
				cout << "Книги с таким именем нет в списке" << endl;
			}

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			break;

			///////////////////

		case 4:
			system("cls");

			show(mas);

			cout << "\nВведите название книги которую хотите взять: ";
			cin >> a;
			for (int i = 0; i < 3; i++)
			{
				if (mas[i].getName() == a)
				{
					b = true;
					if (mas[i].getAvail() != false) {
						system("cls");
						cout << "\nНа данный момент книга вналичии" << endl;
						break;
					}
					else {
						mas[i].setAvail(true);
						system("cls");
						cout << "Успех! Книга была возвращена в библиотеку." << endl;

					}

				}
			}
			if (!b) {
				system("cls");
				cout << "Книги с таким именем нет в списке" << endl;
			}

			cout << "\n\nДля перехода в меню нажмите любую клавишу...";
			_getch();
			break;

			///////////////////

		case 5:
			system("cls");
			cout << "Thanks for your attention!!" << endl << endl;
			return 0;
			break;

			///////////////////

		default:
			system("cls");
			cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
			_getch();
			break;
		}
	}
}