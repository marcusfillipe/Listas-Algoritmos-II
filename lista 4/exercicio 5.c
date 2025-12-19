#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, cont = 0;
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
        if (v[i] % x == 0) cont++;

    printf("Multiplos de %d: %d\n", x, cont);

    free(v);
    return 0;
}