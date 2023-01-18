#pragma once
#include "Includes.h"

#include "Image.h"
#include "Paragraph.h"
#include "Table.h"

class SubChapter
{
	std::string name;
	std::list<Image> images;
	std::list<Paragraph> paragraphs;
	std::list<Table> tables;

public:
	void createNewParagraph(const std::string& newParagraph);
	void createNewImage(const std::string& newImage);
	void createNewTable(const std::string& newTable);
	void print();
};

