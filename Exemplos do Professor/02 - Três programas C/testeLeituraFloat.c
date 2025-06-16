#include <stdio.h>
#include <locale.h>

int main() {
    float valorSalario;
    char lixoTeclado[20];
    int retorno;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do seu sal�rio: ");
    retorno = scanf("%f", &valorSalario);
    gets(lixoTeclado);
    printf("\n");

    if (retorno == 0) {
        printf("Voc� n�o digitou um valor monet�rio.");
    }
    else {
        if (lixoTeclado[0] == '.') {
            printf("Digite virgula em vez de ponto para as casas decimais.");
        }
        else {
            printf("Voc� digitou corretamente o valor: %.2f", valorSalario);
        }
    }

    printf("\n");
    return 0;
}
