#include "User.h"

User::User(Machine& m) : machine(m) {}

void User::ShowMenu() {
    cout << "Welcome to the Hot Drinks Machine!" << endl;
    cout << "Available drinks:" << endl;
    for (size_t i = 0; i < machine.getDrinks().size(); ++i) {
        Drink d = machine.getDrinks()[i];
        cout << i + 1 << ". " << d.getName() << " - $" << d.getPrice() << endl;
    }
}

void User::OrderDrink() {
    ShowMenu();
    int choice;
    cout << "Enter the number of the drink you want to order: ";
    cin >> choice;

    if (choice < 1 || choice > machine.getDrinks().size()) {
        cout << "Invalid choice. Please try again." << endl;
        return;
    }

    machine.prepareDrink(choice);
}
