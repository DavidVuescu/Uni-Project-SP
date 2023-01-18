#include <string>
#include <vector>
#include <iostream>

#include "Book.h"

Book::Book()
    :
    title("")
{}

Book::Book(const std::string& title)
    :
    title(title)
{}

void Book::print()
{
    std::cout << "\You are reading: " << title << ": \n\n";
    for (Chapter & it : chapters)
	{
		it.print();
	}

    printf("\n\n THANKS FOR READING \n");
}
