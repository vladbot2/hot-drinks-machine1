#pragma once
#include <string>

class Drink {
    std::string name;
    int price;
    int waterNeeded;
    int coffeeNeeded;
    int sugarNeeded;
public:
    Drink();
    Drink(std::string name, int price, int waterNeeded, int coffeeNeeded, int sugarNeeded);
    std::string getName() const;
    int getWaterNeeded() const;
    int getCoffeeNeeded() const;
    int getSugarNeeded() const;
};
