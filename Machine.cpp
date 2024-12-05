#include "Machine.h"

Machine::Machine() : waterLevel(0), coffeeLevel(0), sugarLevel(0) {}

void Machine::LoadIngredients(int water, const vector<Drink>& drinkOptions) {
    waterLevel = water;
    drinks = drinkOptions;
    // ���������� ����� �����䳺��� ��� ��������
    coffeeLevel = 1000; // ��� ��������
    sugarLevel = 100;
}

void Machine::ShowResources() {
    cout << "Water level: " << waterLevel << " ml" << endl;
    cout << "Coffee level: " << coffeeLevel << " g" << endl;
    cout << "Sugar level: " << sugarLevel << " g" << endl;
}

void Machine::prepareDrink(int choice) {
    if (choice < 1 || choice > drinks.size()) {
        cout << "Invalid choice.\n";
        return;
    }

    Drink selectedDrink = drinks[choice - 1];
    if (waterLevel < selectedDrink.getWaterNeeded() ||
        coffeeLevel < selectedDrink.getCoffeeNeeded() ||
        sugarLevel < selectedDrink.getSugarNeeded()) {
        cout << "Not enough resources to make " << selectedDrink.getName() << ".\n";
        return;
    }

    // ������� ����� �����䳺���
    waterLevel -= selectedDrink.getWaterNeeded();
    coffeeLevel -= selectedDrink.getCoffeeNeeded();
    sugarLevel -= selectedDrink.getSugarNeeded();

    cout << "Your " << selectedDrink.getName() << " is ready!\n";
}
