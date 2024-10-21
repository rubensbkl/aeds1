/**
   IO - Console input/output library.
   @author  PUC-Minas - ICEI
   @version 0.1 - 2023-1b
   
   IO - v2023-1_0.1 - __ / __ / _____
   Author: Rubens Dias Bicalho

 */
// ---------------------- lista de dependencias


#include <stdio.h>      // para as funcoes de entrada e saida
#include <stdlib.h>     // para as funcoes de alocacao de memoria    
#include <math.h>       // para as funcoes matematicas
#include <string.h>     // para as funcoes de cadeias de caracteres
#include <stdbool.h>    // para as funcoes logicas
#include <time.h>       // para as funcoes de tempo
#include <limits.h>     // para as constantes de limites

// #include <stddef.h>    // para definicoes basicas
// #include <stdarg.h>    // para tratar argumentos
// #include <ctype.h>     // para tipos padroes
// #include <wchar.h>     // para 16-bit characters
// #include <iso646.h>    // para and, or, xor, not alternatives

// ---------------------- redefinicoes uteis

#define IO_printf   printf  // melhor: printf_s
#define IO_scanf    scanf   // melhor: scanf_s
#define IO_fprintf  fprintf // melhor: fprintf_s
#define IO_fscanf   fscanf  // melhor: fscanf_s

// ---------------------- definicoes de constantes

const   bool FALSE          = false;  // definir constante
const   bool TRUE           = true ;  // definir constante

const   char EOS            = '\0';   // definir fim de cadeia de caracteres
const   char EOL            = '\n';   // definir mudanca de linha
const   char ENDL[]         = "\n";   // definir mudanca de linha

const   char STR_EMPTY[]    =  "" ;   // definir cadeia de caracteres vazia
const   int  STR_SIZE       =  80 ;   // definir tamanho padrao para caracteres

// ---------------------- definicoes de tipos

typedef char*   chars  ;            // definir cadeia  de caracteres
typedef int*    ints   ;            // definir arranjo de inteiros
typedef double* doubles;            // definir arranjo de reais
typedef bool*   bools  ;            // definir arranjo de logicos

// ---------------------- definicoes de variaveis globais

int  IO_error   = 0;                // inicialmente sem erros
bool IO_trace   = true;             // inicialmente habilitado

// ---------------------- definicoes de funcoes e procedimentos

// ---------------------- para tratamento de erros

void IO_debugOFF() {
    IO_trace = false;
}

void IO_debugON() {
    IO_trace = true;
}

// ---------------------- para entradas e saidas

void IO_flush() {
    int  x = 0;
    do {
        x = getchar( );
    } while (x != EOF && x != '\n');
    clearerr (stdin);
}

int IO_readint (const char * const text)
{
    int x = 0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%d", &x);
    IO_flush();
    return (x);
}

double IO_readdouble ( const char * const text )
{
    double x = 0.0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%lf", &x);
    IO_flush();
    return (x);
}

bool IO_readbool(const char * const text) {
    int x = 0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%d", &x);
    IO_flush();
    return (x!=0);
}

char IO_readchar ( const char * const text )
{
    char x = '0';
    if ( IO_trace ) {
       IO_printf ( "%s", text   );
    }
    do {
        x = getchar( );
    } while ('\n' == x);
    IO_flush();
    return (x);
}

chars IO_new_chars (int size)
{
    return ((chars)malloc((size+1)*sizeof(char)));
}

chars IO_readstring ( const char * const text )
{
    chars buffer = IO_new_chars(STR_SIZE+1);
    if (IO_trace) IO_printf ("%s", text);
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer,"\n")] = '\0';
    IO_flush();
    return (buffer);
}

/*
 * Random
 */

int randomIntInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}


/**
 * File
 */

int getIntArraySizeFromFile(const char filename[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo");
        return -1;
    }
    int n = 0;
    int x;
    while (fscanf(file, "%d", &x) == true) {
        n++;
    }
    fclose(file);
    return n;
}

int* readIntArrayFromFile(const char filename[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo");
        return NULL;
    }

    int size = getIntArraySizeFromFile(filename);
    int *array = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        fscanf(file, "%d", &array[i]);
    }
    fclose(file);
    return array;
}

/**
 * Array
 */

int arraySearch(int value, int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) return i + 1;
    }
    return -1;
}

bool arrayCompare(int *array1, int *array2, int size) {
    for (int i = 0; i < size; i++) {
        if (array1[i] != array2[i]) return false;
    }
    return true;
}

int* arrayAdd(int *array1, int multi, int *array2, int size) {
    int *array = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = array1[i] + (array2[i] * multi);
    }   
    return array;
}

bool isArrayCrescent(int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] > array[i + 1]) return false;
    }
    return true;
}

/**
 * Matrix
 */

void printMatrix(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** readIntMatrixFromFile(const char filename[], int *rows, int *columns) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return NULL;
    }

    fscanf(file, "%d %d", rows, columns);

    int **matrix = (int **)malloc((*rows) * sizeof(int *));
    for (int i = 0; i < *rows; i++) {
        matrix[i] = (int *)malloc((*columns) * sizeof(int));
    }

    for (int i = 0; !feof(file) && i < *rows; i++) {
        for (int j = 0; !feof(file) && j < *columns; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    fclose(file);
    return matrix;
}

int** matrixTranspose(int **matrix, int rows, int columns) {
    int **resposta = (int **)malloc(columns * sizeof(int *));
    for (int i = 0; i < columns; i++) {
        resposta[i] = (int *)malloc(rows * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            resposta[j][i] = matrix[i][j];
        }
    }

    return resposta;
}

bool matrixZero(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] != 0) return false;
        }
    }
    return true;
}

bool matrixCompare(int **matrix1, int **matrix2, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix1[i][j] != matrix2[i][j]) return false;
        }
    }
    return true;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int** matrixAdd(int** matrix1, int multi, int** matrix2, int rows, int columns) {
    int** resposta = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        resposta[i] = (int*)malloc(columns * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            resposta[i][j] = matrix1[i][j] + multi * matrix2[i][j];
        }
    }

    return resposta;
}

int** matrixProduct(int** matrix1, int** matrix2, int rows, int columns) {
    int** resposta = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        resposta[i] = (int*)malloc(columns * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            resposta[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    return resposta;
}