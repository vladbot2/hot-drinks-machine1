#include <iostream>
#include "Machine.h"
#include "Drink.h"
#include "User.h"

using namespace std;

int main() {
    // Створюємо об'єкт Machine
    Machine coffeeMachine;

    // Завантажуємо інгредієнти для машини
    vector<Drink> availableDrinks = {
        Drink("Coffee", 2, 150, 50, 5),
        Drink("Tea", 1, 200, 0, 5),
        Drink("Cappuccino", 3, 150, 60, 5)
    };

    coffeeMachine.LoadIngredients(1000, availableDrinks);

    // Створюємо об'єкт User і передаємо машину
    User user(coffeeMachine);

    // Запускаємо процес замовлення
    user.OrderDrink();

    return 0;
}
