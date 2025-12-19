#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int qtd;
    float preco;
} Produto;

int main() {
    int n;
    scanf("%d", &n);

    Produto *p = malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++)
        scanf("%d %s %d %f", &p[i].codigo, p[i].nome, &p[i].qtd, &p[i].preco);

    int maiorPreco = 0, maiorQtd = 0;

    for (int i = 1; i < n; i++) {
        if (p[i].preco > p[maiorPreco].preco) maiorPreco = i;
        if (p[i].qtd > p[maiorQtd].qtd) maiorQtd = i;
    }

    printf("Maior preço: %s\n", p[maiorPreco].nome);
    printf("Maior quantidade: %s\n", p[maiorQtd].nome);

    free(p);
    return 0;
}