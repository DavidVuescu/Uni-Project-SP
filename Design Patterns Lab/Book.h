#pragma once

#include <string>
#include <vector>

class Book
{
	std::string title;

	std::vector<std::string> paragraphVector;
	std::vector<std::string> imageVector;
	std::vector<std::string> tableVector;

public:

	Book();
	Book(const std::string& title);

	void createNewParagraph(const std::string& newParagraph);
	void createNewImage(const std::string& newImage);
	void createNewTable(const std::string& newTable);

	void print();
};
