#include <iostream>
#include <string>
#include <stdio.h>
#include "Circle.h"

using namespace std;

int main()
{
    //Circle c(10, "red");
    //Circle c2;
    //Circle *cp;

    double r;
    std::string c;
    char ch;
    int array_size, i = 0;

    cout << "How many circles would you like to enter?" << endl;
	cin >> array_size;

	Circle *array = new Circle[array_size];

    while (i<array_size)
    {
      cout << endl << "Would you like to enter the atributes of the circle number " << i+1 << "? [y/n]" << endl;
      cin >> ch;
      if(ch == 'y')
      {
          cout << "Enter the radius" << endl;
          cin >> r;
          array[i].setRadius(r);

          cout << "Enter the color" << endl;
          cin >> c;
          array[i].setColor(c);

          i++;
      }
      else if(ch == 'n')
      {
          i++;
      }
      else
      {
          cout << "Please enter 'y' or 'n'";
      }
    }




    cout << endl << endl;
    for (int i=0; i<array_size; i++)
    {
        cout << "Circle number: " << i+1 << endl << "-";
        array[i].describe();
        cout << endl;
    }


    /*c.setRadius(2);
    cout << c.getRadius() << endl;
    c.setColor("blue");
    cout << c.getColor() << endl;
    cout << c.getArea() << endl;

    c.describe();

    cp = c.compareArea(&c2);
    //cout << cp->getRadius() << endl;*/


    delete[] array;
    return 0;
}
