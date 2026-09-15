#include <stdio.h>

int main() {
    char caractere;

    do {
        caractere = getchar();
    } while (caractere == '\n');

    printf("Caractere digitado: %c\n", caractere);

    return 0;
}