#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num = 0, i;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Informe um n�mero inteiro positivo: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("\nN�mero inv�lido, Tente novamente!\n");
        }else{
            for(i=1; i <= num; i++){
            printf("%d\n", i);
            }
        }

    }while(num <= 0);

    return 0;
}

