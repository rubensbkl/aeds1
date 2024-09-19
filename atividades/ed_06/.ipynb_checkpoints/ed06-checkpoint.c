#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMultiplesUp(int num, int current, int range) {
    int x = 0;
    if(range > 0) {
        if(current % num == 0 && current > 0) {
            printf("%d ", current);
            printMultiplesUp(num, current + 4, range - 1);
        } else {
            printMultiplesUp(num, current + 1, range);
        }
    }
}

void method_0611(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0611\n");

    // Recepção dos dados
    int valor = 0;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printMultiplesUp(4, 0, valor);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printMultiplesDown(int num, int current, int range) {
    int x = 0;
    if(range > 0) {
        if(current % num == 0 && current > 0) {
            printf("%d ", current);
            printMultiplesDown(num, current + 4, range - 1);
        } else {
            printMultiplesDown(num, current + 1, range);
        }
    }
}

void method_0612(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0612\n");

    // Recepção dos dados
    int valor = 0;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printMultiplesDown(4, 0, valor);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int main (void) {

   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf("\n");
   printf("%s\n", "Lista_06 - v.1.0 - 22/09/2024");
   printf("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf("\n");

   do {
        // Ler opcão
        printf("%s", "Qual a sua opcao? ");
        scanf("%d", &opcao ); getchar();

        // Escolher ação
        switch (opcao) {
            case 0: break;
            case 1: method_0611(); break;
            default: printf("\n%s\n\n", "ERRO: Opcao invalida."); break;
        }
    } while (opcao != 0);
    
    printf("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}