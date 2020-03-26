#ifndef CIRCLE_H
#define CIRCLE_H

#include<string>

class Circle
{
    public:
        Circle(double r = 5, std::string c = "yellow");
        ~Circle();
        double getRadius();
        std::string getColor();
        void setRadius(double r);
        void setColor(std::string c);

        void describe();
        double getArea();
        Circle *compareArea(Circle *x);


    protected:

    private:
        double radius;
        std::string color;
};

#endif // CIRCLE_H
