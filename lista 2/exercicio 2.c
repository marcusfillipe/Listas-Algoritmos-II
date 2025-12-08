#include <stdio.h>
#include "mstring.h"

int main() {
    char s[200], s2[200];
    int op;

    printf("Digite uma string: ");
    fgets(s, 200, stdin);

    printf("1 - strlen\n");
    printf("2 - strcpy\n");
    printf("3 - strcat\n");
    printf("4 - strcmp\n");
    printf("5 - upper\n");
    printf("6 - lower\n");
    printf("7 - contar vogais\n");
    printf("8 - palindromo\n");
    printf("9 - remove espacos\n");
    printf("Opcao: ");
    scanf("%d", &op);
    getchar();

    switch(op) {
        case 1:
            printf("Tamanho: %d\n", mstrlen(s));
            break;

        case 2:
            mstrcpy(s2, s);
            printf("Copiada: %s\n", s2);
            break;

        case 3:
            printf("Digite outra string: ");
            fgets(s2, 200, stdin);
            mstrcat(s, s2);
            printf("Concatenada: %s\n", s);
            break;

        case 4:
            printf("Digite outra string: ");
            fgets(s2, 200, stdin);
            printf("Comparacao: %d\n", mstrcmp(s, s2));
            break;

        case 5:
            mstrupper(s);
            printf("Upper: %s\n", s);
            break;

        case 6:
            mstrlower(s);
            printf("Lower: %s\n", s);
            break;

        case 7:
            printf("Vogais: %d\n", mcount_vogais(s));
            break;

        case 8:
            printf("Palindromo? %d\n", meh_palindromo(s));
            break;

        case 9:
            mremove_espacos(s);
            printf("Sem espacos: %s\n", s);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
