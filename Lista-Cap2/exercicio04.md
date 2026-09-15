os valores começam como:
a = 1, b = 2, c = 3 e d = 4.
após a += b + c, temos:
a = 6.

depois, em b *= c = d + 2, primeiro d + 2 resulta em 6, então c passa a valer 6. em seguida, b recebe 2 × 6, passando a valer 12

depois de d %= a + a + a, temos d = 4 % 18, portanto d = 4

na expressão d -= c -= b -= a, as operações são avaliadas da direita para a esquerda. primeiro b passa de 12 para 6; depois c passa de 6 para 0; por fim, d continua valendo 4

por último, em a += b += c += 7, primeiro c passa de 0 para 7, depois b passa de 6 para 13 e, finalmente, a passa de 6 para 19

valores finais: a = 19, b = 13, c = 7 e d = 4