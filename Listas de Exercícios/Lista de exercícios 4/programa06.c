#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    int opcao, soma, multiplicacao, num1, num2;
    float divisao, raiz;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Programa Calculadora Simples.\n\n");

    printf("(1) Somar dois n�meros inteiros.\n");
    printf("(2) Multiplicar dois n�meros inteiros.\n");
    printf("(3) Dividir dois n�meros inteiros.\n");
    printf("(4) Calcular a raiz quadrada de um n�mero inteiro.\n");
    printf("(0) Encerrar o Programa.\n\n");

    printf("Sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nSOMA DE DOIS N�MEROS:\n");
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &num1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &num2);

            soma = num1 + num2;

            printf("%d + %d = %d\n", num1, num2, soma);
            break;

        case 2:
            printf("\nMULTIPLICA��O DE DOIS N�MEROS:\n");
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &num1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &num2);

            multiplicacao = num1 * num2;

            printf("%d x %d = %d\n", num1, num2, multiplicacao);
            break;

        case 3:
            printf("\nDIVIS�O DE DOIS N�MEROS:\n");
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &num1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &num2);

                if(num2 == 0){
                    printf("O segundo n�mero n�o pode ser 0\n");
                    break;
                }
            divisao = (float)num1 / num2;

            printf("%d / %d = %.2f\n", num1, num2, divisao);
            break;

        case 4:
            printf("\nRAIZ QUADRADA DE UM N�MERO:\n");
            printf("Digite o n�mero: ");
            scanf("%d", &num1);

                if(num1 < 0){
                    printf("O n�mero n�o pode ser negativo\n");
                    break;
                }

            raiz = sqrt(num1);

            printf("A raiz quadrada de %d = %.2f\n", num1, raiz);
            break;

        case 0: printf("O Programa foi encerrado.\n");break;

        default: printf("Digite um n�mero da tabela.\n");
    }


    return 0;

}
