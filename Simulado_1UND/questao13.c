#include <stdio.h>

int main () {
    int n;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro, o fatorial não existe para números negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }
    return 0;
}