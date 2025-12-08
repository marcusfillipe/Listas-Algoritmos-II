#include <stdio.h>

void lerNotas(float *n1, float *n2) {
    do {
        printf("Digite n1: ");
        scanf("%f", n1);
    } while (*n1 < 0 || *n1 > 10);

    do {
        printf("Digite n2: ");
        scanf("%f", n2);
    } while (*n2 < 0 || *n2 > 10);
}

void medias(float n1, float n2, float *simples, float *ponderada) {
    *simples = (n1 + n2) / 2;
    *ponderada = (n1 + 2*n2) / 3;
}

int main() {
    float n1, n2, ms, mp;

    lerNotas(&n1, &n2);
    medias(n1, n2, &ms, &mp);

    printf("Media simples = %.2f\n", ms);
    printf("Media ponderada = %.2f\n", mp);

    return 0;
}
