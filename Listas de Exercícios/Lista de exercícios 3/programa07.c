#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1 ,num2, num3;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite tr�s n�meros e lhe informaremos qual � o maior entre os tr�s.\n");

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Insira o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro n�mero: ");
    scanf("%d", &num3);

    if(num1 == num2 && num2 == num3){
        printf("Os n�meros s�o iguais");
    } else{
    if(num1 > num2 && num1 > num3){
        printf("O maior n�mero �: %d\n", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("O maior n�mero �: %d\n", num2);
    }else{
        printf("O maior n�mero �: %d\n", num3);
    }}

    return 0;
}
