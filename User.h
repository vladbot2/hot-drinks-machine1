#pragma once
#include <iostream>
#include "Machine.h"
#include "Drink.h"

using namespace std;

class User {
    Machine& machine;
public:
    User(Machine& m);
    void ShowMenu();
    void OrderDrink();
};
