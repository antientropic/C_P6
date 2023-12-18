#include "Rectangle.h" //This line of code allows the Rectangle.cpp file to be connected to the Rectangle.h file.

Rectangle::Rectangle() : Shape("Rectangle"), width(0), height(0) //This is a default constructor
{}
Rectangle::Rectangle(int w, int h) : Shape("Rectangle"), width(w), height(h) //This is a constructor which uses end-user input to create the rectangle.
{}
Rectangle::~Rectangle() //This is a destructor.
{

}
int Rectangle::getHeight() //This is an accessor function which returns the height.
{
	return height;
}
int Rectangle::getWidth() //This is an accessor function which returns the width.
{
	return width;
}
void Rectangle::setHeight(int newHeight) //This is a mutator function to set the height to end-user entered input.
{
	height = newHeight;
}
void Rectangle::setWidth(int newWidth) //This is a mutator function to set the width to end-user entered input.
{
	width = newWidth;
}
double Rectangle::getArea() //This calculates the area of the rectangle using a simple mathematical formula.
{
	return width * height;
}
