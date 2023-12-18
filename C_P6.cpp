//Name: Clifford Anderson
//Class: CSCI221
//Instructor: Mister Horbovetz
//Project 6
//Version: 07/12/2020


#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    int test_radius; //This and the other two local variables were inserted into the program in order to test the mutator functions
    int test_height;
    int test_width;

    cout << "Hello. This program illustrates some basic properties of inheritance.\n";
    cout << "The base class for our code is Shape, while the child classes are Circle and Rectangle.\n";
    cout << "Let's begin by viewing information regarding a circle with a prepopulated radius:\n";

    Circle c(2);
    cout << "Example " << c.getName() << " has radius " <<
        c.getRadius() << " and area " <<
        c.getArea() << endl;
    system("pause");

    cout << "Let's test some more of the functions!\n";
    cout << "Please input a radius for a circle as an integer: ";
    cin >> test_radius;
    Circle c1;
    c1.setRadius(test_radius);
    cout << "Can the program correctly identify the shape? Program, what is the name of the shape?\n";
    cout << c1.getName() << endl;
    cout << "Let's see what radius you entered: ";
    cout << c1.getRadius() << endl;
    cout << "Let's calculate the area of your circle: ";
    cout << c1.getArea() << endl;
    system("pause");
    cout << "Let's move on to the next child class of Shape...that's right, it's time for fun with rectangles!\n";
    cout << "Let's begin by viewing information regarding a circle with a preopulated radius:\n";

    Rectangle r(3, 4);
    cout << "Example " << r.getName() << " has width " <<
        r.getWidth() << ", height " <<
        r.getHeight() << ", and area " <<
        fixed << showpoint << setprecision(1) << //This line of code was added so that the area displayed the decimal point and a single additional digit, per the instructions on p. 886
        r.getArea() << endl;
    system("pause");

    cout << "Testing time! We're now going to evaluate the other member functions for the child class Rectangle.\n";
    cout << "Please enter a test width followed by a test height, separated by one space (for instance, '4 8'): ";
    cin >> test_width >> test_height;
    Rectangle r1;
    r1.setWidth(test_width);
    r1.setHeight(test_height);
    cout << "Can the program correctly identify the shape? Program, what is the name of the shape?\n";
    cout << r1.getName() << endl;
    cout << "Let's see what width you entered: ";
    cout << r1.getWidth() << endl;
    cout << "Let's see what height you entered: ";
    cout << r1.getHeight() << endl;
    cout << "Let's calculate the area of your new rectangle: ";
    cout << fixed << showpoint << setprecision(1) << r1.getArea() << endl;
    system("pause");

    cout << "Thank you for using this program! Have a great 24 hour rotational period.";





    return 0;
}
