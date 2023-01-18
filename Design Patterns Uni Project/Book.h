#pragma once

#include <string>
#include <vector>

#include "Includes.h"

class Book
{
	std::string title;
	Author author;

	std::list<Chapter> chapters;

public:

	Book();
	Book(const std::string& title);


	void print();
};
