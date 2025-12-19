#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteio[6], bilhete[6], acertos = 0;

    for (int i = 0; i < 6; i++) scanf("%d", &sorteio[i]);
    for (int i = 0; i < 6; i++) scanf("%d", &bilhete[i]);

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (bilhete[i] == sorteio[j]) acertos++;

    int *v = malloc(acertos * sizeof(int));
    int k = 0;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (bilhete[i] == sorteio[j])
                v[k++] = bilhete[i];

    for (int i = 0; i < k; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}