#include "fun.h"

ostream& operator<<(ostream& stream, church& o1) {
    shapka();
    stream << "|" << setw(10) << o1.name << "  |  ";
    stream << setw(5) << o1.school << "|";
    stream << setw(18) << o1.count << "  |";
    stream << setw(17) << o1.square << "  |"; endl;
    linebuild();
    return stream;
}

istream& operator>>(istream& stream, church& o1) {
    cout << "Название, Школа, Количество монахов, Площадь земли: \n";
    stream >> o1.name;
    stream >> o1.school;
    stream >> o1.count;
    stream >> o1.square;
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
    delete[] tr.school;
    tr.name = new char[strlen(name) + strlen(o1.name) + 2];
    strcpy(tr.name, name);
    strcat(tr.name, o1.name);
    tr.school = new char[strlen(school) + strlen(o1.school) + 2];
    strcpy(tr.school, school);
    strcat(tr.school, o1.school);
    tr.count = count + o1.count;
    tr.square = square + o1.square;
    return tr;
}

int church::operator == (church& o1) {
    if (count != o1.count) { cout << "Данные экземпляры класса не равны."; getch(); }
    else if (ceil(square) != ceil(o1.square)) { cout << "Данные экземпляры класса не равны."; getch(); }
    else if (strcmp(name, o1.name) != 0) { cout << "Данные экземпляры класса не равны."; getch(); }
    else if (strcmp(school, o1.school) != 0) { cout << "Данные экземпляры класса не равны."; getch(); }
    else cout << "Экземпляры класса равны."; getch();
    return 0;
}

church church::operator = (church& o1) {
    delete[] name;
    delete[] school;
    name = new char[strlen(o1.name) + 2];
    if (!name) {
        cout << "Ошибка! Память не выделена.";
        exit(1);
    }
    strcpy(name, o1.name);
    school = new char[strlen(o1.school) + 2];
    if (!school) {
        cout << "Ошибка! Память не выделена.";
        exit(1);
    }
    strcpy(school, o1.school);
    count = o1.count;
    square = o1.square;
    return o1;
}

church::church(char* a, char* b, unsigned int& c, float& d) {
    name = new char[strlen(a) + 1];
    strcpy(name, a);
    school = new char[strlen(b) + 1];
    strcpy(school, b);
    count = c;
    square = d;
}

void church::setall(char* a, char* b, unsigned int c, float d) {
    strcpy(name, a);
    strcpy(school, b);
    count = c;
    square = d;
}

void church::showall(void) {
    cout << name << " ";
    cout << school << " ";
    cout << count << " ";
    cout << square << " ";
}

void church::getall(char* a, char* b, unsigned int& c, float& d)
{
    delete[] a;
    delete[] b;
    a = new char[strlen(name) + 1];
    b = new char[strlen(school) + 1];
    strcpy(a, name);
    strcpy(b, school);
    c = count;
    d = square;
    cout << a << " ";
    cout << b << " ";
    cout << c << " ";
    cout << d << " ";
    cout << "\n";
}

void shapka(void)
{
    cout << "_______________________________________________________________\n";
    cout << "|         Буддистские монастыри Японии периода Нара           |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|  Название  | Школа | Количество монахов | Площадь земли(га) |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void linebuild(void) {
    cout << "\n|-------------------------------------------------------------|\n";
}