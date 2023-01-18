#include "Includes.h"
#include "Angajat_Categorii.cpp"

class Departament
{
public:
	std::string name;

	std::list<Manager> listaMgr;
	std::list<Programator> listaPrgr;
	std::list<Tester> listaTstr;

	Departament();
	Departament(std::string newNume);
	void add(Manager m);
	void add(Programator m);
	void add(Tester m);
};

Departament::Departament() {}
Departament::Departament(std::string newName) 
{
	name = newName;
}

void Departament::add(Manager m)
{
	listaMgr.push_back(m);
}
void Departament::add(Programator p)
{
	listaPrgr.push_back(p);
}
void Departament::add(Tester t)
{
	listaTstr.push_back(t);
}
