#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    float razao;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Vamos Calcular a raz�o de dois n�meros inteiros.\n");

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Insira o segundo n�mero: ");
    scanf("%d", &num2);

    razao = (float)num1/num2;

    printf("%d / %d = %.2f\n", num1, num2, razao);

    return 0;
}
