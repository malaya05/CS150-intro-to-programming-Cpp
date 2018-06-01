/*
 * h36.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H36_H_
#define H36_H_

#include <string>
/////// Declare all of your classes here ////////////////
class Worker
{
 std::string name;
double rate;
public:
Worker(const std::string& name, double rate);
virtual~Worker();
double getRate()const;
std::string getName()const;
virtual std::string payInfo(int hours)const=0;
};

class SalariedWorker : public Worker
{
    public:
    SalariedWorker(const std::string& name, double rate);
std::string payInfo(int hours)const;    
};


class HourlyWorker : public Worker
{
    public:
    HourlyWorker(const std::string& name, double rate);
    std:: string payInfo(int hours)const;
    
};


#endif
