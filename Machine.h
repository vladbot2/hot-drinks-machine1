#pragma once
#include <iostream>
#include <vector>
#include "Drink.h"

using namespace std;

class Machine {
    vector<Drink> drinks;
    int waterLevel;
    int coffeeLevel;
    int sugarLevel;
public:
    Machine();
    void LoadIngredients(int water, const vector<Drink>& drinkOptions);
    void ShowResources();
    void prepareDrink(int choice);
};
