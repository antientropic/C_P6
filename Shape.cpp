#include "Shape.h" //this links Shape.cpp to Shape.h

Shape::Shape() //this is a default constructor
{
	name = "";
}

Shape::Shape(string name) //this constructor accepts the names of child classes
{
	this->name = name;
}

Shape::~Shape() //this is a destructor
{

}

string Shape::getName() //this is an accessor function which returns the name of a particular shape
{
	return name;
}

void Shape::setName(string newName) //this is a mutator function which accepts string input to set the name of a new shape
{
	this->name = newName;
}
