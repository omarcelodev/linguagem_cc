#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Vamos descobrir se o n�mero � par ou impar.\n");

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O n�mero %d � par", num);
    }else{
        printf("O n�mero %d � �mpar", num);
    }

    return 0;
}
