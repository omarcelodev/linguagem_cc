#include <stdio.h>
#include <locale.h>

int main(){
    float pes, polegadas, jardas, milhas;
    setlocale(LC_ALL, "Portuguese");

    printf("Conversor de p�s para outras medidas.\n");

    printf("\nDigite a medida em p�s: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("\np�s -> polegadas = %.2fin\n", polegadas);
    printf("p�s -> jardas = %.2fyd\n", jardas);
    printf("p�s -> milhas = %.5fmi\n", milhas);

    return 0;}
