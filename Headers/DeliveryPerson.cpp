#include <iostream>
#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) :name(name) {}

std::string DeliveryPerson::getName() {return name;}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* bouquet) {
    std::cout << "Delivery Person " << name << " delivers flowers to " << person->getName() << "." << std::endl;
    person->acceptFlowers(bouquet);
}
