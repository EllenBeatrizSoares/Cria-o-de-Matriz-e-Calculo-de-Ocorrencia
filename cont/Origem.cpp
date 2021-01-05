#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

#define Z 10// LIMITE DA MEMORIA-MATRIZ


void matriz_cria(int, int);//Função
void matriz_le(int, int);//Função
void opcao(int, int);//Funçãõ
char matriz[Z][Z] = { 0 };//Função
int M, N;//Variavel
int caracter1(char);//Variavel
int m, m1, m2, conf;//Variavel
int caracter = -1;



int main() {
	setlocale(LC_ALL, "Portuguese");//Para usar acentos e caracteres

	while ((M < 1) || (M > 10)) {
		printf("   Digite um numero de linhas de 1 a 10 : \n   ");
		scanf_s("%d", &M);
	}

	while ((N < 1) || (N > 10))
	{
		printf("   Digite um numero de colunas de 1 a 10:  \n   ");
		scanf_s("%d", &N);
	}
	printf("________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf("   Sua matriz possui %d de linhas e %d de colunas \n", M, N);
	printf("________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado

	matriz_cria(M, N);
	matriz_le(M, N);
	opcao(M, N);
	printf("\n________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf("%d \n", caracter1(matriz[0][0]));//Para verificar o primeiro caracter da matriz
	system("pause");
}
int caracter1(char numero1) {//Para ver o primeiro caractere
	int convertido = (int)numero1;
	printf("Caracter: %c", numero1);
	printf("________________________________________________________________________________________________________________________");//Para ficar visualmente mais onganizado
	printf("Codigo: %d", numero1);
	printf("\n________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf(" Resultado da operação de");
	if (isupper(numero1)) {
		printf("divisão e de aproximadamente: ");
		return(convertido / 10);
	}
	else {
		printf(" multiplicação é de aproximadamente: ");
		return(convertido * 2);
	}
}
void matriz_cria(int M, int N) {//Para selecionar os caracteres que povoam a matriz
	
	for (int x = 0; x < M; x++) {
		for (int y = 0; y < N; y++) {
			printf("\n   Digite os caracteres [%d][%d]:", x, y);
			scanf_s("%c", &matriz[x][y]);
			fflush(stdin);
		}
	}
}
void matriz_le(int M, int N) {// Para ler a matriz povoada anteriormente
	int aux, cont;
	printf("\n________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf("\n \t\t\t\t\t\t    SUA MATRIZ É: \n");
	printf("\n________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	for (int x = 0; x < M; x++) {
		for (int y = 0; y < N; y++) {
			printf("\t\t\t\t\t\t Caractere [%d][%d]: %c \n", x, y, &matriz[x][y]);
			fflush(stdin);
			printf("________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
		}
	}
}
void opcao(int M, int N) {
	int vet[2][12] = { {0} };
	for (m = 0; m < M; m++)
		for (m1 = 0; m1 < N; m1++) {
			if (m1 == M);
			printf("\n");
			conf = false;
			for (m2 = 0; m2 <= caracter; m2++) {
				if (vet[0][m2] == matriz[m][m1]);
				{
					vet[1][m2]++;
					conf = true;
				}
			}
			if (!(conf)) {
				vet[0][++caracter] = matriz[m][m1];
				vet[1][caracter]++;
			}
		}for (m = 0; m <= caracter; m++) {
			printf("Caracter:%c--ocorrencia(s): %d\n", vet[0][m], vet[1][m]);
		}
}