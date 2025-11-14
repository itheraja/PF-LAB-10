#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

    int *ptr = &grid[0][0];

    printf("%d\n", *(ptr + 5));   // 6
    printf("%d\n", *(ptr + 9));   // 10

    int *row2 = grid[1];
    printf("%d\n", row2[-1]);     // 4
    printf("%d\n", row2[2]);      // 7

    printf("Divisible by 3:\n");
    for (int i = 0; i < 12; i++) {
        if (*(ptr + i) % 3 == 0)
            printf("%d ", *(ptr + i));
    }

    printf("\nLast Element = %d\n", *(ptr + 11));  // 12

    return 0;
}
