#include <stdio.h>

void soma(int *A, int B) {
    *A = *A + B;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    soma(&a, b);

    printf("A = %d, B = %d\n", a, b);

    return 0;
}
