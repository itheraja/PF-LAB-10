#include <stdio.h>

float calculateBill(float foodCost, int people) {
    float tax = foodCost * 0.08;
    float tip = (foodCost > 50) ? foodCost * 0.15 : foodCost * 0.10;
    float service = (people > 6) ? foodCost * 0.05 : 0;

    return foodCost + tax + tip + service;
}

int main() {
    float food;
    int people;
    printf("Enter food cost and number of people: ");
    scanf("%f %d", &food, &people);

    printf("Total Bill = %.2f\n", calculateBill(food, people));
    return 0;
}
