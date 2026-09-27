os três principais erros nesse código são:

1) o Main() está incorreto. ele não pode começar com letra maiúscula, o main tem que ser com letra minúscula. assim: main()

2) o printf() está sem aspas. O texto precisa estar entre " ". desee jeito: printf("A idade do aluno eh: %d anos..", idade);

3) o cout << endl; não pertence à linguagem C. eles são comandos de C++. em c, se quiser pular uma linha, é só usar o printf("\n");

existe mais um erro ainda
4) depois do #include <stdlib.h>;, tem um ; desnecessário. o correto seria sem o ponto e vírgula