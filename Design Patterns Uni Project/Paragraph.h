#pragma once
#include "Includes.h"

class Paragraph : public Element
{
	std::string text;

public:
	Paragraph(const std::string& title);
	void Add(Element a)
	{

	}
	void print();
};

