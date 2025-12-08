#include <stdio.h>
#define PI 3.14159

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * PI * R * R;
    *volume = (4.0/3.0) * PI * R * R * R;
}

int main() {
    float R, A, V;

    scanf("%f", &R);

    calc_esfera(R, &A, &V);

    printf("Area = %.2f, Volume = %.2f\n", A, V);

    return 0;
}
