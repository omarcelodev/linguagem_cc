#include <stdio.h>
#include <locale.h>

void imprimirNumero(int n){
    printf("%d", n);
}

int main(){
    system("color 0A");
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("Entre com um n�mero inteiro: ");
    scanf("%d", &x);
    imprimirNumero(x);

    return 0;
}

//t�cnica parametriza��o =
