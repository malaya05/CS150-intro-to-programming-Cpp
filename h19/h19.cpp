/**
    @file h19.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <vector>
#include <iostream>
// Add additional headers here
using namespace std;

string STUDENT = "amiri1";     // Add your name Blackboard/occ-email ID

#include "h19.h"

// Add your code here
void enroll(Student* s, Course* c)
{
   s->courses.push_back(c);  
 c->students.push_back(s);

    
} 

ostream& operator<<(ostream& cout, const Course* s)
{
cout << "Course Name: " << s->name << endl;
cout << "Enrolled:" << endl;
for (auto cp : s->students)
cout << "\t" << cp->name << endl;
return cout;
}


std::ostream& operator<<(std::ostream& cout, const Student* s)
{
    
 cout << "Student: " << s->name << endl;
cout << "Courses:" << endl;
for (auto cp : s->courses)
cout << "\t" << cp->name << endl;
return cout;   
}
