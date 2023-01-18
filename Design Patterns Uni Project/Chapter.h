#pragma once
#include "Includes.h"


class Chapter
{
	std::string name;
	std::list<SubChapter> subchapters;

public:
	void print();
};

