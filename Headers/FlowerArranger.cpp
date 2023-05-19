#include <iostream>
#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) :name(name) {}

std::string FlowerArranger::getName() {return name;}

void FlowerArranger::arrangeFlowers(FlowersBouquet * flowers) {
    std::cout << "Flower Arranger " << name << " arranges flowers." << std::endl;
    flowers->arrange();
}
