#include <stdio.h>

int temperatureAlert(float temp) {
    if (temp > 35) {
        printf("HEAT ALERT\n");
        return 1;
    } else if (temp < 10) {
        printf("COLD ALERT\n");
        return 2;
    } else if (temp >= 15 && temp <= 25) {
        printf("COMFORT ZONE\n");
        return 3;
    } else {
        printf("NORMAL CONDITIONS\n");
        return 4;
    }
}

int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    temperatureAlert(temp);
    return 0;
}
