#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50,60,70};
    int *ptr = arr;

    printf("%d\n", ptr[0]);      // 10
    printf("%d\n", *(ptr + 3));  // 40
    printf("%d\n", ptr[2]);      // 30

    ptr += 4;  // moves to element 50
    printf("%d\n", *ptr);        // 50
    printf("%d\n", *(ptr + 1));  // 60

    int *p2 = &arr[5];           
    printf("%d\n", *p2);         // 60

    return 0;
}
