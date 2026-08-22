#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);

    system("pause");

    return 0;
}

/* Erros:
#include <stdlib.h>; tava com um ; mas não pode
int Main{}, o correto é escrever main minúsculo
os delimitadores da função devem ser {}, mas foi usado ()
a string do printf() tava sem aspas
cout << endl; é da linguagem C++ e não C
o return 0; tava fora do main.*/