#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha um m�s na tabela a abaixo.\n");
    printf("C�digo: | M�s do ano: \n");
    printf(" 1     ->   Janeiro\n");
    printf(" 2     ->   Fevereiro\n");
    printf(" 3     ->   Mar�o\n");
    printf(" 4     ->   Abril\n");
    printf(" 5     ->   Maio\n");
    printf(" 6     ->   Junho\n");
    printf(" 7     ->   Julho\n");
    printf(" 8     ->   Agosto\n");
    printf(" 9     ->   Setembro\n");
    printf(" 10    ->   Outubro\n");
    printf(" 11    ->   Novembro\n");
    printf(" 12    ->   Dezembro\n");

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    switch(num){
        case 1: printf("Voc� escolheu o m�s de Janeiro\n"); break;
        case 2: printf("Voc� escolheu o m�s de Fevereiro\n"); break;
        case 3: printf("Voc� escolheu o m�s de Mar�o\n"); break;
        case 4: printf("Voc� escolheu o m�s de Abril\n"); break;
        case 5: printf("Voc� escolheu o m�s de Maio\n"); break;
        case 6: printf("Voc� escolheu o m�s de Junho\n"); break;
        case 7: printf("Voc� escolheu o m�s de Julho\n"); break;
        case 8: printf("Voc� escolheu o m�s de Agosto\n"); break;
        case 9: printf("Voc� escolheu o m�s de Setembro\n"); break;
        case 10: printf("Voc� escolheu o m�s de Outubro\n"); break;
        case 11: printf("Voc� escolheu o m�s de Novembro\n"); break;
        case 12: printf("Voc� escolheu o m�s de Dezembro\n"); break;
        default: printf("Insira um m�s v�lido"); break;
    }

    return 0;
}
