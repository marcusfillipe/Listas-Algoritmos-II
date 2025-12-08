#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) return 0;

    float delta = B*B - 4*A*C;

    if (delta < 0) return 0;
    if (delta == 0) {
        *X1 = -B / (2*A);
        return 1;
    }

    *X1 = (-B + sqrt(delta)) / (2*A);
    *X2 = (-B - sqrt(delta)) / (2*A);
    return 2;
}

int main() {
    float A, B, C, X1, X2;

    scanf("%f %f %f", &A, &B, &C);

    int r = raizes(A, B, C, &X1, &X2);

    if (r == 0) printf("Nao ha raizes reais\n");
    else if (r == 1) printf("Uma raiz: %.2f\n", X1);
    else printf("Duas raizes: %.2f e %.2f\n", X1, X2);

    return 0;
}
