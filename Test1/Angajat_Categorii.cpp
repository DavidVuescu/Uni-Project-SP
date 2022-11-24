#include "Angajat.cpp"
#include "Includes.h"

class Manager : public Angajat
{
public:
	Manager(std::string newNume, int newSalariu);
};
class Programator : public Angajat
{
public:
	Programator(std::string newNume, int newSalariu);
};
class Tester : public Angajat
{
public:
	Tester(std::string newNume, int newSalariu);
};


Manager::Manager(std::string newNume, int newSalariu)
{
	nume = newNume;
	salariu = newSalariu;
}
Programator::Programator(std::string newNume, int newSalariu)
{
	nume = newNume;
	salariu = newSalariu;
}
Tester::Tester(std::string newNume, int newSalariu)
{
	nume = newNume;
	salariu = newSalariu;
}
