#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float salario, valorImposto;
    system("color 0A");
    setlocale(LC_ALL, "Portuguese");

    printf("C�lculo de Imposto sob sal�rio\n\n");

    printf("Digite seu s�lario: R$");
    scanf("%f", &salario);

    if(salario <= 0){
        printf("Digite um valor v�lido\n");
    }else if(salario < 1400){
        valorImposto =  salario * 0.05;
        printf("Voc� deve R$%.2f de imposto\n", valorImposto);
    }else if (salario >=1400 && salario <=3000){
        valorImposto = salario * 0.1;
        printf("Voc� deve R$%.2f de imposto\n", valorImposto);
    }else if(salario > 3000){
        valorImposto = salario * 0.15;
        printf("Voc� deve R$%.2f de imposto\n", valorImposto);
    }

    return 0;
}
