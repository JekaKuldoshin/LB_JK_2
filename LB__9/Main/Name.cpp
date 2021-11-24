#include "Name.h"

Name::Name() {
	name = " ";
}

Name::Name(string n) {
	name = n;
}

string Name::getName() {
	return name;
}

Name Name::operator = (Name& obj) {
	name = obj.name;
	return name;
}

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

inline bool operator == (const Name& a, const Name& b) {
	return a.name == b.name;
}

inline bool operator < (const Name& a, const Name& b) {
	if (a.name < b.name) {
		return true;
	}
	else return false;
}

inline ostream& operator << (ostream& stream, const Name& a) {
	stream << a.name;
	return stream;
}



bool Comparator::operator () (const Name& a, const Name& b) const {
	return a.name < b.name;
}
