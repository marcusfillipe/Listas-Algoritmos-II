#include <stdio.h>

int somaDobro(int *A, int *B) {
    *A *= 2;
    *B *= 2;
    return *A + *B;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int resultado = somaDobro(&a, &b);

    printf("A = %d, B = %d, Soma = %d\n", a, b, resultado);
}
