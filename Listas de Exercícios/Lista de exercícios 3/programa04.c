#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    float resto;
    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    printf("Vamos calcular o resto da divis�o de dois n�meros\n");

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Insira o segundo n�mero: ");
    scanf("%d", &num2);

    resto = num1%num2;

    printf("O resto de %d/%d � %.2f", num1, num2,resto);

    return 0;
}
