#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num = 0, i = 1;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Informe um n�mero inteiro positivo: ");
        scanf("%d", &num);
        if(num <= 0){
            printf("\nN�mero inv�lido, Tente novamente!\n");
        }else{
            do{
            printf("%d\n", i);
            i++;
    }while(i <= num);
        }

    }while(num <= 0);

    return 0;
}

