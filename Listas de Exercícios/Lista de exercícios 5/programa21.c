#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont = 1;
    int num = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite um n�mero: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("Digite um n�mero positivo e maior que 0\n");
        } else{
                do{
                    printf("%d\n", cont);
                    cont = cont + 1;
                    }while(cont <= num);
        }
    }while(num <= 0);

    return 0;
}




