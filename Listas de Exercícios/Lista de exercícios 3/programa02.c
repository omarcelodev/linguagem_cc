#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int idade;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("Voc� pode tirar sua habilita��o");
    }else{
        printf("Voc� n�o pode tirar sua habilita��o\n");
    }

    return 0;
}
