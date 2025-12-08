#include <stdio.h>
#include "pessoa.h"

Pessoa criarPessoa(char nome[], int idade) {
    Pessoa p;
    int i = 0;
    while (nome[i] != '\0' && i < 49) {
        p.nome[i] = nome[i];
        i++;
    }
    p.nome[i] = '\0';
    p.idade = idade;
    return p;
}

void mostrarPessoa(Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}
