#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num1=0, num2=0, i=0, soma=0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite um n�mero: ");
        scanf("%d", &num1);

        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

        if(num2 < num1 || num1 == num2){
            printf("\nIntervalo Inv�ldio. Tente Novamente.\n");
        }

    }while(num2 < num1 || num1 == num2);

    for(i = num1; i <= num2; i++){
        soma += i;
        printf("%d", i);

        if(i < num2){
            printf(" + ");
        }else{
            printf(" = %d\n", soma);
        }
    }

    return 0;
}
