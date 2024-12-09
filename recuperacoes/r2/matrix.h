#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct s_int_matrix {
    int capacity;
    int rows;
    int columns;
    int** data;
} int_Matrix;

typedef
int_Matrix*
ref_int_Matrix;

ref_int_Matrix new_int_Matrix(int n) {

    ref_int_Matrix a = NULL;

    a = (ref_int_Matrix)malloc(1*sizeof(int_Matrix));

    if( a ) { 

        a->capacity = 0;
        a->rows = 0;
        a->columns = 0;
        
        a->data = (int**)malloc((a->rows) * sizeof(int*));

        for(int x = 0; x < a->rows; x++) {
            a->data[x] = (int*)malloc((a->columns) * sizeof(int));
        }
    }
    
    if ( a->data ) {
        a->capacity = n;
    }
    return (a);
}

void int_matrix_print (ref_int_Matrix a) {

    if ( a && a->data ) {

        for(int x=0; x<a->rows; x++) {
            for(int y=0; y<a->columns; y++) {
                printf("%d ", a->data [x][y]);
            }
            printf("\n");
        }
    }        
}

void int_matrix_fprint(const char* filename, ref_int_Matrix a) {

    FILE* arq = fopen(filename, "w");
    
    if ( a && a->data ) {

        fprintf(arq, "%d\n", a->rows);
        fprintf(arq, "%d\n", a->columns);
        
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                fprintf(arq, "%d ", a->data [i][j]);
            }
            fprintf(arq, "\n");
        }
        fclose(arq);
    }
}

void int_matrix_fread(const char* filename, ref_int_Matrix a) {

    FILE* arq = fopen(filename, "r");
    
    if ( a && a->data ) {
        
        a->rows = 0;
        a->columns = 0;
        
        fscanf(arq, "%d", &a->rows);
        fscanf(arq, "%d", &a->columns);
        
        a->data = (int**)malloc((a->rows) * sizeof(int*));

        for(int i = 0; i < a->rows; i++) {
            a->data[i] = (int*)malloc((a->columns) * sizeof(int));
        }  

        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                fscanf(arq, "%d", &a->data [i][j]);
            }
        }
        fclose(arq);
    }
}

void int_matrix_read( ref_int_Matrix a ) {
    if ( a && a->data ) {
        scanf("%d", &a->rows);
        scanf("%d", &a->columns);

        a->data = (int**)malloc((a->rows) * sizeof(int*));

        for(int i = 0; i < a->rows; i++) {
            a->data[i] = (int*)malloc((a->columns) * sizeof(int));
        }
        
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                scanf("%d", &a->data [i][j]);
            }
        }
    }
}

ref_int_Matrix int_matriz_zerar ( ref_int_Matrix a ) {
    if (a && a->data) {
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                a->data[i][j] = 0;
            }
        }
    }
    return (a);
}

ref_int_Matrix int_matrix_trigonal_crescente ( ref_int_Matrix a ) {
    int crescente = 1;
    if (a && a->data) {
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                if (!(i == j) && !(i-1 == j) && !(i == j-1)) {
                    a->data[i][j] = 0;
                }
                else {
                    a->data[i][j] = crescente;
                    crescente++;
                }
            }
        }
        
    }
    return (a);
}

ref_int_Matrix int_matrix_trigonal_sec_decrescente ( ref_int_Matrix a ) {
    int decrescente = 0;
    if (a && a->data) {    
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                if (i + j == a->rows - 1 || i + j == a->rows - 2 || i + j == a->rows) {
                    decrescente++;
                }
            }
        }
        for (int i = 0; i < a->rows; i++) {
            for (int j = 0; j < a->columns; j++) {
                if (i + j == a->rows - 1 || i + j == a->rows - 2 || i + j == a->rows) {
                    a->data[i][j] = decrescente;
                    decrescente--;
                } else {
                    a->data[i][j] = 0;
                }
            }
        }
    }
    return (a);
}

ref_int_Matrix int_matriz_potencia_por_linha ( ref_int_Matrix a ) {
    if (a && a->data) {
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                a->data[i][j] = (int)pow(i+1,j);
            }
        }
    }
    return (a);
}

ref_int_Matrix int_matriz_potencia_por_coluna ( ref_int_Matrix a ) {
    if (a && a->data) {    
    
        for(int i=0; i<a->rows; i++) {
            for(int j=0; j<a->columns; j++) {
                a->data[i][j] = (int)pow(j+1,i);
            }
        }
    }
    return (a);
}
