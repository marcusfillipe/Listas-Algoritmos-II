#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'x';

    int *pa = &a;
    float *pb = &b;
    char *pc = &c;

    printf("Antes:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    *pa = 20;
    *pb = 9.9;
    *pc = 'Z';

    printf("Depois:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}
