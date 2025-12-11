#include <stdio.h>

int main() {
	
	int soma = 0;	

	for (int i = 0; i <= 100; i++) {
		soma += i;
	}

	printf("A soma de todos os números de 0 a 100 é: %d \n", soma);
}

