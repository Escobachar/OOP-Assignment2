#ifndef ASSIGNMENT_2_PERSON_H
#define ASSIGNMENT_2_PERSON_H
#include <iostream>
class Florist;
class FlowersBouquet;

class Person{
private:
    std::string name;
public:
    Person(std::string name);
    std::string getName();
    void orderFlowers(Florist*,Person*,std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
};

#endif //ASSIGNMENT_2_PERSON_H
