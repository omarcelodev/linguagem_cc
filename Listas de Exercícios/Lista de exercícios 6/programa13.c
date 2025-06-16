#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float preco =-1, valorAPagar = 0;
    int formaPagamento = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(preco != 0){
        do{
            printf("Digite o Pre�o do produto: R$");
            scanf("%f", &preco);

            if(preco < 0){
                printf("\nDigite um pre�o V�lido!\n");
            } else if(preco == 0){
                printf("\nPrograma Encerrado!\n");
                break;
            }

        }while( preco < 0);

        if(preco == 0){
            break;
        }

        do{
            printf("\nC�digo   | Condi��o de Pagamento  \n");
            printf("   1     | � vista em dinheiro, recebe 10%% de desconto\n");
            printf("   2     | � vista no cart�o de cr�dito, recebe 5%% de desconto\n");
            printf("   3     | Em duas vezes no cart�o de cr�dito, pre�o normal de etiqueta sem juros\n");
            printf("   4     | Em tr�s vezes no cart�o de cr�dito, pre�o normal de etiqueta mais juros de 10%%\n\n");
            printf("Insira a forma de pagamento: ");
            scanf("%d", &formaPagamento);

            switch(formaPagamento){
                case 1:
                    valorAPagar = preco - preco * ((float)10/100);

                    printf("\nValor a ser pago: ");
                    printf("R$%.2f - 10%% = R$%.2f\n\n", preco, valorAPagar);
                    break;

                case 2:
                    valorAPagar = (preco - preco * ((float)5/100));

                    printf("\nValor a ser pago: ");
                    printf("R$%.2f - 5%% = R$%.2f\n\n", preco, valorAPagar);
                    break;

                case 3:
                    valorAPagar = preco / 2;

                    printf("\nValor a ser pago: ");
                    printf("R$%.2f em 2x de R$%.2f\n\n", preco, valorAPagar);
                    break;

                case 4:
                    preco = preco + preco * ((float)10/100);
                    valorAPagar = preco / 3;

                    printf("\nValor a ser pago: ");
                    printf("R$%.2f em 3x de R$%.2f\n\n", preco, valorAPagar);
                    break;

                default:
                    printf("\nForma de Pagamento Inv�lida!\n\n");
                    break;
            }

        }while(formaPagamento < 1 || formaPagamento > 4);

    }

    return 0;
}
