#pragma once
#include "TObject.h"
using namespace System;

ref class TStudent :
	public TObject
{
public:


	System::Int16 Number;
	//Name ����� �� �������� ������
	System::String^ Address;
	System::Int64 Phone_number;
	System::String^ Post;
	System::Int32 Wages;
	System::String^ Deadline;

	void SetNumber(System::Int16);
	void SetName(System::String^);   //���������� �� ���������� ����� ������������ 
	void SetAddress(System::String^);
	void SetPhone(System::Int64);
	void SetPost(System::String^);
	void SetWages(System::Int32);
	void SetDeadline(System::String^);

	////////////////////////////////


	TStudent(void);
};
