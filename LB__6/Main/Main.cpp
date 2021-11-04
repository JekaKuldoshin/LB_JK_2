#include "Class.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Service obj[5];        //Зафиксировал кол-в данных

    string nam = "";      //Переменная для названия услуги
    bool q = false;      //Если False программа не дает зайти в сортировку
    int menu;           //Переменная для меню
   
    while (true) {            // Цикл для меню
        system("cls");
        cout << "                     Меню                   |" << endl;
        cout << "--------------------------------------------|" << endl;
        cout << "1 - Добавить записи   | 3 - Изменить данные |" << endl;
        cout << "2 - Сортировать базу  | 4 - Вывести базу    |" << endl;
        cout << "--------------------------------------------|" << endl;
        cout << "                   5 - Выход                |" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Сделайте свой выбор -> ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            change(obj[0], "name5", 34, 1550000 , 45588.2353);
            change(obj[1], "name4", 14, 2200000, 157142.857);
            change(obj[2], "name3", 26, 3650000, 140384.615);
            change(obj[3], "name2", 89, 6600000, 74157.3034);
            change(obj[4], "name1", 114, 8700000, 76315.79);
            system("cls");
            
            print(obj, 5);
            cout << "\n\nДля перехода в меню нажмите любую клавишу...";
            _getch();

            q = true;       //Если False программа не дает зайти в сортировку
            break;
        case 2:
            system("cls");

            if (q)              //Если False программа не дает зайти в сортировку
            {
                sort(obj, 5);       //5 - кол-во элементов в базе
                print(obj, 5);
            }
            else
            {
                cout << "Ошибка! База данных пуста." << endl;
            }
            cout << "\n\nДля перехода в меню нажмите любую клавишу...";
            _getch();
            system("cls");
            break;
        case 3:
            system("cls");
            print(obj, 5);

            int d;
            int count; long cost; double cost_price;
            cout << "Введите номер ячейки: "; cin >> d;
            --d;
            cout << "Имя: "; cin >> nam;
            cout << "Кол-в: "; cin >> count;
            cout << "Стоимость: "; cin >> cost;
            cout << "Себестоимость: "; cin >> cost_price;
            change(obj[d], nam, count, cost, cost_price);

            q = true;
            system("cls");
            cout << "Успех! Данные были внесены" << endl;
            cout << "\nДля перехода в меню нажмите любую клавишу...";
            _getch();
            system("cls");
            break;
        case 4:
            system("cls");
            print(obj, 5);
            cout << "\nДля перехода в меню нажмите любую клавишу...";
            _getch();
            break;
        case 5:
            EXIT_SUCCESS;
            exit(3);
        default:
            system("cls");
            cout << "Ошибка!! Пункт меню отсутствует!!!\nДля перехода в меню нажмите любую клавишу... " << endl;
            _getch();
            break;
            break;
        }
    }

}