#include <stdio.h>

float studentResult(float a, float b, float c) {
    float avg = (a + b + c) / 3;

    if (avg >= 50 && a >= 40 && b >= 40 && c >= 40) {
        printf("PASS\n");
    } else {
        printf("FAIL - ");
        if (avg < 50) printf("Average below 50 ");
        if (a < 40 || b < 40 || c < 40) printf("One or more subjects below 40");
        printf("\n");
    }

    return avg;
}

int main() {
    float a, b, c;
    printf("Enter 3 marks: ");
    scanf("%f %f %f", &a, &b, &c);

    float avg = studentResult(a, b, c);
    printf("Average = %.2f\n", avg);

    return 0;
}
