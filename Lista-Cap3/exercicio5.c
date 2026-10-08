//Letra c
#include <stdio.h>

int main() {
    int i = 0;
    int j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);

        i++;
        j--;
    }

    return 0;
}