#include <iostream>
#include "Includes.h"

#include "Firma.cpp"
#include "Visitor.h"

int main()
{
    Firma a("Nokia");
    Departament d("5G");

    d.add(Manager("Sefu", 10000));
    d.add(Manager("Sefu mare", 20000));
    d.add(Manager("Sefu Boss", 100000));

    d.add(Programator("Cel Bun", 15000));
    d.add(Programator("Cel Batran", 16000));
    d.add(Programator("Mircea cel batran", 99999));
    d.add(Programator("Ala rau", 3));

    d.add(Tester("Andrei", 45000));
    d.add(Tester("Mocanu", 25000));
    d.add(Tester("Vlad", 19000));
    d.add(Tester("Doina", 23000));

    a.add(d);

    Visitor recensamant;
    recensamant.visitFirma(a);
}
