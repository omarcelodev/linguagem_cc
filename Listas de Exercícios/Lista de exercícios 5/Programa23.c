
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num1, num2, cont;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if(num2 < num1){
        printf("Intervalo Inv�lido\n");
    } else{
        for(cont = num1; cont <= num2; cont = cont + 1){
            printf("%d\n", cont);
        }
    }

    return 0;
}





