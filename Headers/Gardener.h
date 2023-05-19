#ifndef ASSIGNMENT_2_GARDENER_H
#define ASSIGNMENT_2_GARDENER_H
#include <iostream>
#include "FlowersBouquet.h"
class Gardener{
private:
    std::string name;
public:
    Gardener(std::string);
    std::string getName();
    FlowersBouquet* prepareBouquet(std::vector<std::string>);
};
#endif //ASSIGNMENT_2_GARDENER_H
