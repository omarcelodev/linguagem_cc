#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num, i;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um n�mero de 1 a 5: ");
    scanf("%d", &num);

    while(num < 1 || num > 5){
        if(num < 1 || num > 5){
            printf("\nNum�ro inv�lido\n");

            printf("Redigite: ");
            scanf("%d", &num);
        }
    }

    printf("N�mero informado est� correto.\n");

    return 0;
}
