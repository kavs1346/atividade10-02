#include <stdio.h>

int main() {
    int x = 10;

    // IF e IF-ELSE
    if (x > 5) {
        printf("X é maior que 5\n");
    }

    int y = 3;
    if (y % 2 == 0) {
        printf("Y é par\n");
    } else {
        printf("Y é ímpar\n");
    }

    // While Loop
    int a = 1;
    while (a <= 5) {
        printf("%d\n", a);
        a++;
    }

    // For Loop
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // Do-While Loop
    int b = 1;
    do {
        printf("%d\n", b);
        b++;
    } while (b <= 5);

    return 0;
}