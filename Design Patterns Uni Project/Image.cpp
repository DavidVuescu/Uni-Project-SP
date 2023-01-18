#include "Image.h"

Image::Image(const std::string& title)
{
	imageName = title;
}

void Image::print()
{
	std::cout << imageName << "\n";
}
