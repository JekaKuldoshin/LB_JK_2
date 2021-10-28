#include "Fun.h"


int main()
{
    setlocale(LC_ALL, "rus");

    DB db1("DB1");
    db1.add_rec(1923, "Тt", 220, 3684);
    db1.add_rec(1440, "Сc", 50, 5444);
    db1.add_rec(2020, "Дd", 10, 1233);

    int n = 0;                /*год*/                /*Передаем переменные в getall*/
	char* t;                 /*имя*/
	unsigned int s;         /*диаметр*/
	unsigned int h;        /*частота*/

    int num;
    
    t = new char[10];

    do
    {
        cout << db1 << endl;
        cout << endl << setw(15) << "Add - 1" << endl; cout << setw(15) << "Delete - 2" << endl; cout << setw(15) << "Sort - 3" << endl; cout << setw(15) << "Exit - 4" << endl;
        cin >> num;
        switch (num)
        {
        case 1:
            system("cls");

            cin >> n;  /*Закомментированные строки отвечают за чтение значений*/
            cin >> t;   /*переменных с клавиатуры и записи их в поля объекта.*/
            cin >> s;  /* Для удобства работы используется инициализация через*/
            cin >> h;  /* конструктор 3-х объектов.*/
            db1.add_rec(n, t, s, h);

            system("cls");
            break;
        case 2:
            system("cls");
            db1.del_rec();
            system("cls");
            break;
        case 3:
            system("cls");
            db1.sort_DB();
            system("cls");
            break;
        case 4:
            EXIT_SUCCESS;
            exit(3);
        default:
            break;
        }
    } while (num <= 6 && num >= 0);
}
