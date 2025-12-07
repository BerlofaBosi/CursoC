#include <stdio.h>

#define NUMERO_SECRETO 42

int main() {
	// Imprime o cabeçalho do nosso jogo.
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int chute;
	int tentativa = 1;

	while (true) {

		printf("Tentativa %d. Qual é o seu chute? ", tentativa); scanf("%d", &chute);
		printf("Seu chute foi %d.\n", chute);


		// Validação do input do usuário
		if (chute < 0) {
			printf("Você não pode chutar números negativos!\n");

			continue;
		}


		// Teste lógico do valor inputado
		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;


		if ( acertou ) {
			printf("Parabens! Voce acertou em %d tentativas!\n", tentativa);
			printf("Fim de Jogo!\n");

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


		tentativa++;
	}
}
