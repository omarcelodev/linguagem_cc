#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
    int nums[TAM], i;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite %d n�meros.\n", TAM);

    for(i = 0; i < TAM; i++){
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nOs n�mero digitados foram: ");

    for(i = 0; i < TAM; i++){
        printf("\nN�mero: %d\n", nums[i]);
    }

    return 0;
}
