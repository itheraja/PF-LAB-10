#include <stdio.h>

float shippingCost(float amount, float weight) {
    if (amount > 100) return amount; // free shipping

    if (weight < 2) return amount + 10;
    else if (weight <= 5) return amount + 15;
    else return amount + 20;
}

int main() {
    float amt, wt;
    printf("Enter order amount and weight: ");
    scanf("%f %f", &amt, &wt);

    printf("Total Cost = %.2f\n", shippingCost(amt, wt));
    return 0;
}
