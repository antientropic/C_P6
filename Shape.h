#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using std::string;

class Shape //this is our base/parent class
{
public:

	Shape(); //default constructor
	Shape(string name);//constructor which accepts input from child classes
	~Shape(); //destructor
	string getName(); //accessor function which returns the name of a shape
	void setName(string newName); //mutator function which allows us to set new shape names
	virtual double getArea() = 0; //this is a virtual function which will be implemented later, so it is set to 0 in the base class

private:
	string name; //this private variable is the name of a shape (e.g., "circle" or "rectangle")
};
#endif
