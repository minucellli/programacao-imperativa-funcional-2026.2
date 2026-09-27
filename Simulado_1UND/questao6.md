a) o erro acontece porque a variável soma foi criada dentro do for. então, ela só existe dentro daquele bloco. quando o programa tenta usar soma no printf que está fora do for, ela não é mais reconhecida

b) as iterações vão de 1 até 7, mas o número 5 é pulado por causa do continue. quando chega no 8, o break encerra o laço. então, os números que realmente entram no cálculo são 1, 2, 3, 4, 6 e 7.