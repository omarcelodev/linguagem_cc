#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#define TAM 50

int indice = 1, posicao = 0;

//Ler numeros
int lerNumero(char mensagem[]){
    int numero;

    do{
    printf("%s", mensagem);
    scanf("%d", &numero);

    if(numero <=0){
        printf("N�mero Inv�lido\n");
    }

    }while(numero <= 0);

    return numero;
}

//Verifica��o de array zerada
bool verificarArrayZerada(int arrayNumeros[]){

    if(arrayNumeros[0] == 0){
        return true;
    }else{
        return false;
    }
}

//Imprimindo Menu
int menu(){
    int opcao;

    printf("\n\n=========================================\n");
    printf("               MENU DE OPCOES            \n");
    printf("=========================================\n");
    printf("(01) Listar todos os n�meros contidos no array\n");
    printf("(02) Listar somente os n�meros pares\n");
    printf("(03) Listar somente os n�meros �mpares\n");
    printf("(04) Listar somente os n�meros primos\n");
    printf("(05) Calcular e imprimir o somat�rio de todos os n�meros\n");
    printf("(06) Calcular e imprimir a m�dia aritm�tica de todos os n�meros\n");
    printf("(07) Imprimir a quantidade de n�meros iguais a um dado n�mero\n");
    printf("(08) Imprimir a primeira ocorr�ncia de um dado n�mero do array\n");
    printf("(09) Imprimir a �ltima ocorr�ncia de um dado n�mero do array\n");
    printf("(10) Imprimir o maior n�mero contido no array\n");
    printf("(11) Imprimir o menor n�mero contido no array\n");
    printf("(12) Gerar novos n�meros para o array\n");
    printf("(13) Configurar Exibi��o de Listagens\n");
    printf("(00) Finalizar o programa\n");
    printf("=========================================\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);

    return opcao;
}

//Validar escolha da Configura��o de Listagem.
int lerSimOuNao(char frase[]){
    int resposta = -1;
    do{
        printf("%s", frase);
        scanf("%d", &resposta);

        if(resposta != 0 && resposta != 1){
            printf("Op��o Inv�lida!\n");
        }

    }while(resposta !=0 && resposta != 1);

    return resposta;
}

//Configurar exibi��o das Listagens
void configurarListagem(void){
    printf("\n+--------------------------------------+");
    printf("\n|Escolha como deseja Listar as Array's.|\n");
    printf("+--------------------------------------+\n");

    printf("Para imprimir n�meros com �ndice - Pressione 1\n");
    printf("Para imprimir numero sem �ndice - Pressione 0\n");
    indice = lerSimOuNao("Sua op��o: ");


    printf("\nPara imprimir na Horizontal - Pressione 1\n");
    printf("Para imprimir na Vertical - Pressione 0\n");
    posicao = lerSimOuNao("Sua op��o: ");

    printf("Configura��es aplicadas com sucesso!");
}

//Imprimir Listagens
void imprimirListagem(int arrayNumeros[]){
    for(int i = 0; i < TAM; i++){
        if(indice == 1){
            if(posicao == 1){
                printf("%d - [%d]", i, arrayNumeros[i]);
                if( i < TAM-1){
                    printf("  ; ");
                }

            }else{
                printf("%d - [%d]\n", i, arrayNumeros[i]);
            }

        }else{
            if(posicao == 1){
                printf("[%d]", arrayNumeros[i]);
                if( i < TAM-1){
                    printf("  ; ");
                }

            }else{
                printf("[%d]\n", arrayNumeros[i]);
            }
        }
    }

}

//Listar N�meros na Array
void listarNumeros(int arrayNumeros[]){

    printf("\n+--------------------------+\n");
    printf("|N�meros contidos na Array:|\n");
    printf("+--------------------------+\n");

    imprimirListagem(arrayNumeros);

    printf("\nFim da Listagem!\n");
}

//Verificar se o n�mero � par
bool isPar(int numero){
    return numero % 2 == 0;
}

//Listar N�meros pares
void listarPares(int arrayNumeros[]){
    int totalPares = 0;

    printf("\n=== N�MEROS PARES ===\n");

    for(int i = 0; i < TAM; i++){
        if(isPar(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalPares++;
        }
    }

    if(totalPares == 0){
        printf("Nenhum n�mero par encontrado!\n");
    }
    else{
        printf("Total de n�meros pares na array: %d\n", totalPares);
    }

    printf("=== FIM DA LISTAGEM ===\n");
}

//Verificar se o n�mero � �mpar
bool isImpar(int numero){
    return numero % 2 != 0;
}

//Listar n�meros impares
void listarImpares(int arrayNumeros[]){
    int totalImpares = 0;

    printf("\n=== N�MEROS IMPARES ===\n");

    for(int i = 0; i < TAM; i++){
        if(isImpar(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalImpares++;
        }
    }

    if(totalImpares == 0){
        printf("Nenhum n�mero impar encontrado!\n");
    }
    else{
        printf("\n|Total de n�meros impares na array: %d |\n\n", totalImpares);
    }

    printf("=== FIM DA LISTAGEM ===\n");

}

//Verificar se � primo
bool isPrimo(int numero){
    int cont = 0;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            cont++;
        }
    }

    return(cont == 2);
}

//Listar n�meros primos
void listarPrimos(int arrayNumeros[]){
    int totalPrimos = 0;

    printf("N�meros Primos:\n");

    for(int i = 0; i < TAM; i++){
        if(isPrimo(arrayNumeros[i])){
            printf("[%d] = %d\n", i, arrayNumeros[i]);
            totalPrimos++;
        }
    }

    if(totalPrimos == 0){
        printf("Nenhum n�mero primo encontrado");
    }else{
        printf("\n|Total de n�meros primos na array: %d |\n\n", totalPrimos);
    }

    printf("=== FIM DA LISTAGEM ===\n");
}

//Calculando Somatorio de todos os n�meros.
int somatorioNumeros(int arrayNumeros[]){
    int somatorio = 0;

    for(int i = 0; i < TAM; i++){
        somatorio += arrayNumeros[i];
    }

    return somatorio;
}

//Imprimindo Somatorio de todos os n�meros.
void imprimirSomatorio(int arrayNumeros[]){
    int soma = somatorioNumeros(arrayNumeros);
    printf("O somatorio de todos os n�meros � = %d", soma);
}

//Calculando m�dia aritm�tica
void mediaAritmetica(int arrayNumeros[]){
    int somatorio = somatorioNumeros(arrayNumeros);
    float media = (float)somatorio / TAM;

    printf("A m�dia � = %.2f\n", media);
}

//Calcular quantidades de um n�mero com base em outro!!!!!
void qntdNumeroIgual(int arrayNumero[]){
    int numero = lerNumero("Digite um n�mero: ");
    int cont = 0;

    for(int i = 0; i < TAM; i++){
        if(numero == arrayNumero[i]){
            cont++;
        }
    }

    if(cont == 0){
        printf("N�o foi encontrado nenhum n�mero na array = %d", numero);
    }else{
        printf("Quantidade de n�meros iguais a %d = %d\n", numero, cont);
    }
}

//Imprimindo Primeira ocorr�ncia
void primeiraOcorrencia(int arrayNumero[]){
    int numero = 0;
    int encontrado = 0;

    while(!encontrado){
        numero = lerNumero("Digite um n�mero: ");

        for(int i = 0; i < TAM; i++){
            if(numero == arrayNumero[i]){
                printf("A primeira ocorr�ncia do n�mero %d foi na posi��o [%d]\n", numero, i);
                printf("[%d] = %d", i, arrayNumero[i]);
                encontrado = 1;
                break;
            }
        }

        if(!encontrado){
            printf("Este n�mero n�o foi encontrado no array, tente novamente!\n");
        }
    }
}

//Imprimindo Ultima ocorr�ncia
void ultimaOcorrencia(int arrayNumero[]){
    int numero = 0;
    int ultimaPosicao = -1;

    while(ultimaPosicao == -1){
        numero = lerNumero("Digite um n�mero: ");

        for(int i = 0; i < TAM; i++){
            if(numero == arrayNumero[i]){
                ultimaPosicao = i;
            }
        }

        if(ultimaPosicao == -1){
            printf("Este n�mero n�o foi encontrado no array, tente novamente!\n");
        }
    }

    printf("A �ltima ocorr�ncia do n�mero %d foi na posi��o [%d]\n", numero, ultimaPosicao);
    printf("[%d] = %d\n", ultimaPosicao, arrayNumero[ultimaPosicao]);
}

//Imprimindo maior n�mero
void maiorNumero(int arrayNumero[]){
    int maior = arrayNumero[0];

    for(int i = 1; i < TAM; i++){
        if(arrayNumero[i] > maior){
            maior = arrayNumero[i];
        }
    }

    printf("Maior n�mero = %d", maior);
}

//Imprimindo menor n�mero
void menorNumero(int arrayNumero[]){
    int menor = arrayNumero[0];

    for(int i = 1; i < TAM; i++){
        if(arrayNumero[i] < menor){
            menor = arrayNumero[i];
        }
    }

    printf("Menor n�mero = %d", menor);
}

//Gerar novos n�meros pra array
void gerarNovosNumeros(int arrayNumeros[]){
    int intervalo1, intervalo2;
    printf("+-----------------------------------------------------------------+\n");
    printf("|Digite um intervalo de n�meros a ser gerado.                     |\n");
    printf("|OBS: Os n�meros n�o podem ser negativos e devem ser maiores que 0|.\n");
    printf("+-----------------------------------------------------------------+\n");

    do{
        intervalo1 = lerNumero("Digite o primeiro n�mero: ");
        intervalo2 = lerNumero("Digite o segundo n�mero: ");

        if(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2){
            printf("\nIntervalo Inv�lido, Redigite\n");
        }

    }while(intervalo2 < intervalo1 || intervalo1 <= 0 || intervalo2 <= 0 || intervalo1 == intervalo2);

    srand(time(NULL));
    printf("\nArray Preenchida com sucesso!");
    printf("\nOs n�meros gerados foram:\n");

    for(int i = 0; i < TAM; i++){
        arrayNumeros[i] = rand() % (intervalo2 - intervalo1 + 1) + intervalo1;
        printf("[%d] = %d\n", i,arrayNumeros[i]);
    }
}

int main(){
    int arrayNumeros[TAM] = {0}, opcao;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        opcao = menu();
        if(opcao < 12 && verificarArrayZerada(arrayNumeros)){
            printf("+------------------------------------------------------------+\n");
            printf("|A Array est� zerada! Preencha com a opc�o 12 para continuar.|\n");
            printf("+------------------------------------------------------------+\n");
            continue;
        }

        switch(opcao){

            case 1: listarNumeros(arrayNumeros); break;
            case 2: listarPares(arrayNumeros); break;
            case 3: listarImpares(arrayNumeros); break;
            case 4: listarPrimos(arrayNumeros); break;
            case 5: imprimirSomatorio(arrayNumeros); break;
            case 6: mediaAritmetica(arrayNumeros); break;
            case 7: qntdNumeroIgual(arrayNumeros); break;
            case 8: primeiraOcorrencia(arrayNumeros); break;
            case 9: ultimaOcorrencia(arrayNumeros); break;
            case 10: maiorNumero(arrayNumeros); break;
            case 11: menorNumero(arrayNumeros); break;
            case 12: gerarNovosNumeros(arrayNumeros); break;
            case 13: configurarListagem(); break;
            default: printf("Op��o Inv�lida"); break;
        }

    }while(opcao != 0);

    return 0;
}
