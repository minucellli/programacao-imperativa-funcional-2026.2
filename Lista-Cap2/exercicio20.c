#include <stdio.h>
#include <math.h>

int main() {
    double ladoA, ladoB, hipotenusa;

    printf("Digite o lado A: ");
    scanf("%lf", &ladoA);

    printf("Digite o lado B: ");
    scanf("%lf", &ladoB);

    hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);

    printf("Hipotenusa: %.2lf\n", hipotenusa);

    return 0;
}