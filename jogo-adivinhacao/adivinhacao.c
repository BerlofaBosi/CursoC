#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main() {
	// Imprime o cabeçalho do nosso jogo.
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int numeroSecreto = 42;

	int chute;

	for (int i = 1; i <= NUMERO_TENTATIVAS; i++) {

		printf("Tentativa %d. Qual é o seu chute? ", i); scanf("%d", &chute);
		
		printf("Seu chute foi %d.\n", chute);


		bool acertou = chute == numeroSecreto;
		bool maior = chute > numeroSecreto;
		bool menor = chute < numeroSecreto;

		if ( acertou ) {
			printf("Parabens! Voce acertou!\n");
			printf("Jogue de novo, voce e bom!\n");
			break;
		}

		else if ( maior ) {
			printf("Seu chute foi maior que o numero secreto.\n");
		}

		else {
			printf("Seu chute foi menor que o numero secreto.\n");
		}

		printf("Voce errou!\n");
		printf("Nao desanime, basta tentar de novo...\n");
	}
}
