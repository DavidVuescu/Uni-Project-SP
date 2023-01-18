#include "Table.h"

Table::Table(const std::string& totle)
{
	title = totle;
}

void Table::print()
{
	std::cout << title << "\n";
}
