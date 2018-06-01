/**
    @file h28.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h28.h"
// Add your implementation here

Employee::Employee() : salary(0) { }
Employee::Employee(const std::string& employeeName, double initialSalary)
: personData(employeeName, 0), salary(initialSalary)    
{
//~ personData = person(employeeName, 0);
//~ salary = initialSalary;    
}
    void Employee::setSalary(double newSalary)
{
 salary= newSalary;   
}
    double Employee::getSalary() const
{
 return salary;   
}
   string Employee::getName() const
{
 return personData.getName();   
}
