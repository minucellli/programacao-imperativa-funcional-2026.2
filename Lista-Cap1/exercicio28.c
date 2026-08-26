#include <stdio.h>
int main() {
    int n1, n2, n3;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media = %.2f\n", media);

    return 0;
}