#include <stdio.h>
#include <stdlib.h>

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

    scanf("%d%*c", &n);
    scanf("%d%*c", &m);
    scanf("%d%*c", &op);

    int *matriz_in = malloc(n * m * sizeof(int));

    int *matriz_out = malloc(n * m * sizeof(int));

    readMatriz(matriz_in, n, m, 0, 0);

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

    free(matriz_in);
    free(matriz_out);

    return 0;

}