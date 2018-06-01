/**
    @file h28.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
    DO NOT MODIFY IN ANY WAY
*/
#ifndef H28_H_
#define H28_H_

// DO NOT MODIFY THIS FILE IN ANY WAY

#include <string>
#include "person.h"  // You created this in lab

class Employee
{
public:
    Employee();
    Employee(const std::string& employeeName, double initialSalary);
    void setSalary(double newSalary);
    double getSalary() const;
    std::string getName() const;
private:
    Person personData;
    double salary;
};


#endif
