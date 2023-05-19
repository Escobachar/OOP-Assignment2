#ifndef ASSIGNMENT_2_FLOWERARRANGER_H
#define ASSIGNMENT_2_FLOWERARRANGER_H
#include <iostream>
#include "FlowersBouquet.h"
class FlowerArranger{
private:
    std::string name;
public:
    FlowerArranger(std::string);
    std::string getName();
    void arrangeFlowers(FlowersBouquet*);
};

#endif //ASSIGNMENT_2_FLOWERARRANGER_H
