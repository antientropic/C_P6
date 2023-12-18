#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h" //This allows the Circle.h file to be linked to the Shape.h file

class Circle : public Shape //this specifies that class Circle is a descendant class of Shape
{
public:
	Circle(); //this is a default constructor
	Circle(int theRadius); //this is a constructor that accepts user-entered input to create the circle
	~Circle(); //this is a destructor
	void setRadius(int newRadius); //this is a mutator function that sets the radius to user-entered input
	double getRadius(); //this is an accessor function which returns the radius
	virtual double getArea(); //this allows the virtual function in Shape.h to be used in the implementation

private:

	int radius; //this variable stores the radius of the circle
};

#endif
