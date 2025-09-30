/* instrução para permitir ultrapassar a mensagem de erro

// do scanf()

#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto

#include <stdio.h>

#include <stdlib.h>

struct Animal {
	int ID;
	char Nome[25];
	int Idade;
	float Peso;
};

void Mostra_Animal(struct Animal registo) {
	printf("ID: %d \n", registo.ID);
	printf("Nome: %s \n", registo.Nome);
	printf("Idade: %d \n", registo.Idade);
	printf("Peso: %f \n", registo.Peso);
}

void exercicio1() {
	//declaracao de uma variavel do tipo "estrutura" baseada no Animal
	struct Animal registos_animais[3];

	//inserir informacoes com uma estrtutura de repeticao
	for (int i = 0; i < 3; i++) {
		/*int id = 0, idade = 0;
		float peso = 0;
		char nome[25];
		printf("Inserir Registo %d \n", i + 1);

		printf("Insira o ID: ");
		scanf("%d", &registos_animais[i].ID);

		printf("Insira o nome: ");
		scanf("%s", registos_animais[i].Nome);

		printf("Insira o idade: ");
		scanf("%d", &registos_animais[i].Idade);

		printf("Insira o peso: ");
		scanf("%f", &registos_animais[i].Peso);
	}

	//ler a informacao da estrutura registo_animal
	for (int i = 0; i < 3; i++) {
		Mostra_Animal(registos_animais[i]);
	}
}

struct Veterinario {
	int ID;
	char Nome[25];
	int Idade;
	char Cidade[25];
};

void Mostra_Veterinario(struct Veterinario registo) {
	printf("\n*** Dados do Veterinario ***\n");
	printf("ID: %d \n",registo.ID);
	printf("Nome: %s \n", registo.Nome);
	printf("Idade: %d \n", registo.Idade);
	printf("Cidade: %s \n", registo.Cidade);
}

void exercicio2() {
	struct Veterinario registos_veterinario[3];

	for (int i = 0; i < 3; i++) {
		printf("\n*** Inserir dados do Veterinario %d ***\n", i + 1);

		printf("Insira o ID: ");
		scanf("%d", &registos_veterinario[i].ID);

		printf("Insira o Nome: ");
		scanf("%s", registos_veterinario[i].Nome);

		printf("Insira a Idade: ");
		scanf("%d", &registos_veterinario[i].Idade);

		printf("Insira a Cidade: ");
		scanf("%s", registos_veterinario[i].Cidade);
	}
	for (int i = 0; i < 3; i++) {
		Mostra_Veterinario(registos_veterinario[i]);
	}
}

void main() {
	//exercicio1();
	exercicio2();
}*/