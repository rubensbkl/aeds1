#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct s_int_Array {

    int capacity;
    int length;
    int *data;
    
} int_Array;

typedef
int_Array*
ref_int_Array;


ref_int_Array new_int_Array(int n) {

    ref_int_Array array = NULL;

    array = (ref_int_Array) malloc (1*sizeof(int_Array));

    if (array) {
        array->capacity = 0;
        array->length = 0;
        array->data = (int*)malloc(n * sizeof(int));
    }
    
    if (array->data) {
        array->capacity = n;
        
    }

    return (array);
}

void int_array_fprint(const char* filename, ref_int_Array array) {

    FILE* file = fopen(filename, "w");
    
    if (array && array->data) {

        fprintf(file, "%d\n", array->length);
        
        for (int i = 0; i < array->length; i++) {
            fprintf(file, "%d\n", array->data[i]);
        }
    }

    fclose(file);
}

ref_int_Array int_sortArrayDown (ref_int_Array array) {

    if (int_array_IsCrescent(array) == false) {    
        int x = 0, y = 0;
        int temp = 0;
        
        for (x = 0; x < array->length - 1; x++) {
            for (y = 0; y < array->length - 1; y++) {
                if (array->data[y] < array->data[y+1]) {
                    temp = array->data[y];
                    array->data[y] = array->data[y+1];
                    array->data[y+1] = temp;
                }
            }
        }
    }

    return (array);
}

ref_int_Array int_Array_fill( ref_int_Array a) {

    if (a && a->data) {
        for(int i=0; i<a->length; i++) {
            a->data [i] = (i+1)*10;
        }
    }

    return (a);
}

void int_array_print(ref_int_Array a) {

    if (a && a->data) {
        for(int i=0; i<a->length; i++) {
            printf("%d ", a->data[i]);
        }
        printf("\n");
    }

}

void int_array_fread(const char* filename, ref_int_Array a) {

    FILE* arq = fopen(filename, "r");
    
    if ( a && a->data ) {

        a->length = 0;

        fscanf(arq, "%d", &a->length);
        
        for(int i=0; i<a->length; i++) {
            fscanf(arq, "%d", &a->data [i]);
        }
    }

    fclose(arq);

}

ref_int_Array int_array_fread_binario(const char* filename, ref_int_Array a) {

    int y = 0;
        
    ref_int_Array binario = NULL;
        
    binario = new_int_Array(y);
    
    FILE* arq = fopen(filename, "r");

    if ( a && a->data ) {
    
        a->length = 0;
    
        fscanf(arq, "%d", &a->length);
        
        for(int i=0; i<a->length; i++) {
            fscanf(arq, "%d", &a->data [i]);
                
            if (a->data [i] == 0 || a->data [i] == 1) {
    
                binario->data[y] = a->data [i];    
                y++;
            }
        }
        binario->length = y;
    }

    fclose(arq);

    return binario;

}

void int_array_read( ref_int_Array a ) {

    if ( a && a->data ) {

        scanf("%d", &a->length);
        
        for(int i=0; i<a->length; i++) {
            scanf("%d", &a->data [i]);
        }
    }
}

bool int_array_esta_crescente (ref_int_Array a) {

    for(int i=0; i<a->length; i++) {
        if (a->data [i] >= a->data [i + 1]) {
            return false;
        }
    }

    return true;

}

ref_int_Array int_array_invert (ref_int_Array a) {
    
    int inicio = 0;
    int fim = a->length-1;
    int auxiliar = 0;
        
    while ( inicio < fim ) {   
        auxiliar = a->data [fim];
        a->data [fim] =  a->data [inicio];
        a->data [inicio] = auxiliar;

        inicio = inicio + 1;
        fim = fim - 1;
    }
    return (a);
}

double calcular_media (ref_int_Array a) {
    
    int soma = 0;
    double media = 0.0;
    
    for(int i=0; i<a->length; i++) {
        soma = soma + a->data[i];
    }
    media = (double) soma / a->length;
    
    return media;
}

double arranjo_mediana (ref_int_Array a) {
    
    double mediana = 0.0;
        
    int_sortAarrayDown (a); // Ordena os valores para achar o meio
    
    if (a->length%2 == 0) { // Caso o meio esteja entre 2 valores        
        mediana = (double) (( a->data[a->length/2] + a->data[(a->length/2)-1]) / 2.0);
    }
    else {
        mediana = (double) a->data[(a->length/2)+1];
    }
    return mediana;
}

int arranjo_moda (ref_int_Array a) {
// Preferi faze por este meio inves de tabela achei a tabela confusa
    int maior = 0;
    int moda = a->data[0];
    int count = 0;

    // Conta valores repetidos no arranjo
    for (int x = 0; x<a->length; x++) {
        for (int y = 0; y<a->length; y++) {
            if (a->data[x] == a->data[y]) {
                count++;
            }
        }
        if (count > maior) { // Acha qual o valor com a maior aparição
            maior = count;
            moda = a->data[x];
        }
    }
    return moda;
}

ref_int_Array arranjo_filtrar (ref_int_Array c, ref_int_Array b, ref_int_Array a ) {

    if ( a->length == b->length) {
        
        int x=0;
        int y=0;
        
        while ( x<a->length ) {
    
            c->length = y;    
                
            if ( a->data[x] == b->data[x] ) {
                c->data[y] = a->data[x];
                y++;
            }
            x++;
        }
    }
    return c;    
}

int arranjo_paraDecimal (ref_int_Array a) {

    int decimal = 0;
    int expoente = 0;

    for(int i=a->length-1; i>=0; i--) {

        decimal = decimal + (a->data[i] * (int) pow(2,expoente));
        printf("Expoente: %d\t Posicao: %d\t Decimal: %d\n", expoente, i, decimal);
        expoente++;
    }

    return decimal;
}

#endif
