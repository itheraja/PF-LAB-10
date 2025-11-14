#include <stdio.h>

float rentalCost(int days, float km) {
    float base = days * 40;
    float allowance = days * 100;

    float extra = (km > allowance) ? (km - allowance) * 0.25 : 0;

    float total = base + extra;

    if (days >= 7) total *= 0.90; // 10% discount

    return total;
}

int main() {
    int days;
    float km;
    printf("Enter rental days and km driven: ");
    scanf("%d %f", &days, &km);

    printf("Total Rental Cost = %.2f\n", rentalCost(days, km));
    return 0;
}
