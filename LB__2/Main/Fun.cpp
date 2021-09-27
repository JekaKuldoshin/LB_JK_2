#include "fun.h"

ostream& operator<<(ostream& stream, church& o1) {
    shapka();
    cout << "|" << setw(4) << o1.sc << "|" << setw(21) << left <<
        o1.name << setw(-21) << "|" << setw(12) << o1.size << "|" << setw(28) << o1.mhz << "|" << endl;
    linebuild();
    return stream;
}

istream& operator>>(istream& stream, church& o1) {
    for (int i = 0; i < N; i++)
    {
        cout << "Название, Школа, Количество монахов, Площадь земли: \n";
        stream >> o1.sc;
        stream >> o1.name[i];
        stream >> o1.size;
        stream >> o1.mhz;
    }
    return stream;
}

int isvalid(int a, int b) {
    if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
    {
        cout << "Ошибка! Экземпляра с таким индексом не существует.\n";
        getch();
        return -1;
    }
    else if (a == b)
    {
        cout << "Ошибка! Экземпляр не может быть записан сам в себя.\n";
        getch();
        return -2;
    }
    return 0;
}

church church::operator + (church& o1) {
    church tr;
    int i, j;
    delete[] tr.name;
    
    tr.sc = sc + o1.sc;
    for (int i = 0; i < N; i++)
    {
        tr.name[i] = new char[strlen(name[i]) + strlen(o1.name[i]) + 2];
        strcpy(tr.name[i], name[i]);
        strcat(tr.name[i], o1.name[i]);
    }
    tr.size = size + o1.size;
    tr.mhz = mhz + o1.mhz;

    return tr;
}

int church::operator == (church& o1) {
    for (int i = 0; i < N; i++)
    {
        if (size != o1.size) { cout << "Данные экземпляры класса не равны."; getch(); }
        else if (ceil(mhz) != ceil(o1.mhz)) { cout << "Данные экземпляры класса не равны."; getch(); }
        else if (strcmp(name[i], o1.name[i]) != 0) { cout << "Данные экземпляры класса не равны."; getch(); }
        else if (ceil(sc) != ceil(o1.sc)) { cout << "Данные экземпляры класса не равны."; getch(); }
        else cout << "Экземпляры класса равны."; getch();
    }
    return 0;
}

church church::operator = (church& o1) {
    delete[] name;

    for (int i = 0; i < N; i++)
    {
        sc = o1.sc;
        name[i] = new char[strlen(o1.name[i]) + 2];
        if (!name) {
            cout << "Ошибка! Память не выделена.";
            exit(1);
        }
        strcpy(name[i], o1.name[i]);
 
        size = o1.size;
        mhz = o1.mhz;
    }
    return o1;
}

church::church(int a, char* b, unsigned int& c, unsigned int& d) {
    for (int i = 0; i < N; i++)
    {
        sc = a;
        name[i] = new char[strlen(b) + 1];
        strcpy(name[i], b);
        size = c;
        mhz = d;
    }
}

void church::setall(int a, char* b, unsigned int c, unsigned int d) {
    for (int i = 0; i < N; i++)
    {
        sc = a;
        strcpy(name[i], b);
        size = c;
        mhz = d;
    }
}

void church::showall(void) {
    cout << sc << " ";
    cout << name << " ";
    cout << size << " ";
    cout << mhz << " ";
}

void church::getall(int a, char* b, unsigned int& c, unsigned int& d)
{

    delete[] b;

    for (int i = 0; i < N; i++)
    {
        b = new char[strlen(name[i]) + 1];
        strcpy(b, name[i]);

        c = size;
        d = mhz;
        cout << a << " ";
        cout << b[i] << " ";
        cout << c << " ";
        cout << d << " ";
        cout << "\n";

    }
}

void shapka(void)
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "|                  Проекты поиска внеземных сигналов                 |" << endl;
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|Год |Научный              |Диаметр     |Рабочая частота             |" << endl;
    cout << "|    |руководитель         |антенны (м) |частота (МГц)               |" << endl;
    cout << "|----|---------------------|------------|----------------------------|" << endl;
}

void linebuild(void) {
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |" << endl;
    cout << "----------------------------------------------------------------------" << endl;
}