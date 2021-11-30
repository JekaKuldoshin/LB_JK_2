#include "pch.h"
#include "TScreen.h"


//////////////////////////

void TScreen::SetContract(System::String^ s) {
	TContract_cipher = s;
}

void TScreen::SetName_ORG(System::String^ s) {
	TName_ORG = s;
}

void TScreen::SetPayment_term(System::String^ s) {
	TPayment_term = s;
}

//////////////////////////

//////////////////////////

void TScreen::SetContract_amount(System::String^ s) {
	Contract_amount = s;
}

void TScreen::SetNotes(System::String^ s) {
	Notes = s;
}

void TScreen::SetType_of_contract(System::String^ s) {
	Type_of_contract = s;
}

TScreen::TScreen(void)
{

}
