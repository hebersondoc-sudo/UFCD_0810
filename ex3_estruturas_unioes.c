/* instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

union um_valor {
	int val_int;
	float val_long;
	double val_double;
};

struct Pessoa {
	int ID;
	char Pnome[25];
	char Unome[25];
	
	//ligar a estrutura "data" dentro de pessoa
	struct Data DataNasc;
	//logar a union dentro da pessoa
	union um_valor Peso;
};

void main() {
	//criar uma variavel estruturada com base na Pessoa
	struct Pessoa p1 = {1, "Heberson", "Ribeiro", {13,3,1985} };

	//mostrar os dados da Pessoa (c/ estrutura ligada)
	printf("ID: %d \n", p1.ID);
	printf("Primeiro Nome: %s \n", p1.Pnome);
	printf("Ultimo Nome: %s \n", p1.Unome);

	printf("Data Nascimento: %d-0%d-%d \n", p1.DataNasc.dia, p1.DataNasc.mes, p1.DataNasc.ano);

	//criar outra variavel estruturada com base na Pessoa
	struct Pessoa p2;

	//vamos pedir os dados pelo teclado
	printf("Insira o ID: ");
	scanf("%d", &p2.ID);

	printf("Insira o Primeiro Nome: ");
	scanf("%s", p2.Pnome);

	printf("Insira o Ultimo Nome: ");
	scanf("%s", p2.Unome);

	printf("Insira o dia do nascimento: ");
	scanf("%d", &p2.DataNasc.dia);

	printf("Insira o mes do nascimento: ");
	scanf("%d", &p2.DataNasc.mes);

	printf("Insira o ano do nascimento: ");
	scanf("%d", &p2.DataNasc.ano);

	//inserir valores fixos da uniao
	p2.Peso.val_int = 15;
	p2.Peso.val_double = 18.5;

	printf("ID: %d \n", p2.ID);
	printf("Primeiro Nome: %s \n", p2.Pnome);
	printf("Ultimo Nome: %s \n", p2.Unome);

	printf("Data Nascimento: %d-0%d-%d \n", p2.DataNasc.dia, p2.DataNasc.mes, p2.DataNasc.ano);

	printf("Peso val_int: %d \n", p2.Peso.val_int);
	printf("Peso val_long: %f \n", p2.Peso.val_long);
	printf("Peso val_double: %f \n", p2.Peso.val_double);
}*/
