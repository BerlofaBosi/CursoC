// Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas variáveis. 

#include <stdio.h>

int main() {
	int x, y;

	printf("Insira o valor de X: "); scanf("%d", &x);
	printf("Insira o valor de Y: "); scanf("%d", &y);

	printf("A multiplicacao entre eles é: %d\n", x*y);
}

