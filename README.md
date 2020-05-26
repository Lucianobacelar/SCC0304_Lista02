# SCC0304_Lista02
Lista da matéria de programação em C
Aluno: Luciano Gonçalves Bacelar da Silva 
N° USP: 11800740

1)	É esperado o inteiro 4, pois começa-se com y=0 e x=4, após y++ e x--, temos y=1 e x=3, após y+=x (y=y+x), y=4.
2)	Ao trocar &q por **q no printf, o programa funciona, pois &q é o endereço de memória de q e **p o valor.
3) D
4) O erro estava em tentar realocar uma memória estática
5)
I) 54321fim; Pois a recursão vem depois do printf(n), então a função vai escrevendo enquanto vai chegando no seu valor de quebra;
II) fim12345; Pois a recursão vem antes do printf(n), então a função primeiro chega no seu valor de quebra e depois vai escrevendo em caminho inverso;
III) 54321fim12345; Pois a função está no meio dos printfs(n), então vai juntar os dois casos acima;
	IV) fim1fim2fim1fim3fim1fim2fim1fim4fim1fim2fim1fim3fim1fim2fim1fim5fim
1fim2fim1fim3fim1fim2fim1fim4fim1fim2fim1fim3fim1fim2fim1fim; Pois o printf(n) está no meio de duas recursões, então sempre vai ter um número entre os valores de quebra(“fim”).
        6) “A” é uma string, um vetor de char. E ‘A’ é um char, um caractere sozinho.
