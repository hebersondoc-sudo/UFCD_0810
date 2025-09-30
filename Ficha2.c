/* instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void teste_ponteiros() {
	//declaracao de variaveis
	int x = 1, y = 2;

	//declaracao uma variavel do tipo pnteiro
	int* p;

	//colocar em "p" o endereco de "x" e "p" agora aponta para a variavel "x"
	p = &x;
	printf("Valor de p: %d  \n", p);

	//coloca em "y" o valor do objeto apontado por "p" e "y" agora vale 1
	y = *p;
	printf("Valor de y: %d  \n", y);

	//colocar no objeto apontado por "p" o valor 0 e "x" agora vale 0
	*p = 0;
	printf("Valor de x: %d  \n", x);
}

void exercicio1() {
	int num1 = 7;
	int* num2;

	//utilizar o "&" para copiar o endereço da variavel "num1" para o apontador num2
	num2 = &num1;

	//mostrar as informacoes da variavel e apontador
	printf("Valor de num1: %d \n", num1);
	printf("Valor de num2: %d \n", num2);
	printf("Valor de num2 com *: %d \n", *num2);
}

void exercicio2() {
	//declaracao de variaveis
	int valor1 = 5;
	float valor2 = 10.5;
	char letra = 'a';

	//variaveis do tipo ponteiros
	int *ponteiro_valor1;
	float *ponteiro_valor2;
	char *ponteiro_letra;


	ponteiro_valor1 = &valor1;
	ponteiro_valor2 = &valor2;
	ponteiro_letra = &letra;

	//mostrar os valores dos ponteiros
	printf("Valor do ponteiro_valor1: %d \n", *ponteiro_valor1);
	printf("Valor do ponteiro_valor2: %.2f \n", *ponteiro_valor2);
	printf("Valor do ponteiro_letra: %c \n", *ponteiro_letra);

	// mudar os valores dos ponteiros nas variaveis
	*ponteiro_valor1 = 15;
	*ponteiro_valor2 = 31.2;
	*ponteiro_letra = 'f';

	//mostrar os valores dos ponteiros
	printf("Valor do ponteiro_valor1 depois da operacao: %d \n", *ponteiro_valor1);
	printf("Valor do ponteiro_valor2 depois da operacao: %.2f \n", *ponteiro_valor2);
	printf("Valor do ponteiro_letra depois da operacao: %c \n", *ponteiro_letra);
}

void exercicio3() {
	//declarar variavel
	int x = 5, y = 7;

	if (&x > &y) {
		printf("Valor de x: %d e valor de y: %d, logo x e maior", &x, &y);
	}
	else {
		printf("Valor de x: %d e valor de y: %d, logo y e maior", &x, &y);
	}
}

//procedimento do exercicio 4
void verifica_numeros(int v1, int v2) {

	//
	if (v1 > v2) {
		printf("v1 e maior");
	}
	else if (v2 > v1) {
		printf("v2 e maior");
	}
	else {
		printf("Numeros iguais");
	}
}

void exercicio4() {
	int valor1 = 10, valor2 = 15;

	//invocar procedimento para verificar qual dos numeros é maior
	verifica_numeros(valor1, valor2);
}

//subprograma do exercicio 5
void recebe_valores(int *n1, int *n2) {
	//MOSTRAR OS VALORES NO SUBPROGRAMA
	printf("ANTES: Valor de n1: %d \n", *n1);
	printf("ANTES: Valor de n2: %d \n", *n2);

	*n1 = 30;
	*n2 = 75;

	//MOSTRAR OS VALORES NO SUBPROGRAMA
	printf("Valor de n1: %d \n", *n1);
	printf("Valor de n2: %d \n", *n2);
}
void exercicio5() {
	int num1 = 5, num2 = 10;

	//invocar subprograma para receber a informacao
	recebe_valores(&num1, &num2);

	//MOSTRAR OS VALORES NO SUBPROGRAMA
	printf("Valor de num1: %d \n", num1);
	printf("Valor de num2: %d \n", num2);
}

void main() {
	//teste_ponteiros();
	//exercicio1();
	//exercicio2();
	//exercicio3();
	//exercicio4();
	exercicio5();
}*/