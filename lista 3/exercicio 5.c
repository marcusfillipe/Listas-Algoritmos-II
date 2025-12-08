#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a < *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    ordena(&a, &b);

    printf("Maior = %d, Menor = %d\n", a, b);
    return 0;
}
