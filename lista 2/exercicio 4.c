#include <stdio.h>
#include "pessoa.h"

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    fgets(nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    Pessoa p = criarPessoa(nome, idade);

    mostrarPessoa(p);

    return 0;
}
