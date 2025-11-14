#include <stdio.h>

float processTransaction(float remaining, float amount) {
    if (amount <= remaining) {
        printf("APPROVED\n");
        return remaining - amount;
    } else {
        printf("DECLINED\n");
        return remaining;
    }
}

int main() {
    float limit = 5000, amount;

    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    limit = processTransaction(limit, amount);
    printf("Remaining Limit: %.2f\n", limit);
    return 0;
}
