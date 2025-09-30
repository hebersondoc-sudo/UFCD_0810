/*instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	//Declaracao de vetor com 5 elementos
	int numeros[5];

	//colocar manualmente dados no vetor
	numeros[0] = 12;
	numeros[1] = 21;
	numeros[2] = 7;
	numeros[3] = 9;
	numeros[4] = 31;

	//mostrar valores dentro do vetor (forma manual)
	printf("Valor do indice 0: %d \n", numeros[0]);
	printf("Valor do indice 1: %d \n", numeros[1]);
	printf("Valor do indice 2: %d \n", numeros[2]);
	printf("Valor do indice 3: %d \n", numeros[3]);
	printf("Valor do indice 4: %d \n", numeros[4]);		
}

void exercicio2() {
	//Declaracao de um vetor com 5 elementos
	int lista[5];

	//estrutura de repeticao automatica "for" para automatizar o processo da obtencao da informacao
	//Parametro 1: valor minimo a processar
	//Parametro 2: condicao maxima que pode atingir a estrutura
	//Parametro 3: incrementar +1 de cada vez que repetir a estrutura de repeticao	
	for (int i = 0; i <= 4; i++) {
		//mostrar qual o indice que esta a percorrer atualmente
		printf("Valor do indice %d: ", i);
		//pedir o valor no teclado para inserir no indice do vetor atual
		scanf("%d", &lista[i]);
	}

	//como ler o vetor e mostrar os valores dos indices
	for (int i = 0; i <= 4; i++) {
		//mostrar qual o indice que esta a percorrer atualmente
		printf("Valor do indice %d: %d \n", i, lista[i]);		
	}	
}

void exercicio3() {
	//criacao do vetor decimais com 6 digitos
	float notas[6];

	//declaracao de variaveis
	int positivos = 0;
	int negativos = 0;

	//estrutura de repeticao FOR para pedir os valores decimais
	for (int i = 0; i < 6; i++) {		
		printf("Valor do indice %d: ", i);
		//pedir o valor no teclado para armazenar o vetor
		scanf("%f", &notas[i]);
	}

	//estrutura de repeticao para ler os valores do vetor
	for (int i = 0; i < 6; i++) {
		//estrutura de decisaodupla para avaliar se o valor que
		//estiver a percorrer é positivo ou é negativo
		if (notas[i] < 0) {			
			negativos++; //negativos = negativos + 1;
		}
		else {
			positivos++; //positivos = positivos + 1;
		}
	}
	//mostrar quantos positivos e negativos detetou
	printf("Numero de positivos:  %d e negativos: %d", positivos, negativos);
}

void exercicio4() {
	//criacao de vetor inteiro com 5 elementos
	int valores[5];

	//estrutura de repeticao para inserir o valor no vetor
	for (int x = 0; x < 5; x++) {
		//declaracao de variavel so para correr dentro do FOR
		int  valor = 0;

		//estrutura de repeticao "do ... while" que vai servir 
		//para verificar se or numeros sao diferentes de 1
		do {
			printf("Insira o valor para o indice %d: ", x);
			scanf("%d", &valor);
		} while (valor == 1);

		//Só depois de ultrapassar a condição do "do ... while"
		//é que vamos assumir o novo valor no vetor, ou seja,
		//o valor introduzido foi diferente de 1
		valores[x] = valor;
	}
	//estrutura de repeticao para inserir o valor no vetor
	for (int x = 0; x < 5; x++) {
		printf("Valor do indice %d e: %d \n", x, valores[x]);
	}
}

void exercicio5() {
	//declaracao do vetor com 5 elementos
	int numeros[5];

	//estrutura de repeticao FOR para inserir valores no vetor
	for (int i = 0; i < 5; i++) {
		printf("Insira o valor do indice %d: ", i);
		scanf("%d", &numeros[i]);
	}

	//estrutura de repeticao FOR para ler os valores
	for (int i = 0; i < 5; i++) {
		printf("Valor do indice %d e: %d \n", i, numeros[i]);

		//estrutura de decisao simples para verificar se
		//o elemento do indice tem o valor 5
		if (numeros[i] == 5) {
			printf("Este indice tem o valor 5! \n");
		}
	}
}

//funcao para verificar se existe um numero igaul no vetor
//e retornar 2 respostas:
//"0", caso não encontre nenhum numero repetido
//"1", caso encontre numero repetido
int verifica_numeros(int vetor[5], int valor) {
	for (int i = 0; i < 5; i++) {
		//estrutura de decisao simples para verificar
		//se existe o numero repetido dentro do vetor
		if (vetor[i] == valor) {
			return 1;
		}
	}

	//se não acontecer nada dentro da repeticao do FOR
	//significa que não encontrou nenhum numero repetido
	return 0;
}

//procedimento para calcular a media dos numeros de um vetor
void calcula_media(int vetor[5]) {
	//percorrer todos os elementos do vetor
	float soma = 0;

	//estrutura de repeticao para percorrer o vetor que recebemos
	for (int i = 0; i < 5; i++) {
		//somar todos os numeros que existem no vetor
		soma = soma + vetor[i];		
	}

	//mostrar o resultado da media
	printf("Media dos numeros no vetor: %.2f", (soma / 5));
}

void exercicio6() {
	//declaracao do vetor com 5 elementos
	int vetor[5];

	//estrutura de repeticao FOR para inserir valores no vetor
	for (int i = 0; i < 5; i++) {
		//declarar variavel para armazenar valor
		int  valor = 0;

		//estrutura de repeticao "do ... while" para receber 
		//e depois avaliar o valor inserido no teclado e deve
		//repetir o codigo se a funcao "verifica_numeros" retornar "1"
		do {
			//pedir a informacao ao utilizador
			printf("Insira o valor para o indice %d: ", i);
			scanf("%d", &valor);
		} while (verifica_numeros(vetor, valor) == 1);

		//Só depois de ultrapassar a condição do "do ... while"
		//é que vamos assumir o novo valor no vetor, ou seja,
		//o valor introduzido foi diferente de 1
		//logo, não existe numero repetido
		vetor[i] = valor;
	}
	//invocar o procedimento e mostrar a media
	calcula_media(vetor);
}

void exercicio7() {
	//declarar um array multidemensional (matriz)
	//uma matriz é composta por linhas e colunas
	int matriz[3][3];

	//como a matriz tem linhas e colunas, precisamos de 2 estruturas 
	//de repeticao para processar as mesmas

	//para inserir valores na matriz
	for (int i = 0; i < 3; i++) { //percorrer as linhas da matriz
		for (int j = 0; j < 3; j++) { //percorre as colunas das linnhas que esta a processar
			//a intersecao do  valor da linha [i] e da coluna [j] permite colocar o valor da celula
			printf("Insira o valor da linha %d e da coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}

	}

	//ler valores da matriz
	for (int i = 0; i < 3; i++) { //percorrer as linhas da matriz
		for (int j = 0; j < 3; j++) { //percorre as colunas das linnhas que esta a processar
			printf("Valor na linha %d e coluna %d: %d \n", i, j, matriz[i][j]);
		}
	}
}

void main() {
	//exercicio1();
	//exercicio2();
	//exercicio3();
	//exercicio4();
	//exercicio5();
	//exercicio6();
	//exercicio7();

}*/