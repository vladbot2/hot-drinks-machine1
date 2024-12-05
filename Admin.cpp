#include "Admin.h"
#include <iostream>
using namespace std;

void Admin::adminMenu(Machine& machine) {
    int choice;
    while (true) {
        cout << "\n--- Admin Menu ---\n";
        cout << "1. Add Resources\n";
        cout << "2. View Resources\n";
        cout << "3. Set Drink Prices\n";
        cout << "4. View and Clear Cash\n";
        cout << "5. Exit Admin Mode\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) break;

        switch (choice) {
        case 1: {
            int water, coffee, sugar;
            cout << "Enter water (ml): ";
            cin >> water;
            cout << "Enter coffee (g): ";
            cin >> coffee;
            cout << "Enter sugar (g): ";
            cin >> sugar;
            machine.addResources(water, coffee, sugar);
            break;
        }
        case 2:
            machine.showResources();
            break;
        case 3: {
            int index, newPrice;
            machine.displayDrinks();    
            cout << "Enter drink number: ";
            cin >> index;
            cout << "Enter new price: ";
            cin >> newPrice;
            machine.setDrinkPrice(index, newPrice);
            break;
        }
        case 4:
            cout << "Cash: " << machine.getCash() << " UAH\n";
            machine.clearCash();
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}
