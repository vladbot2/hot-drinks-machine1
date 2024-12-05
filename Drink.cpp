#include "Drink.h"

Drink::Drink() : name(""), price(0), waterNeeded(0), coffeeNeeded(0), sugarNeeded(0) {}

Drink::Drink(std::string name, int price, int waterNeeded, int coffeeNeeded, int sugarNeeded)
    : name(name), price(price), waterNeeded(waterNeeded), coffeeNeeded(coffeeNeeded), sugarNeeded(sugarNeeded) {}

std::string Drink::getName() const { return name; }
int Drink::getWaterNeeded() const { return waterNeeded; }
int Drink::getCoffeeNeeded() const { return coffeeNeeded; }
int Drink::getSugarNeeded() const { return sugarNeeded; }
