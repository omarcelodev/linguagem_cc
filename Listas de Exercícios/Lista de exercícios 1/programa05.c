#include <stdio.h>
#include <locale.h>

int main(){
    float base, altura, area;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a �rea de um tri�ngulo.\n");

    printf("\nInsira o valor da base: ");
    scanf("%f", &base);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nA �rea desse tri�ngulo �: %.2f\n\n", area);

    return 0;}
