#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float raio, area;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a �rea de um c�rculo.\n");

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("\nA �rea desse c�rculo �: %.2fm�\n", area);

    return 0;}
