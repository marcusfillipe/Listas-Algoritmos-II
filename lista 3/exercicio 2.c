#include <stdio.h>

int main() {
    int a, b;

    if (&a > &b)
        printf("Maior endereco: %p\n", (void*)&a);
    else
        printf("Maior endereco: %p\n", (void*)&b);

    return 0;
}

