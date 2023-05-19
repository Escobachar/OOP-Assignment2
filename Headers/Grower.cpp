#include <iostream>
#include "Grower.h"

Grower::Grower(std::string name, Gardener * gardener) :name(name),gardener(gardener){}

std::string Grower::getName() {return name;}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << "Grower " << name << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
    return gardener->prepareBouquet(flowers);
}