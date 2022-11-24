#include "Includes.h"

class Angajat
{
public:
	Angajat();
	Angajat(std::string newNume, int newSalariu);

	std::string nume;
	int salariu;
};

Angajat::Angajat() { salariu = 0; }

Angajat::Angajat(std::string newNume, int newSalariu)
{
	nume = newNume;
	salariu = newSalariu;
}
