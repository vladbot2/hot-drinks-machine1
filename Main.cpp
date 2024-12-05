#include <iostream>
#include "Machine.h"
#include "Drink.h"
#include "User.h"

using namespace std;

int main() {
    // ��������� ��'��� Machine
    Machine coffeeMachine;

    // ����������� �����䳺��� ��� ������
    vector<Drink> availableDrinks = {
        Drink("Coffee", 2, 150, 50, 5),
        Drink("Tea", 1, 200, 0, 5),
        Drink("Cappuccino", 3, 150, 60, 5)
    };

    coffeeMachine.LoadIngredients(1000, availableDrinks);

    // ��������� ��'��� User � �������� ������
    User user(coffeeMachine);

    // ��������� ������ ����������
    user.OrderDrink();

    return 0;
}
