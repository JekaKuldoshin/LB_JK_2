#pragma once
#include "Number.h"

class Name {
public:
	string name;


	Name();
	Name(string n);

	string getName();

	Name operator = (Name& obj);
	
	friend bool operator == (const Name& a, const Name& b);
	friend bool operator < (const Name& a, const Name& b);
	friend ostream& operator << (ostream& stream, const Name& a);

};

inline bool operator == (const Name& a, const Name& b);
inline bool operator < (const Name& a, const Name& b);
inline ostream& operator << (ostream& stream, const Name& a);

struct Comparator {
	using is_transporent = true_type;
	bool operator()(const Name& a, const Name& b) const;
};
