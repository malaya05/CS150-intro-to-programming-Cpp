/**
    @file h34.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
// REMEMBER!!! Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h34.h"
///////// Add your code here ///////////////


Circle::Circle(double r, double x , double y)
: Point(x,y) , radius(r)
{}
    double Circle::getRadius()const
    {
     return radius;   
    }
    double Circle::getArea()const
    {
     return PI * radius *radius;   
    }
    double Circle::getCircumference()const
    {
     return 2 * PI * radius;  
    }
    string Circle::toString(int decimal)const
    {
    ostringstream out;
    out << fixed<< setprecision(decimal);
    out << "Circle(radius="<<radius << ", center="<< Point::toString(decimal)<<")";    
     return out.str();   
    }
    
    
    
    
    Cylinder::Cylinder(double h, double r , double x, double y)
    : Circle(r,x,y), height(h)
    {}
    double Cylinder::getHeight()const
    {
      return height;  
    }
    double Cylinder::getArea()const
    {
     return  Circle::getArea() *2 + 2 * PI * getRadius()*height ;
    }
    double Cylinder::getVolume()const
    {
     return Circle::getArea()* height;   
    }
    string Cylinder::toString(int decimal)const
    {
     ostringstream out;
    out << fixed<< setprecision(decimal);
   out << "Cylinder(height="<<height << ", base="<< Circle::toString(decimal)<<")";    
     return out.str();  
    }
