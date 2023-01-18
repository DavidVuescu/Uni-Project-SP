#include "Chapter.h"

void Chapter::print()
{
	std::cout << "\tChapter: " << name << ": \n\n";
	for (SubChapter& it : subchapters)
	{
		it.print();
	}
}
