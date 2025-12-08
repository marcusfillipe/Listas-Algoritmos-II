#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float n, f;
    int i;

    scanf("%f", &n);

    frac(n, &i, &f);

    printf("Inteiro = %d, Fracao = %.3f\n", i, f);

    return 0;
}
