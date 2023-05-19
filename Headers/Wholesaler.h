
#ifndef ASSIGNMENT_2_WHOLESALER_H
#define ASSIGNMENT_2_WHOLESALER_H
#include <iostream>
#include "Grower.h"
#include "FlowersBouquet.h"
class Wholesaler{
private:
    std::string name;
    Grower* grower;
public:
    Wholesaler(std::string, Grower*);
    std::string getName();
    Grower* getGrower();
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};
#endif //ASSIGNMENT_2_WHOLESALER_H
