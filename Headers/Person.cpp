#include "Person.h"
#include "Florist.h"
#include "FlowersBouquet.h"

Person::Person(std::string name) : name(name){}

std::string Person::getName() {
    return name;
}

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers){
    std::cout << name << " orders flowers to " << recipient->getName() << " from Florist " << florist->getName() << ": ";
    for(int i = 0; i < flowers.size(); i++){
        if (i != flowers.size() - 1) {
            std::cout << flowers[i] << ", ";
        }
        else{
            std::cout << flowers[i] << "." << std::endl;
        }
    }
    florist->acceptOrder(recipient,flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet){
    std::vector<std::string> flowers = bouquet->getBouquet();
    std::cout << name << " accepts the flowers: ";
    for(int i = 0; i < flowers.size(); i++){
        if (i != flowers.size() - 1) {
            std::cout << flowers[i] << ", ";
        }
        else{
            std::cout << flowers[i] << "." << std::endl;
        }
    }
}