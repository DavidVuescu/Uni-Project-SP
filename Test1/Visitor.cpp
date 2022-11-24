#include <iostream>
#include "Visitor.h"

void Visitor::visitFirma(Firma f)
{
	for (std::list<Departament>::iterator it = f.listDepartamente.begin(); it != f.listDepartamente.end(); ++it)
	{
		visitDepartament(*it);
	}
	std::cout << "Salariu Manageri: " << salariuManager;
	std::cout << "Salariu Programatori: " << salariuProgramator;
	std::cout << "Salariu Testeri: " << salariuTester;
	std::cout << "Salarii Totale: " << total;
}
void Visitor::visitDepartament(Departament d)
{
	for (std::list<Manager>::iterator it = d.listaMgr.begin(); it != d.listaMgr.end(); ++it)
	{
		visitManager(*it);
	}
	for (std::list<Programator>::iterator it = d.listaPrgr.begin(); it != d.listaPrgr.end(); ++it)
	{
		visitProgramator(*it);
	}
	for (std::list<Tester>::iterator it = d.listaTstr.begin(); it != d.listaTstr.end(); ++it)
	{
		visitTester(*it);
	}
}

void Visitor::visitManager(Manager m)
{
	salariuManager = salariuManager + m.salariu;
	total = total + m.salariu;
}
void Visitor::visitProgramator(Programator p)
{
	salariuProgramator = salariuProgramator + p.salariu;
	total = total + p.salariu;
}
void Visitor::visitTester(Tester t)
{
	salariuTester = salariuTester + t.salariu;
	total = total + t.salariu;
}

