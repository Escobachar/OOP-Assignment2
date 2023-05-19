#ifndef ASSIGNMENT_2_DELIVERYPERSON_H
#define ASSIGNMENT_2_DELIVERYPERSON_H
#include <iostream>
#include "FlowersBouquet.h"
#include "Person.h"

class DeliveryPerson{
private:
    std::string name;
public:
    DeliveryPerson(std::string);
    std::string getName();
    void deliver(Person*, FlowersBouquet*);
};
#endif //ASSIGNMENT_2_DELIVERYPERSON_H
