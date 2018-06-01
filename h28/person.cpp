#include <string>
using namespace std;
#include "person.h"

Person::Person() : age(0) {}
Person::Person(const std::string&name, int age)
     : name(name), age(age) {}
         string Person::getName() const {return name;}
         int Person::getAge() const {return age;}
