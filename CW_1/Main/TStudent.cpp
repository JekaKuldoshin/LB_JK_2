#include "pch.h"
#include "TStudent.h"


void TStudent::SetName(String^ name) {
	TName = name;
}

void TStudent::SetNumber(System::Int16 num) {
	Number = num;
}

void TStudent::SetAddress(System::String^ add) {
	Address = add;
}

void TStudent::SetPhone(System::Int64 num) {
	Phone_number = num;
}

void  TStudent::SetPost(System::String^ add) {
	Post = add;
}

void TStudent::SetWages(System::Int32 num) {
	Wages = num;
}

void  TStudent::SetDeadline(System::String^ add) {
	Deadline = add;
}


///////////////////////////////////////////////


TStudent::TStudent(void)
{

}
