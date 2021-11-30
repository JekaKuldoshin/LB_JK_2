#pragma once
public ref class TObject          //ай
{
public:
	System::String^ TName;
	//////////////////////////

	System::String^ TContract_cipher;
	System::String^ TName_ORG;
	System::String^ TPayment_term;

	//virtual void SetName(System::String^) abstract;
	////////////////////////////

	//virtual void SetContract(System::String^) abstract;
	//virtual void SetName_ORG(System::String^) abstract;
	//virtual void SetPayment_term(System::String^) abstract;
	TObject(void);
};
