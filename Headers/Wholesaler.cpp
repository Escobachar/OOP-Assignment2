#include <iostream>
#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) :name(name),grower(grower){}

std::string Wholesaler::getName() {return name;}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers){
    std::cout << "Wholesaler " << name << " forwards the request to Grower " << grower->getName() << "." << std::endl;
    return grower->prepareOrder(flowers);
}


