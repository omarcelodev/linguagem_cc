#include <stdio.h>
#include <locale.h>

int main(){
    int num1=0, num2=0, num3=0, soma=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calular a soma de tr�s n�meros.\n\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\n%d + %d + %d = %d\n\n", num1, num2, num3, soma);

    return 0;}
