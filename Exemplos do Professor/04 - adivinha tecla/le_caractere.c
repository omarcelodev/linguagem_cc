#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void) {
    char tecla;

    printf("Pressione qualquer tecla... ");

    tecla = tolower(getche());  // N�o exige enter e caractere pressionado aparece na tela
    // tecla = tolower(getch());  // N�o exige enter e caractere pressionado n�o aparece na tela
    // tecla = tolower(getchar());  // Exige enter e caractere pressionado aparece na tela
    // tecla = getc(stdin);  // Exige enter e caractere pressionado aparece na tela

    printf("\n\nTecla pressionada: %c\n", tecla);

    return 0;
}
