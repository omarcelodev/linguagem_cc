#include <stdio.h>

void imprimirPalavra(void){//A "Porta" est� fechada
    printf("Unigoias");
    //quando n�o tiver o return precisar colocar o void no come�o.
}

int main(){
    system("color 0A");

    imprimirPalavra(); //function call

    return 0;
}

//Fun��o = Modulariza��o
//monol�tico = programa com apenas uma fun��o
//Quest�o de Prova!!! Chamamos a fun��o main de Ponto de entrada de aplica��o (Entry Point)
