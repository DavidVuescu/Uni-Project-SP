#include "SubChapter.h"

void SubChapter::print()
{
	std::cout << "\tSubchapter: " << name << ": \n\n";
	for (Image & it : images)
	{
		it.print();
	}
	for (Paragraph & it : paragraphs)
	{
		it.print();
	}
	for (Table & it : tables)
	{
		it.print();
	}
}


void SubChapter::createNewParagraph(const std::string& newParagraph)
{
	Paragraph para(newParagraph);
	paragraphs.push_back(para);
}
void SubChapter::createNewImage(const std::string& newImage)
{
	Image img(newImage);
	images.push_back(img);
}
void SubChapter::createNewTable(const std::string& newTable)
{
	Table tbl(newTable);
	tables.push_back(tbl);
}
