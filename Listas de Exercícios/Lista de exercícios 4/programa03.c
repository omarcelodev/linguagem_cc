#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um n�mero correspondente ao um m�s do ano.\n");

    printf("Digite o n�mero: ");
    scanf("%d", &num);

    switch(num){
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Mar�o"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
        case 6: printf("Junho"); break;
        case 7: printf("Julho"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default: printf("M�S INV�LIDO"); break;
    }

    return 0;
}
