#include <stdio.h>

int main() {
    float comprimento, largura;
    float preco;
    float perimetro;
    float metrosArame;
    float custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame: R$ ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);

    metrosArame = perimetro * 3;

    custo = metrosArame * preco;

    printf("Metros de arame: %.2f m\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}