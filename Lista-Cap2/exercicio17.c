#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;
    double area, circunferencia;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area: %.2lf\n", area);
    printf("Circunferencia: %.2lf\n", circunferencia);

    return 0;
}