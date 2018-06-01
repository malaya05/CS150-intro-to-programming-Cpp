/**
    @file h36.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <typeinfo>
#include <sstream>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h36.h"

// Add your implementation here

Worker::Worker(const std::string& name, double rate) 
: name(name), rate(rate)
{
    
}
Worker::~Worker() {}
double Worker::getRate()const
    {
        return rate;
    }
string Worker::getName()const
    {
        return name;
    }


SalariedWorker::SalariedWorker(const std::string& name, double rate)
    : Worker(name,rate) {}
string SalariedWorker::payInfo(int hours)const
{
    //double pay = hours < 40? rate*hours:(40*rate)+(hours-40)*rate*1.5;
ostringstream out;
    out << fixed << setprecision(2);
    out << getName() <<"(Salaried, $ " <<getRate() <<") worked " << hours << " hours. Pay: $ " <<(getRate()*40);
    return out.str();
}    



 HourlyWorker::HourlyWorker(const std::string& name, double rate)
: Worker(name, rate) {}
string HourlyWorker::payInfo(int hours)const
{
    double rate = getRate();
  double pay = hours < 40? rate*hours:(40*rate)+(hours-40)*rate*1.5;
ostringstream out;
    out << fixed << setprecision(2);
    out << getName() <<"(Hourly, $ " << rate <<") worked " << hours << " hours. Pay: $ " <<pay;
    
    return out.str();    
    
}







