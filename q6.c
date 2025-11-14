#include <stdio.h>

float calcTax(float income, float *netIncome) {
    float tax = 0;

    if (income > 50000) {
        tax = (income - 50000) * 0.20 + 3000;  // 3000 = 10% of 30k
    } else if (income > 20000) {
        tax = (income - 20000) * 0.10;
    }

    *netIncome = income - tax;
    return tax;
}

int main() {
    float income, net;
    printf("Enter gross income: ");
    scanf("%f", &income);

    float tax = calcTax(income, &net);

    printf("Tax = %.2f\nNet Income = %.2f\n", tax, net);
    return 0;
}
