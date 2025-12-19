#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[30];
    int nascimento;
} Aluno;

int main() {
    int n;
    scanf("%d", &n);

    Aluno *a = malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++)
        scanf("%d %s %d", &a[i].matricula, a[i].sobrenome, &a[i].nascimento);

    for (int i = 0; i < n; i++)
        printf("%d %s %d\n", a[i].matricula, a[i].sobrenome, a[i].nascimento);

    free(a);
    return 0;
}