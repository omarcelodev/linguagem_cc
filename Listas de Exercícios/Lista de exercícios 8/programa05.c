#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar(int num){

    if(num % 2 == 0){
        printf("O n�mero %d � par", num);
    }else{
        printf("O n�mero %d � impar", num);
    }

}

int lerNumero(void){
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    return num;
}

int main(){
    int num;

    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    num = lerNumero();
    verificarParOuImpar(num);


    return 0;
}



