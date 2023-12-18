#ifndef RECTANGLE_H //I chose to use this rather than #pragma once to improve portability.
#define RECTANGLE_H

#include "Shape.h" //this allows the Rectangle.h file to be linked to the Shape.h file

class Rectangle : public Shape //This specifies that "Rectangle" is a child class of "Shape."
{
public:
	Rectangle(); //this is a default constructor
	Rectangle(int h, int w); //this is a constructor which accepts user-entered input
	~Rectangle(); //this is a destructor
	int getHeight(); //this is an accessor function that returns the height
	int getWidth(); //this is an accessor function that returns the width
	void setHeight(int newHeight); //this is a mutator function that modifies the height
	void setWidth(int newWidth); //this Ais a mutator function that modifies the width
	virtual double getArea(); //this makes the virtual function getArea available for definition

private:
	double height; //this and the subsequent private variable allow us to specify the dimensions of a rectangle
	double width;
};

#endif
