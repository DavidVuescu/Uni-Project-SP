#include "Book.h"

int main()
{
    Book DiscoTitanic("Disco Titanic");

    DiscoTitanic.createNewParagraph("Paragrapth 1");
    DiscoTitanic.createNewParagraph("Paragrapth 2");
    DiscoTitanic.createNewParagraph("Paragrapth 3");

    DiscoTitanic.createNewImage("Image 1");
    DiscoTitanic.createNewParagraph("Paragrapth 4");
    DiscoTitanic.createNewTable("Table 1");
    DiscoTitanic.createNewParagraph("Paragrapth 5");

    DiscoTitanic.print();
}
