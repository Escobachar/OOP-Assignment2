#include <iostream>
#include "Headers/DeliveryPerson.h"
#include "Headers/Florist.h"
#include "Headers/FlowerArranger.h"
#include "Headers/FlowersBouquet.h"
#include "Headers/Gardener.h"
#include "Headers/Grower.h"
#include "Headers/Person.h"
#include "Headers/Wholesaler.h"

int main() {
    Person* chris = new Person("Chris");
    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
    Person* robin = new Person("Robin");
    Gardener* garett = new Gardener("Garett");
    Grower* gray = new Grower("Gray",garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    FlowerArranger* flora = new FlowerArranger("Flora");
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Florist* fred = new Florist("Fred", watson,dylan,flora);
    chris->orderFlowers(fred,robin,flowers);
}
