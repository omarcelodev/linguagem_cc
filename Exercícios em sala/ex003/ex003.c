/*
Autor:Marcelo
Data:28/02/2025
Fun��o do Programa: Calcular o valor do aumento de salario e apresentar ao usu�rio o valor de
aumento e o novo salario.

Ex003: Escreva um prg em C que leia o sal�rio de um funcion�rio e uma porcentagem de aumento.
Em seguida, calcule e imprima o novo sal�rio e o valor que o funcionario receber� de
aumento.*/

#include <stdio.h>

int main(){
    float salario, porcAumento, vlraumento, novoSalario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcAumento);

    vlraumento = (porcAumento/100) * salario;
    novoSalario = vlraumento + salario;


    printf("O aumento vai ser de: R$%.2f\n", vlraumento);

    printf("O novo salario vai ser de: R$%.2f", novoSalario);

    return 0;
}
