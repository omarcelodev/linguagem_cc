#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int idade=0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 1 || idade > 123){
        printf("Informe uma idade v�lida");
    } else{
         if(idade >= 18){
        printf("Voc� pode tirar sua Habilita��o");
        }else{
        printf("Voc� n�o pode tirar sua Habilita��o");
    }}

    return 0;
}
