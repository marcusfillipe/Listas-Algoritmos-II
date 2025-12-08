#include <stdio.h>

void troca(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    troca(&a, &b);

    printf("A = %d, B = %d\n", a, b);

    return 0;
}
