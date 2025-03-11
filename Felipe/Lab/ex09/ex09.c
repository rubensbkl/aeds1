#include <stdio.h>
#include <stdlib.h>

// Função recursiva para ler uma matriz
void readMatriz(int* matriz, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            scanf("%d%*c", (matriz + i*m + j));
            readMatriz(matriz, n, m, i, j + 1);
        } else {
            readMatriz(matriz, n, m, i + 1, 0);
        }
    }
}

// Função recursiva para imprimir uma matriz
void printMatriz(int* matriz, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            printf("%d ", *(matriz + i*m + j));
            printMatriz(matriz, n, m, i, j + 1);
        } else {
            printf("\n");
            printMatriz(matriz, n, m, i + 1, 0);
        }
    }
}

// Função recursiva para dobrar os valores de uma matriz
void doubleMatriz(int* matriz, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            *(matriz + i*m + j) *= 2;
            doubleMatriz(matriz, n, m, i, j + 1);
        } else {
            doubleMatriz(matriz, n, m, i + 1, 0);
        }
    } 
}

// Função recursiva para transpor uma matriz
void transposeMatriz(int* matriz_in, int* matriz_out, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            *(matriz_out + j*n + i) = *(matriz_in + i*m + j);
            transposeMatriz(matriz_in, matriz_out, n, m, i, j + 1);
        } else {
            transposeMatriz(matriz_in, matriz_out, n, m, i + 1, 0);
        }
    }
}

// Função recursiva para espelhar uma matriz horizontalmente
void horizontalMirror(int* matriz_in, int* matriz_out, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            *(matriz_out + i*m + (m - j - 1)) = *(matriz_in + i*m + j);
            horizontalMirror(matriz_in, matriz_out, n, m, i, j + 1);
        } else {
            horizontalMirror(matriz_in, matriz_out, n, m, i + 1, 0);
        }
    }
}

// Função recursiva para espelhar uma matriz verticalmente
void verticalMirror(int* matriz_in, int* matriz_out, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            *(matriz_out + (n - i - 1)*m + j) = *(matriz_in + i*m + j);
            verticalMirror(matriz_in, matriz_out, n, m, i, j + 1);
        } else {
            verticalMirror(matriz_in, matriz_out, n, m, i + 1, 0);
        }
    }
}

// Função recursiva para espelhar uma matriz diagonalmente
void diagonalMirror(int* matriz_in, int* matriz_out, int n, int m, int i, int j) {
    if(i < n) {
        if(j < m) {
            *(matriz_out + (n - i - 1)*m + (m - j - 1)) = *(matriz_in + i*m + j);
            diagonalMirror(matriz_in, matriz_out, n, m, i, j + 1);
        } else {
            diagonalMirror(matriz_in, matriz_out, n, m, i + 1, 0);
        }
    }
}


int main() {

    int n = 0, m = 0, op = 0;

    // Ler as dimensões da matriz e a operação a ser realizada
    scanf("%d%*c", &n);
    scanf("%d%*c", &m);
    scanf("%d%*c", &op);

    // Aloca espaço de memória para as matrizes de entrada e saída
    int *matriz_in = malloc(n * m * sizeof(int));
    int *matriz_out = malloc(n * m * sizeof(int));

    // Lendo a matriz de entrada
    readMatriz(matriz_in, n, m, 0, 0);

    // Realizando a operação solicitada
    switch (op) {

        case 1:
            doubleMatriz(matriz_in, n, m, 0, 0);
            printMatriz(matriz_in, n, m, 0, 0);
        break;

        case 2:
            transposeMatriz(matriz_in, matriz_out, n, m, 0, 0);
            printMatriz(matriz_out, m, n, 0, 0);
        break;

        case 3:
            horizontalMirror(matriz_in, matriz_out, n, m, 0, 0);
            printMatriz(matriz_out, n, m, 0, 0);
        break;

        case 4:
            verticalMirror(matriz_in, matriz_out, n, m, 0, 0);
            printMatriz(matriz_out, n, m, 0, 0);
        break;

        case 5:
            diagonalMirror(matriz_in, matriz_out, n, m, 0, 0);
            printMatriz(matriz_out, n, m, 0, 0);
        break;

    }

    // Libera espaço alocado para as matrizes
    free(matriz_in);
    free(matriz_out);

    return 0;

}