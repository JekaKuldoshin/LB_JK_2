#include "fun.h"

UFO::UFO() {   //����������� �� ���������
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
        cout << "������! ���������� � ����� �������� �� ����������.\n\n";
        cout << "��� �������� � ���� ������� ����� �������...";
        _getch();
        return -1;
    }
    else if (a == b)
    {
        system("cls");
        cout << "������! ��������� �� ����� ���� ������� ��� � ����.\n\n";
        cout << "��� �������� � ���� ������� ����� �������...";
        _getch();
        return -2;
    }
    return 0;
}

void shapka()
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "|                  ������� ������ ��������� ��������                 |" << endl;
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|��� |�������              |�������     |������� �������             |" << endl;
    cout << "|    |������������         |������� (�) |������� (���)               |" << endl;
    cout << "|----|---------------------|------------|----------------------------|" << endl;
}

void linebuild() {
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "|����������: ����������� ������� �� 2 ����� �� ���������� ��������   |" << endl;
    cout << "----------------------------------------------------------------------" << endl;
}


void UFO:: operator == (const UFO& obj) {

    if (this->sc != obj.sc || strcmp(this->name, obj.name) || this->size != obj.size || this->mhz != obj.mhz)
    {
        system("cls");
        cout << "������! ������ ���������� ������ �� �����." << endl << endl;
        cout << "��� �������� � ���� ������� ����� �������...";
        _getch();
    }
    //else if (strcmp(this->name, obj.name))
    //    cout << "������! ��� �������� ������������ �� ��������� � �������." << endl;
    //else if (this->size != obj.size)
    //    cout << "������! ������� ������� �� ��������� � �������." << endl;
    //else if (this->mhz != obj.mhz)
    //    cout << "������! ������� ������� �� ��������� � �������." << endl;
    else
    {
        system("cls");
        cout << "�����! ������ ���������!" << endl << endl;
        cout << "��� �������� � ���� ������� ����� �������...";
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
    cout << "������� ������: " << endl;
    cout << "������� ��� -> ";
    stream >> obj.sc;
    cout << "������� ��� �������� ������������ -> ";
    stream >> obj.name;
    cout << "������� ������� ������ -> ";
    stream >> obj.size;
    cout << "������� ������� ������� -> ";
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



void FunShowall(UFO obj[3]) {    //���-� ������ 
    int check = 0;

    cout << "���, ��� �������� ������������, ������� ������, ������� �������: \n";
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