#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha uma esta��o de acordo com a tabela abaixo.\n\n");
    printf("C�digo: | Esta��o do ano: \n");
    printf(" 1     ->   Primavera\n");
    printf(" 2     ->   Ver�o\n");
    printf(" 3     ->   Outono\n");
    printf(" 4     ->   Inverno\n");


    printf("\nDigite o n�mero: ");
    scanf("%d", &num);

    switch(num){
        case 1: printf("Esta��o escolida: Primavera\n"); break;
        case 2: printf("Esta��o escolida: Ver�o\n"); break;
        case 3: printf("Esta��o escolida: Outono\n"); break;
        case 4: printf("Esta��o escolida: Inverno\n"); break;
        default: printf("Esta��o inv�lida\n"); break;
    }

    return 0;
}
