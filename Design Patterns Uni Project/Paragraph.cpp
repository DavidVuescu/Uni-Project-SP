#include "Paragraph.h"

Paragraph::Paragraph(const std::string& title)
{
	text = title;
}

void Paragraph::print()
{
	std::cout << text << "\n";
}
