#include <stdio.h>

#include "array.h"
#include "matrix.h"

void method_01() {

    printf("Metodo 01\n");

    ref_int_Array array = NULL;

    array = new_int_Array(100);

    int_array_fread("DADOS1.TXT", array);

    int_sortArrayDown(array);

    int_array_fprint("CRESCENTE.TXT", array);
}

void method_02() {
    
    printf("Metodo 02\n");

    ref_int_Array array = NULL;

    array = new_int_Array(100);

    int_array_fread("CRESCENTE.TXT", array);

    int_array_invert(array);

    int_array_fprint("INVERTIDO.TXT", array);
}

void method_03() {

    printf("Metodo 03\n");

    double mediana = 0.0;
    int moda = 0;
    
    ref_int_Array array = NULL;
    
    array = new_int_Array(100);
    
    int_array_fread ("DADOS2.TXT", array);
    
    mediana = arranjo_mediana(array);
    moda = arranjo_moda(array);

    printf("Mediana: %lf\n", mediana);
    printf("Moda: %d\n", moda);

}

void method_04() {

    printf("Metodo 04\n");

    ref_int_Array array1 = NULL;
    ref_int_Array array2 = NULL;
    ref_int_Array array3 = NULL;
    
    array1 = new_int_Array(100);
    array2 = new_int_Array(100);
    array3 = new_int_Array(100);
    
    int_array_fread ("DADOS1.TXT", array1);
    int_array_fread ("DADOS2.TXT", array2);

    arranjo_filtrar(array3, array2, array1); 

    int_array_fprint ("FILTRADOS.TXT", array3);
        
}

void method_05() {

    printf("Opção 5 escolhida\n");

    int x = 0;
    
    ref_int_Array binario = NULL;
    
    binario = new_int_Array(MAX_ARRAY);
    
    binario = int_array_fread_binario ("BINARIOS1.TXT", binario);
    
    int_array_print( binario );
    
    x = arranjo_paraDecimal( binario );

    printf("Decimal: %d\n", x);
    
}

void method_06() {

    printf("Opção 6 escolhida\n");

    ref_int_Matrix matriz = NULL;

    matriz = new_int_Matrix(MAX_MATRIX);

    int_matrix_fread("MATRIZ1.TXT", matriz);
    
    matriz = int_matriz_zerar( matriz );
        
    matriz = int_matrix_trigonal_crescente( matriz );

    
    
    int_matrix_fprint("MATRIZ2.TXT", matriz);
    
}

void method_07() {

    printf("Opção 7 escolhida\n");

    ref_int_Matrix matriz = NULL;

    matriz = new_int_Matrix(MAX_MATRIX);

    int_matrix_fread("MATRIZ1.TXT", matriz);
    
    matriz = int_matriz_zerar( matriz );

    matriz = int_matrix_trigonal_sec_decrescente( matriz );

    int_matrix_fprint("MATRIZ2.TXT", matriz);
}

void method_08() {

    printf("Opção 8 escolhida\n");
    
    ref_int_Matrix matriz = NULL;

    matriz = new_int_Matrix(MAX_MATRIX);

    int_matrix_fread("MATRIZ3.TXT", matriz);
    
    matriz = int_matriz_zerar( matriz );

    matriz = int_matriz_potencia_por_linha( matriz );

    int_matrix_print(matriz);
    
}

void method_09() {

    printf("Opção 9 escolhida\n");

    ref_int_Matrix matriz = NULL;

    matriz = new_int_Matrix(MAX_MATRIX);

    int_matrix_fread("MATRIZ3.TXT", matriz);
    
    matriz = int_matriz_zerar( matriz );

    matriz = int_matriz_potencia_por_coluna( matriz );

    int_matrix_print(matriz);
    
}

#define MAX_SUP 100
#define MAX_NOME 20

typedef struct {

    int codigo;
    char nome[MAX_NOME];
    int preco;

} s_Supermercado;

void method_10() {

    printf("Opção 10 escolhida\n");

    FILE *arq = NULL;
    s_Supermercado supermercados[MAX_SUP];
    int qtd;                  
    int soma = 0;
    double media = 0.0;

    // Abrir o arquivo para leitura
    arq = fopen("DADOS3.TXT", "r");
    if (arq == NULL) {
        printf("ERRO AO ABRIR ARQUIVO\n");
    }

     fscanf(arq, "%d", &qtd);
    if (qtd <= 0 || qtd > MAX_SUP) {
        printf("Quantidade invalida\n");
        fclose(arq);
    }

    for (int i=0; i<qtd; i++) {
        
        fscanf(arq, "%d", &supermercados[i].codigo);
        
        fscanf(arq, "%s", supermercados[i].nome);
        
        fscanf(arq, "%d", &supermercados[i].preco);
        
        soma = soma + supermercados[i].preco;
    }

    media = (double)soma/qtd;

    printf("Supermercados abaixo da media:\n");

    for (int i = 0; i < qtd; i++) {
        if (supermercados[i].preco < media) {
            printf("Codigo: %d\n",supermercados[i].codigo);
            printf("%s\n",supermercados[i].nome);
            printf("Preco: %d\n", supermercados[i].preco);
        }
    }
    
    fclose(arq);
}


int main(void) {
    int opcao = 0;
    do {
        scanf("%d", &opcao); getchar();
        switch (opcao) {
            case 0: break;
            case 1: method_01(); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    printf("Aperte ENTER para finalizar:"); getchar();
    getchar();
    return 0;
}