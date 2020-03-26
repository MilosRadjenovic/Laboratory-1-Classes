#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(double r, std::string c)
{
    radius = r;
    color = c;
    //ctor
}

Circle::~Circle()
{
    //dtor
}

double Circle::getRadius()
{
    return radius;
}

std::string Circle::getColor()
{
    return color;
}

void Circle::setRadius(double r)
{
    radius = r;
}

void Circle::setColor(std::string c)
{
    color = c;
}

double Circle::getArea()
{
    return radius*radius*3.14;
}

void Circle::describe()
{
    //e.g. This is a red circle, with the radius of 10 and the area of 314.
    cout << "This is a " << color << " circle, with the radius of " << radius << " and the area of " << this->getArea() << endl;
}

Circle *Circle::compareArea(Circle *x)
{
    if(this->getArea() > x->getArea())
    {
        return this;
    }
    else
    {
        return x;
    }
}
