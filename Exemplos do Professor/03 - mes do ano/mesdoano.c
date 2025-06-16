#include <stdio.h>
#include <locale.h>

int main() {
    int mes;
    const char *meses[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho",
                           "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    setlocale(LC_ALL, "Portuguese");
    printf("Entre com o n�mero de um m�s do ano: ");
    scanf("%d", &mes);

    if (mes > 0 && mes < 13)
        printf("M�s: %s\n", meses[--mes]);
    else
        printf("M�s inv�lido.\n");

    return 0;
}
