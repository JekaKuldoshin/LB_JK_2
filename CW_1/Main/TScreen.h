#pragma once
#include "TObject.h"
#include "TStudent.h"

using namespace System;

using namespace System::Collections::Generic;

ref class TScreen :
	public TObject
{
public:

	//////////////////////////

	System::String^ Contract_amount;
	System::String^ Notes;
	System::String^ Type_of_contract;

	//////////////////////////

	//////////////////////////

	void SetContract(System::String^);           //���������� �� ���������� ����� ������������ 
	void SetName_ORG(System::String^);          //���������� �� ���������� ����� ������������ 
	void SetPayment_term(System::String^);     //���������� �� ���������� ����� ������������ 

	void SetContract_amount(System::String^);
	void SetNotes(System::String^);
	void SetType_of_contract(System::String^);

	TScreen(void);
};
