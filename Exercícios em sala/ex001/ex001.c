/*
Autor:Marcelo
Data:25/02/2025
Fun��o do programa: Calcular a divis�o de 2 numeros e apresenta-la ao
usuario.

Ex001: Escreva um prg em C que leia dois inteiros, calcule a divis�o do primeiro
pelo segundo n�mero e imprima a resposta.*/

#include <stdio.h>

int main(){
    int num1=0, num2=0;
    float result=0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    result = (float) num1 / num2;

    printf("%d / %d = %.2f", num1, num2, result);

    return 0;
}
