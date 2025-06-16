/*
   Programa: introducaoProgramacao.c
   Autor: professor Sandro Teixeira Carvalho
   Objetivo: ilustrar o uso de tipos de dados primitivos da linguagem C,
             entrada e sa�da de dados, simula��o de tipo de dado l�gico em C,
             coment�rios, uso de bibliotecas, operador tern�rio etc.
   Observa��o: sem valida��es de dados de entrada pois ser� estudado nas pr�ximas aulas.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>

int main(void) {
	// Declara��o de vari�veis
	char nome[30];
	int idade;
	float salario;
	char sexo;
	bool vip;

	// Prepara��o do ambiente
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitleA("Introducao a Programacao");
	system("color f0");

	printf("Entre com seus dados pessoais\n\n");

	// Entrada de dados
	printf("Nome completo: ");
	gets(nome);

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Sal�rio R$: ");
	scanf("%f", &salario);

	setbuf(stdin, 0);  // limpa buffer de entrada padr�o
	printf("Sexo (m/f): ");
	sexo = getchar();

	setbuf(stdin, 0);
	printf("VIP (s/n): ");
	vip = (tolower(getchar()) == 's' ? true : false);

	// Imprime dados digitados para confer�ncia
	printf("\n\nDados informados:\n");
	printf("\nNome completo: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nSal�rio R$: %.2f", salario);
	printf("\nSexo: %s", sexo == 'm' ? "masculino" : "feminino");
	printf("\nVIP: %s\n\n\n", vip ? "sim" : "n�o");

    // Encerra o programa sinalizando para o S.O. sucesso na execu��o
    // getch();  // Pausa opcional. Descomente quando desejado
	return 0;
}

