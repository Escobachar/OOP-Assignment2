
#ifndef ASSIGNMENT_2_FLOWERSBOUQUET_H
#define ASSIGNMENT_2_FLOWERSBOUQUET_H
#include <iostream>
class FlowersBouquet{
private:
    std::vector<std::string> bouquet;
    bool is_arranged;
public:
    FlowersBouquet(std::vector<std::string>);
    std::vector<std::string> getBouquet();
    void arrange();
};
#endif //ASSIGNMENT_2_FLOWERSBOUQUET_H
