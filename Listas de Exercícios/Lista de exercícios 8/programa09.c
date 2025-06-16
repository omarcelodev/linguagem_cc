#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int lerNumero (char mensagem[]){
    int num;

    printf("%s", mensagem);
    scanf("%d", &num);

    return num;
}

bool verificarIntervalo(int num1, int num2){
    if( num1 > num2){
        printf("\nIntervalo Inv�lido!\n");
        return true;

    }else{
        return false;
    }
}

void imprimirIntervalo(int num1, int num2){
    printf("N�meros do Intervalo:\n");
    for(int i = num1; i <= num2; i++){
        printf("%d\n", i);
    }
}

int main(){
    int num1, num2;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um intervalo de n�meros.\n");

    num1 = lerNumero("Digite o primeiro n�mero: ");
    num2 = lerNumero("Digite o segundo n�mero: ");

    if(verificarIntervalo(num1, num2)){
        printf("Programa Encerrado\n");
    }else{
        imprimirIntervalo(num1, num2);
    }

    return 0;
}

