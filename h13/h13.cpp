/**
    @file h13.cpp
    @author your name here
    @date what day and meeting time
*/
#include <string>
#include <cmath>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h13.h"
// Add your implementation here
    /**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 */
    void get(istream& in, Point& p)
    {
     char no;
     in >> p.x >> no >> p.y;
        
        
    }

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to print on
 * @param p the Point to print
 */
    void print(ostream& out, const Point& p)
        {
            
         out << "("<< p.x << ", " << p.y << ")" ;
         //out << '(' << p.x << ", " << p.y << ')';
        }

        
        
        double distanceBetween(const Point& a, const Point& b)
        {
            
//~ int xdiff =  a.x - b.x;
//~ int ydiff = a.y - b.y;
//~ return sqrt(xdiff * xdiff + ydiff * ydiff);
            double pythg = pow(b.x - a.x, 2) + pow(b.y - a.y,2);
          double distance = sqrt(pythg);  
         return distance;   
        }

/** 
 * Given two points, find their midpoint.
 * @param a the first point. 
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b)
        {
         int x = (a.x + b.x)/2;    
         int y = (a.y + b.y)/2; 
            Point mid; //= {x, y}; 
            mid.x = x;  
            mid.y = y; 
         return mid;   
        }
  
 double perimeter(const Triangle& t)
        {
       double side1 =  distanceBetween(t.p1, t.p2);
       double side2 = distanceBetween(t.p1, t.p3);    
       double side3 =  distanceBetween(t.p2, t.p3); 
                return side1 + side2 +side3;
        }
