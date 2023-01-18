#pragma once
#include "Firma.cpp"

class Visitor
{
private:
	int salariuManager;
	int salariuProgramator;
	int salariuTester;

	int total;

public:
	void visitFirma(Firma f);
	void visitDepartament(Departament d);
	void visitManager(Manager mgr);
	void visitProgramator(Programator prog);
	void visitTester(Tester test);
};

