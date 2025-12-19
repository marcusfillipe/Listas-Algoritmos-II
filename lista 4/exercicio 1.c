#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *) malloc(5 * sizeof(int));

    if (v == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}