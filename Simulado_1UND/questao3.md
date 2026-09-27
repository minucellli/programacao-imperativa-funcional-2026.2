1º comando: a += b + c;

b + c  = 4 + 5 = 9

a += 9
a = 2 + 9
a = 11

Resultado:
a = 11
b = 4
c = 5
d = 10



2º comando: b *= c = d - 2;

c = d - 2
c = 10 - 2
c = 8

b *= c 
b = b * c
b = 4 * 8
b = 32

Resultado:
a = 11
b = 32
c = 8
d = 10



3º comando
d %= a + 3;

a + 3
11 + 3 = 14

d %= 14
10 % 14 = 10

Resultado:
a = 11
b = 32
c = 8
d = 10



4º comando
a += b += c += 5;

c += 5
c = 8 + 5
c = 13

b += c
b = 32 + 13
b = 45

a += b
a = 11 + 45
a = 56

Resultado final:
a = 56
b = 45
c = 13
d = 10