#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um n�mero correspondente ao um m�s do ano.\n");

    printf("Digite o n�mero: ");
    scanf("%d", &num);

    if(num == 1)
        printf("Janeiro");
    else if(num == 2)
            printf("Fevereiro");
        else if(num == 3)
                printf("Mar�o");
            else if(num == 4)
                    printf("Abril");
                else if(num == 5)
                        printf("Maio");
                    else if(num == 6)
                            printf("Junho");
                        else if(num == 7)
                                printf("Julho");
                            else if(num == 8)
                                    printf("Agosto");
                                else if(num == 9)
                                        printf("Setembro");
                                    else if(num == 10)
                                            printf("Outubro");
                                        else if(num == 11)
                                                printf("Novembro");
                                            else if(num == 12)
                                                    printf("Dezembro");
                                                else
                                                    printf("M�S INV�LIDO");
    return 0;
}
