#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL, n = 0, x;

    do {
        scanf("%d", &x);
        if (x >= 0) {
            v = realloc(v, (n+1) * sizeof(int));
            v[n++] = x;
        }
    } while (x >= 0);

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}