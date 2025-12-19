#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes;
    scanf("%d", &bytes);

    int n = bytes / sizeof(int);
    int *mem = calloc(n, sizeof(int));

    int op, pos, val;

    do {
        printf("1-Inserir 2-Consultar 0-Sair\n");
        scanf("%d", &op);

        if (op == 1) {
            scanf("%d %d", &pos, &val);
            mem[pos] = val;
        }
        else if (op == 2) {
            scanf("%d", &pos);
            printf("%d\n", mem[pos]);
        }
    } while (op != 0);

    free(mem);
    return 0;
}