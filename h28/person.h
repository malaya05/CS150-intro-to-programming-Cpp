#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
 public:
Person();
Person(const std::string&name, int age);
std::string getName() const;
int getAge() const;
private:
 std::string name;
int age;
};
#endif
