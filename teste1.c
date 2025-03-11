#include <stdio.h>

int main() {
    int x = 10;

    
    if (x > 5) {
        printf("X é maior que 5\n");
    }

    int y = 3;
    if (y % 2 == 0) {
        printf("Y é par\n");
    } else {
        printf("Y é ímpar\n");
    }


    int a = 1;
    while (a <= 5) {
        printf("%d\n", a);
        a++;
    }


    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }


    int b = 1;
    do {
        printf("%d\n", b);
        b++;
    } while (b <= 5);

    return 0;
}