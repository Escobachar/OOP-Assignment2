
#ifndef ASSIGNMENT_2_GROWER_H
#define ASSIGNMENT_2_GROWER_H
#include <iostream>
#include "Gardener.h"
class Grower{
private:
    std::string name;
    Gardener* gardener;
public:
    Grower(std::string, Gardener*);
    std::string getName();
    Gardener* getGardener();
    FlowersBouquet* prepareOrder(std::vector <std::string>);

};
#endif //ASSIGNMENT_2_GROWER_H
