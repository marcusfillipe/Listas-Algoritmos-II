#include <stdio.h>
#include "conversor.h"

int main() {
    int op;
    float t;

    do {
        printf("1 - C -> F\n");
        printf("2 - F -> C\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        if (op == 0) break;

        printf("Temperatura: ");
        scanf("%f", &t);

        if (op == 1)
            printf("Resultado: %.2f\n", celsius_fahrenheit(t));
        else if (op == 2)
            printf("Resultado: %.2f\n", fahrenheit_celsius(t));
        else
            printf("Opcao invalida!\n");

    } while (op != 0);

    return 0;
}
