#include <stdio.h>
#include <locale.h>

int main(){
    int num1=0, num2=0, prod=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular o produto de dois n�meros.\n\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    prod = num1 * num2;

    printf("\n%d x %.d = %d\n\n", num1, num2, prod);

    return 0;}
