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

void Book::createNewParagraph(const std::string& newParagraph)
{
    paragraphVector.push_back(newParagraph);
}
void Book::createNewImage(const std::string& newImage)
{
    imageVector.push_back(newImage);
}
void Book::createNewTable(const std::string& newTable)
{
    tableVector.push_back(newTable);
}

void Book::print()
{
    printf("Book Title: %s\n", title.c_str());
    for (auto i : paragraphVector) std::cout << i << std::endl;

    printf("\nBook Images Are: \n");
    for (auto i : imageVector) std::cout << i << std::endl;

    printf("\nBook Tables Are: \n");
    for (auto i : tableVector) std::cout << i << std::endl;

    printf("\n\n THANKS FOR READING \n");
}
