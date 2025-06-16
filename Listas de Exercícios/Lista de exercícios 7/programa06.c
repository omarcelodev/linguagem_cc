#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 50

int main(){
    float notas[TAM], soma = 0, media = 0;
    float notaAlterada = 0, maiorNota = -1;
    float menorNota = 11, notaReferencia = 0;

    int i = 0, opcaoMenu = 0, indiceNota = 0, opcaoAlterarOutraNota = 0;

    //i = quantidade de notas.

    bool notaInvalidaAtual;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");



    printf("==========================================\n");
    printf("       SISTEMA DE LAN�AMENTO DE NOTAS     \n");
    printf("==========================================\n");
    printf("Voc� pode cadastrar at� %d notas.\n", TAM);
    printf("Digite -1 a qualquer momento para encerrar \no cadastro de notas.\n");
    printf("------------------------------------------\n\n");



    do{
        do{
            notaInvalidaAtual = false;

            printf("Insira a %d� nota: ", i + 1);
            scanf("%f", &notas[i]);

            if(notas[i] < 0 && notas[i] != -1 || notas[i] > 10){
                printf("\nNota Inv�lida, Redigite!\n");

                notaInvalidaAtual = true;
            }

        }while(notaInvalidaAtual);

        if(notas[i] == -1){
            break;
        }

        i++;

    }while( i < TAM);

    system("cls");

    do{
        printf("\n\n============================================================\n");
        printf("Escolha uma op��o:\n");
        printf("\n(1) Imprimir todas as notas digitadas para confer�ncia\n");
        printf("(2) Calcular e imprimir a m�dia da turma\n");
        printf("(3) Alterar uma nota\n");
        printf("(4) Imprimir a maior nota da turma\n");
        printf("(5) Imprimir a menor nota da turma\n");
        printf("(6) Imprimir as notas acima de uma nota informada\n");
        printf("(7) Imprimir as notas abaixo de uma nota informada\n");
        printf("(0) Encerrar o programa\n");
        printf("Op��o: ");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu){
            case 1:
                printf("\nNotas Digitadas:\n");

                for (int j = 0; j < i; j++){
                    printf("Nota %d: %.2f\n", j + 1, notas[j]);
                }

                break;


            case 2:
                printf("M�dia da turma:\n");

                soma = 0;

                for(int j = 0; j < i; j++){
                    soma+= notas[j];
                }

                media = soma / i;

                printf("A m�dia da turma � %.2f (soma: %.2f / quantidade de notas: %d)\n", media, soma, i);

                break;


            case 3:
                do{
                    indiceNota = 0;
                    printf("\nNotas Digitadas:\n");

                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    do{
                        printf("Qual nota voc� deseja alterar? (1 a %d): ", i);
                        scanf("%d", &indiceNota);

                        if(indiceNota < 1 || indiceNota> i){
                        printf("�ndice inv�lido! Tente novamente.\n");
                        }

                    }while(indiceNota < 1 || indiceNota > i);


                    do{
                        printf("Digite o novo valor para a nota: ");
                        scanf("%f", &notaAlterada);

                        if(notaAlterada < 0 || notaAlterada> 10){
                        printf("\nNota Inv�lida, Redigite!\n");
                        }

                    }while(notaAlterada < 0 || notaAlterada > 10);


                    notas[indiceNota- 1] = notaAlterada;


                    printf("\nNota alterada com sucesso.\n");

                    printf("Notas Atualizadas:\n");

                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    printf("\nDeseja alterar outra nota? (1 para sim, 0 para n�o): ");
                    scanf("%d", &opcaoAlterarOutraNota);

                }while(opcaoAlterarOutraNota == 1);

                break;


            case 4:
                maiorNota = notas[0];
                for(int j = 1; j < i; j++){
                    if(notas[j] > maiorNota){
                        maiorNota = notas[j];
                    }
                }

                printf("A maior nota �: %.2f\n", maiorNota);
                break;

            case 5:
                menorNota = notas[0];
                for(int j = 1; j < i; j++){
                    if(notas[j] < menorNota){
                        menorNota = notas[j];
                    }
                }
                printf("A menor nota �: %.2f\n", menorNota);
                break;

            case 6:
                printf("Informe a nota base: ");
                scanf("%f", &notaReferencia);

                for(int j = 0; j < i; j++){
                    if(notaReferencia < notas[j]){
                        printf("Notas Acima de %.2f", notaReferencia);
                        printf("%.2f\n", notas[j]);
                    }
                }
                break;

            case 7:
                printf("Informe a nota base: ");
                scanf("%f", &notaReferencia);

                for(int j = 0; j < i; j++){
                    if(notaReferencia > notas[j]){
                        printf("Notas Abaixo de %.2f", notaReferencia);
                        printf("%.2f\n", notas[j]);
                    }
                }
                break;

            case 0:
                printf("Programa Encerrado.\n");
                break;
        }
    }while(opcaoMenu != 0);

    return 0;
}
