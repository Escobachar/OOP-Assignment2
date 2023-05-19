#ifndef ASSIGNMENT_2_FLORIST_H
#define ASSIGNMENT_2_FLORIST_H
#include <iostream>
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Wholesaler.h"

class Person;

class Florist{
private:
    std::string name;
    Wholesaler* wholesaler;
    DeliveryPerson* deliveryPerson;
    FlowerArranger* flowerArranger;
public:
    Florist(std::string,Wholesaler*,DeliveryPerson*, FlowerArranger*);
    std::string getName();
    void acceptOrder(Person*, std::vector<std::string>);
    Wholesaler* getWholesaler();
    DeliveryPerson* getDeliveryPerson();
    FlowerArranger* getFlowerArranger();
};
#endif //ASSIGNMENT_2_FLORIST_H
