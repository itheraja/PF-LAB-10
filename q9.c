#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;

    int *p1 = &a, *p2 = &b, *p3 = &c;

    int *temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

    *p1 += 50;   // modifies b
    *p2 -= 30;   // modifies c
    *p3 *= 2;    // modifies a

    p1 = &c;
    p2 = &a;
    p3 = &b;

    *p1 += 10;
    *p2 -= 20;
    *p3 *= 3;

    printf("Final a = %d\n", a);
    printf("Final b = %d\n", b);
    printf("Final c = %d\n", c);

    return 0;
}
