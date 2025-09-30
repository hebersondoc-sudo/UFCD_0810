/*instrução para permitir ultrapassar a mensagem de erro
//do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

//Passo 1 - Criar a estrutura empregados
struct Empregado {
	char nome[50];
	char cargo[50];
	int idade;
	float salario;
};

//Passo 2 - Procedimento para ler as informacoes
void imprime_pessoa(struct Empregado registo) {
		
	printf("Nome: %s \n", registo.nome);
	printf("Cargo: %s \n", registo.cargo);
	printf("Idade: %d \n", registo.idade);
	printf("Nome: %.2f \n", registo.salario);
	printf("****************************\n");
}

void main() {
	//declaracao e criacao de um vetor com 3 elementos 
	//baseado na estrutura Empregado
	struct Empregado registos_empregados[3];

	//inserir valores dentro da estrutura registo (baseado na struct Empregado)
	for (int i = 0; i < 3; i++) {
		//limpar os dados do teclado que estao em memoria
		fflush(stdin);

		//pedir os dados para prencher os valores da estrutura registo a registo
		printf("\nDados do empregado %d: \n", i + 1);

		printf("Insira o nome do empregado: ");
		scanf("%s", registos_empregados[i].nome);

		printf("Insira o cargo do empregado: ");
		scanf("%s", registos_empregados[i].cargo);

		printf("Insira a idade do empregado: ");
		scanf("%d", &registos_empregados[i].idade);

		printf("Insira o salario do empregado: ");
		scanf("%f", &registos_empregados[i].salario);

		printf("****************************\n");
	}

	//estrutura de repeticao para ler a os valores dentro da 
	//estrutura registo (baseado no struct Empregados
	for (int i = 0; i < 3; i++) {
		//mostrar mensagem do registo que esta a percorrer
		printf("\n*** Registo do Empregado %d ***\n", i + 1);

		//invocar o procedimento imprime_pessoa passando o reisto
		//atual que esta a percorrer e mostrar o mesmo padrão de dados
		imprime_pessoa(registos_empregados[i]);		
	}
}*/