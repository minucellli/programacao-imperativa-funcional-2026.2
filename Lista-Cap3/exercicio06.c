//Letra c
#include <stdio.h>

int main() {
    int x = 0;

    while (1) {
        if (x >= 5) {
            x++;
            break;
        }

        x++;
    }

    printf("Valor final de x = %d\n", x);

    return 0;
}