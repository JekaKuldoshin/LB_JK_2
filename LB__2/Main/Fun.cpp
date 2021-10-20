#include "fun.h"

UFO::UFO() {   //Конструктор по умолчанию
    sc = 0;
    size = 0;
    mhz = 0;
}

UFO::UFO(int sc, const char* na, unsigned int size, unsigned int mhz) {
    this->sc = sc;

    this->name = new char[strlen(na) + 1];
    strcpy(this->name, na);

    this->size = size;
    this->mhz = mhz;
}

void UFO::showall() const {
    cout << sc << " ";
    cout << name << " ";
    cout << size << " ";
    cout << mhz << " ";
}

void UFO::show() const {

    cout << "|" << setw(4) << sc << "|" << setw(21) << left <<
        name << setw(-21) << "|" << setw(12) << size << "|" << setw(28) << mhz << "|" << endl;

}

//void UFO::setall(int a, char* b, unsigned int c, unsigned int d) {
//    for (int i = 0; i < N; i++)
//    {
//        sc = a;
//        strcpy(name, b);
//        size = c;
//        mhz = d;
//    }
//}

void UFO::getall(int a, char* b, unsigned int& c, unsigned int& d) const
{
    bool f = false;

    if (false) {
        delete[] b;
        a = sc;

        b = new char[strlen(this->name)];
        strcpy(b, this->name);

        c = size;
        d = mhz;

        cout << a << " ";
        cout << b << " ";
        cout << c << " ";
        cout << d << " ";
        cout << "\n";
        f = true;
    }
    else {
        a = sc;

        b = new char[strlen(this->name)];
        strcpy(b, this->name);

        c = size;
        d = mhz;

        cout << a << " ";
        cout << b << " ";
        cout << c << " ";
        cout << d << " ";
        cout << "\n";
    }

}

int isvalid(int a, int b) {
    if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
    {

        system("cls");
        cout << "Ошибка! Экземпляра с таким индексом не существует.\n\n";
        cout << "Для перехода в меню нажмите любую клавишу...";
        _getch();
        return -1;
    }
    else if (a == b)
    {
        system("cls");
        cout << "Ошибка! Экземпляр не может быть записан сам в себя.\n\n";
        cout << "Для перехода в меню нажмите любую клавишу...";
        _getch();
        return -2;
    }
    return 0;
}

void shapka()
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "|                  Проекты поиска внеземных сигналов                 |" << endl;
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|Год |Научный              |Диаметр     |Рабочая частота             |" << endl;
    cout << "|    |руководитель         |антенны (м) |частота (МГц)               |" << endl;
    cout << "|----|---------------------|------------|----------------------------|" << endl;
}

void linebuild() {
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |" << endl;
    cout << "----------------------------------------------------------------------" << endl;
}


void UFO:: operator == (const UFO& obj) {

    if (this->sc != obj.sc || strcmp(this->name, obj.name) || this->size != obj.size || this->mhz != obj.mhz)
    {
        system("cls");
        cout << "Ошибка! Данные экземпляры класса не равны." << endl << endl;
        cout << "Для перехода в меню нажмите любую клавишу...";
        _getch();
    }
    //else if (strcmp(this->name, obj.name))
    //    cout << "Ошибка! Имя научного руководителя не совпадает с данными." << endl;
    //else if (this->size != obj.size)
    //    cout << "Ошибка! Диаметр антенны не совпадает с данными." << endl;
    //else if (this->mhz != obj.mhz)
    //    cout << "Ошибка! Рабочая частота не совпадает с данными." << endl;
    else
    {
        system("cls");
        cout << "Успех! Данные совпадают!" << endl << endl;
        cout << "Для перехода в меню нажмите любую клавишу...";
        _getch();
    }
}

UFO UFO::operator + (const UFO& obj) {
    UFO temp;
    delete[] temp.name;

    temp.sc = this->sc + obj.sc;

    temp.name = new char(strlen(name) + strlen(obj.name) + 2);
    strcpy(temp.name, name);
    strcat(temp.name, obj.name);

    temp.size = this->size + obj.size;
    temp.mhz = this->mhz + obj.mhz;
    return temp;
}

UFO UFO::operator = (const UFO& obj) {
    this->sc = obj.sc;
    this->name = obj.name;
    this->size = obj.size;
    this->mhz = obj.mhz;
    return *this;

}

istream& operator >>(istream& stream, UFO& obj)
{
    cout << "Введите данные: " << endl;
    cout << "Введите год -> ";
    stream >> obj.sc;
    cout << "Введите имя научного руководителя -> ";
    stream >> obj.name;
    cout << "Введите диаметр антены -> ";
    stream >> obj.size;
    cout << "Введите рабочую частоту -> ";
    stream >> obj.mhz;
    return stream;

}

ostream& operator <<(ostream& stream, UFO& obj)
{
    shapka();

    stream << "|" << setw(4) << obj.sc << "|" << setw(21) << left <<
        obj.name << setw(-21) << "|" << setw(12) << obj.size << "|" << setw(28) << obj.mhz << "|" << endl;

    linebuild();

    return stream;

}



void FunShowall(UFO obj[3]) {    //Фун-я вывода 
    int check = 0;

    cout << "Год, Имя научного руководителя, Диаметр антены, Рабочая частота: \n";
    for (int i = 0; i < N; i++) {
        check++;
        cout << check << " - ";
        obj[i].showall();
        cout << "\n";
    }

}

int UFO::operator[] (int i) {
    return strlen(name);
}

void UFO::operator()(){
    sc = 0;
    strcpy(name, "------");
    size = 0;
    mhz = 0;

}