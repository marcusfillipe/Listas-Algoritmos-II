#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 10) n = 10;

    double *v = malloc(n * sizeof(double));
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        v[i] = rand() % 101;

    for (int i = 0; i < 10; i++)
        printf("%.2lf ", v[i]);

    free(v);
    return 0;
}