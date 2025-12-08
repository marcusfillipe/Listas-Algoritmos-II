#include <stdio.h>
#include "operacoes.h"

int main() {
    int op, a, b, r;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &op);

    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case 1: r = soma(a,b); break;
        case 2: r = subtrai(a,b); break;
        case 3: r = multiplica(a,b); break;
        case 4: r = divide(a,b); break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    printf("Resultado: %d\n", r);
    return 0;
}
