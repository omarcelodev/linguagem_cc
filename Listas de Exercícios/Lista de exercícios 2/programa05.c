#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float salarioBase, gratificacao, imposto, salarioCheio, salarioLiquido;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o seu sal�rio base: R$");
    scanf("%f", &salarioBase);

    gratificacao = (salarioBase * 5) / 100;
    imposto = (salarioBase * 7) / 100;
    salarioCheio = salarioBase + gratificacao;
    salarioLiquido = salarioCheio - imposto;

    printf("\nSua gratifica��o de 5%% � de: R$%.2f\n", gratificacao);
    printf("Somando com o seu sal�rio base teremos: R$%.2f + R$%.2f = R$%.2f\n\n", salarioBase, gratificacao, salarioCheio);
    printf("Descontando o Imposto de 7%% sobre seu sal�rio (R$%.2f),\nteremos R$%.2f - R$%.2f = R$%.2f\n\n", imposto, salarioCheio, imposto, salarioLiquido);
    printf("O sal�rio que vc deve receber � de: R$%.2f\n", salarioLiquido);

    return 0;}
