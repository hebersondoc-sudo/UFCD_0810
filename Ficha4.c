/* instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	//inicializar um ficheiro e colocar um modo de abertura
	FILE* fp;
	char linha[1000]; //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//parametro 1 . localizacao de ficheiros
	//parametro 2 . modo de leitura
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		printf("Informacao do ficheiro: \n\n");

		//precisamos de uma estrutura de repeticao, pois a funcao fgets
		//le o conteudo linha a linha
		while (fgets(linha, 1000, fp) != NULL) { //enquanto não atingir o fim do ficheiro, le os elementos
			printf("%s", linha);
		}
	}

	//fechar o ficheiro que foi aberto
	fclose(fp);
}

void exercicio2() {
	//inicializar um ficheiro e colocar um modo de abertura
	FILE* fp;
	char linha[1000]; //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//parametro 1 . localizacao de ficheiros
	//parametro 2 . modo de leitura
	//fp = fopen("ficheiro1.txt", "w");

	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		char texto[50] = "onde esta o texto ";
		//funcao fputs tem 2 parametros: variavel e ficheiro
		fputs(texto, fp);
	}

	//fechar o ficheiro que foi aberto
	fclose(fp);
	
}	

void exercicio3() {
	//inicializar um ficheiro e colocar um modo de abertura
	FILE* fp;
	char linha[1000]; //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//parametro 1 . localizacao de ficheiros
	//parametro 2 . modo de leitura
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("teste.txt", "w+")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		//escrever uma frase dentro do ficheiro com fputs
		fputs("Isto e uma experiencia utilizando o tema de acesso a informacao de forma direta.", fp);

		//funcao fseek serve para posicionar no ficheiro
		//parametro 1: indicar qual o ficheiro
		//parametro 2: quantos caracteres vamos ler
		//parametro 3: qual o posicionamento (inicio, especifico ou fim)
		fseek(fp, 0, SEEK_SET);

		//funcao fgets para obter os dados
		fgets(linha, 23, fp);

		//mostrar o que foi obtido
		printf("Antes de usar a funcao fseek: \n %s \n\n", linha);

		//utilizar a funcao fseek para colocar a leitura da informacao no caracter 21
		fseek(fp, 23, SEEK_SET);
		//funcao fgets para obter a informacao
		fgets(linha, 11, fp);
		//exibir a informacao
		printf("Depois de usar o metodo SEEK_SET a partir do caracter 22: \n %s \n\n", linha);

		//utilizar o fseek e retirar 10 carcteres
		fseek(fp, -10, SEEK_CUR);
		fgets(linha, 100, fp);
		printf("Depois de usar o Seek_cur e retirar 10 caracteres na posicao atual: \n %s \n\n", linha);
	}

	//fechar o ficheiro que foi aberto
	fclose(fp);
}

void exercicio4() {
	//inicializar um ficheiro e colocar um modo de abertura
	FILE* fp;
	char linha[1000]; //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//parametro 1 . localizacao de ficheiros
	//parametro 2 . modo de leitura
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("teste.txt", "w+")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		//escrever uma frase dentro do ficheiro com fputs
		fputs("Isto e uma experiencia utilizando o tema de acesso a informacao de forma direta.", fp);

		//funcao fseek serve para posicionar o cursor dentro do ficheiro
		//parametro 1: qual o ficheiro que estão a trabalhar
		//parametro 2: de qual caracter deve comecar a ler informacao
		//parametro 3: onde coloca o cursor (Seek_set (inicio)
		//seek_cur (numa posicao a nossa escolha), seek_end (fim)
		fseek(fp, 0, SEEK_SET);

		//funcao fgets serve para obter uma quantidade de informacao
		//parametro 1: qual a variavel que vai armazenar a informacao
		//parametro 2: quantos caracteres deverá ler a partir do fseek
		//parametro 3: qual ficheiro que estao a trabalhar
		fgets(linha, 30, fp);
		printf("%s \n", linha);

		fseek(fp, -6, SEEK_CUR);
		fgets(linha, 30, fp);
		printf("%s \n", linha);

		//ler a informacao a partit do final do ficheiro
		fseek(fp, -35, SEEK_END);
		fgets(linha, 60, fp);
		printf("%s \n", linha);

	}
}

void main() {
	//exercicio1();
	//exercicio2();
	//exercicio3();
	exercicio4();
}*/