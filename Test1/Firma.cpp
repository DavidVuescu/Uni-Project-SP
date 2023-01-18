#include "Departament.cpp";
#include "Includes.h"

class Firma
{
public:
	std::string name;

	std::list<Departament> listDepartamente;

	Firma();
	Firma(std::string newName);

	void add(Departament d);
};

Firma::Firma() {}
Firma::Firma(std::string newName)
{
	name = newName;
}

void Firma::add(Departament d)
{
	listDepartamente.push_back(d);
}
