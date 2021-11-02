#include "Fun.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    DB db1 ("DB1");
    db1.add_rec(1923, "Петров", 220, 3684);
    db1.add_rec(1440, "Шинкаренко", 50, 5444);
    db1.add_rec(2020, "Буто", 10, 1233);

    int sc = 0;                /*год*/                /*Передаем переменные в getall*/
	char* n;                 /*имя*/
	unsigned int s;         /*диаметр*/
	unsigned int m;        /*частота*/

    int menu;       //Переменные для меню
    
    n = new char[10];

        while (true) {            // Цикл для меню
            system("cls");
            cout << "                     Меню                                 |" << endl;
            cout << "----------------------------------------------------------|" << endl;
            cout << "1 - Вывести базу       | 3 - Удалить запись               |" << endl;
            cout << "2 - Добавить запись    | 4 - Сортировать базу по алфавиту |" << endl;
            cout << "----------------------------------------------------------|" << endl;
            cout << "                    5 - Выход                             |" << endl;
            cout << "----------------------------------------------------------|" << endl;
            cout << "Сделайте свой выбор -> ";
            cin >> menu;
        
        switch (menu)
        {
        case 1:
            system("cls");

            cout << db1 << endl;
            
            cout << "\nНажмите клавишу для продолжения...";
            _getch();

            break;

        case 2:
            system("cls");

            cout << "Введите данные: " << endl;
            cout << "Введите год -> ";
            cin >> sc;  /*Закомментированные строки отвечают за чтение значений*/
            cout << "Введите имя научного руководителя -> ";
            cin >> n;   /*переменных с клавиатуры и записи их в поля объекта.*/
            cout << "Введите диаметр антены -> ";
            cin >> s;  /* Для удобства работы используется инициализация через*/
            cout << "Введите рабочую частоту -> ";
            cin >> m;  /* конструктор 3-х объектов.*/
            db1.add_rec(sc, n, s, m);

            system("cls");
            break;
        case 3:
            system("cls");
            db1.del_rec();
            system("cls");
            break;
        case 4:
            system("cls");
            db1.sort_DB();
            system("cls");
            break;
        case 5:
            EXIT_SUCCESS;
            exit(3);
        default:
            break;
        }
    }
}
