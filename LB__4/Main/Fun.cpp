#include "Fun.h"

UFO::UFO() {   //Конструктор по умолчанию
    sc = 0;
    size = 0;
    mhz = 0;
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

ostream& operator <<(ostream& stream, UFO& obj)
{
   

    stream << "|" << setw(4) << obj.sc << "|" << setw(21) << left <<
        obj.name << setw(-21) << "|" << setw(12) << obj.size << "|" << setw(28) << obj.mhz << "|" << endl;

    

    return stream;

}

ostream& operator <<(ostream& stream, DB& obj)
{
    

    if (!obj.col) {
        stream << "Ошибка! Строки были не обнаруженны!" << endl;
    }
    else {
        shapka();
        for (int i = 0; i < obj.col; i++) {
            stream << *obj.rows[i];
        }
        linebuild();
    }

    stream << endl <<  "Название базы данных -> ";
    stream << obj.title << endl;   //Выводим название базы данных
    stream << "Состояние базы данных -> ";
    if (obj.sorted == 0) {
        stream << "Не отсортированная." << endl;
    }
    else {
        stream << "Отсортированная." << endl;
    }

    return stream;

}


void UFO::setall(int a, const char* b, unsigned int c, unsigned int d) {
    for (int i = 0; i < N; i++)
    {
        sc = a;
        strcpy(name, b);
        size = c;
        mhz = d;
    }
}

void DB::add_rec(int a, const char* b, unsigned int c, unsigned int d) {
    if (col >= 12) return;
    else col++;
    rows[col - 1] = new UFO(a, b, c, d);
    sorted = 0;

}

void DB::del_rec() {
    if (col <= 0) return;
    delete  rows[col - 1];
    col--;
}

void DB::sort_DB() {
    char s1;
    char s2;
    if (col < 2) return;
    UFO* temp;

    for (int i = 0; i < col; i++)
        for (int j = i + 1; j < col; j++) {
            s1 = rows[i]->getName();
            s2 = rows[j]->ret_name();
            if (s1 > s2) {
                temp = rows[i];
                rows[i] = rows[j];
                rows[j] = temp;
            }
        }
    sorted = 1;
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


DB::DB(string q) {
    title = q;
    col = 0;
    sorted = false;
}

DB::DB() {
    title = "Title";
    col = 0;
    sorted = false;
}