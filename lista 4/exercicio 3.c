#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pares = 0, impares = 0;
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }

    printf("Pares: %d\nÍmpares: %d\n", pares, impares);

    free(v);
    return 0;
}