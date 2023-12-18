#include "Circle.h" //This allows the Circle.cpp file to be linked to the Circle.h file.

Circle::Circle() : Shape("Circle"), radius(0) //this is a default constructor
{}

Circle::Circle(int theRadius) : Shape("Circle"), radius(theRadius) //This is a constructor which accepts user-entered input.
{}

Circle::~Circle() //this is a destructor
{

}

void Circle::setRadius(int newRadius) //this is a mutator function which accepts user-entered input to specify the radius
{
	this->radius = newRadius;
}

double Circle::getRadius() //this is an accessor function which returns the radius
{
	return radius;
}

double Circle::getArea() //this function calculates the area of a circle using the standard mathematical formula
{
	return 3.14159 * radius * radius;
}
