#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    char simb;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("S�mbolos:(. , : / \\ | ; { } ( ) [ ] @ ! $ * &)\n");

    printf("Digite algum dos s�mbolos: ");
    simb = getche();

    switch(simb){
        case 46: printf("\n\nS�mbolo: '%c' Nome: Ponto\n", simb); break;
        case 44: printf("\n\nS�mbolo: '%c' Nome: V�rgula\n", simb); break;
        case 58: printf("\n\nS�mbolo: '%c' Nome: Dois Pontos\n", simb); break;
        case 47: printf("\n\nS�mbolo: '%c' Nome: Barra(slash)\n", simb); break;
        case 92: printf("\n\nS�mbolo: '%c' Nome: Barra Invertida(backslash)\n", simb); break;
        case 124: printf("\n\nS�mbolo: '%c' Nome: Pipe\n", simb); break;
        case 59: printf("\n\nS�mbolo: '%c' Nome: Ponto e V�rgula\n", simb); break;
        case 123: printf("\n\nS�mbolo: '%c' Nome: Chave Aberta\n", simb); break;
        case 125: printf("\n\nS�mbolo: '%c' Nome: Chave Fechada\n", simb); break;
        case 40: printf("\n\nS�mbolo: '%c' Nome: Par�nteses Aberto\n", simb); break;
        case 41: printf("\n\nS�mbolo: '%c' Nome: Par�nteses Fechado\n", simb); break;
        case 91: printf("\n\nS�mbolo: '%c' Nome: Colchete Aberto\n", simb); break;
        case 93: printf("\n\nS�mbolo: '%c' Nome: Colchete Fechado\n", simb); break;
        case 64: printf("\n\nS�mbolo: '%c' Nome: Arroba\n", simb); break;
        case 33: printf("\n\nS�mbolo: '%c' Nome: Exclama��o\n", simb); break;
        case 36: printf("\n\nS�mbolo: '%c' Nome: Cifr�o\n", simb); break;
        case 42: printf("\n\nS�mbolo: '%c' Nome: Asterisco\n", simb); break;
        case 38: printf("\n\nS�mbolo: '%c' Nome: Ampersand\n", simb); break;
        default: printf("\nS�mbolo Inv�lido");
    }

    return 0;
}
