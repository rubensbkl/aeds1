#include "lib.h"

void method_1011() {
    srand(time(NULL));
    int min = 0, max = 0;
    while (min >= max) {
        min = IO_readint("min = ");
        max = IO_readint("max = ");
        if (min >= max) printf("O valor de min deve ser menor que o valor de max!\n");
    }
    int n = IO_readint("n = ");
    int *array = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = randomIntInRange(min, max);
    }
    FILE *file = fopen("DADOS.TXT", "w");
    if (file == NULL) return;
    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", array[i]);
    }
    fclose(file);
}

void method_1012() {
    int arraySize = getIntArraySizeFromFile("DADOS.TXT");

    int *array = (int *) malloc(arraySize * sizeof(int));
    array = readIntArrayFromFile("DADOS.TXT");

    int valor = IO_readint("valor = ");
    int resposta = arraySearch(valor, array, arraySize);

    if (resposta == -1) IO_printf("Valor nao encontrado\n");
    else IO_printf("Valor encontrado na posicao %d\n", resposta);
}

void method_1013() {
    int array1Size = getIntArraySizeFromFile("DADOS1.TXT");
    int array2Size = getIntArraySizeFromFile("DADOS2.TXT");

    if (array1Size != array2Size) {
        IO_printf("Os arquivos possuem tamanhos diferentes\n");
        return;
    }

    int *array1 = (int *) malloc(array1Size * sizeof(int));
    int *array2 = (int *) malloc(array2Size * sizeof(int));

    array1 = readIntArrayFromFile("DADOS1.TXT");
    array2 = readIntArrayFromFile("DADOS2.TXT");
    
    bool resposta = arrayCompare(array1, array2, array1Size);
    printf("Os arquivos%s sao iguais!\n", resposta ? "" : " nao");
}

void method_1014() {
    int array1Size = getIntArraySizeFromFile("DADOS1.TXT");
    int array2Size = getIntArraySizeFromFile("DADOS2.TXT");

    if (array1Size != array2Size) {
        IO_printf("Os arquivos possuem tamanhos diferentes\n");
        return;
    }

    int *array1 = (int *) malloc(array1Size * sizeof(int));
    int *array2 = (int *) malloc(array2Size * sizeof(int));
    int *resposta = (int *) malloc(array2Size * sizeof(int));

    array1 = readIntArrayFromFile("DADOS1.TXT");
    array2 = readIntArrayFromFile("DADOS2.TXT");
    
    resposta = arrayAdd(array1, 1, array2, array1Size);

    for (int i = 0; i < array1Size; i++) {
        printf("%d ", resposta[i]);
    }
    printf("\n");
}

void method_1015() {
    int arraySize = getIntArraySizeFromFile("DADOS1.TXT");

    int *array = (int *) malloc(arraySize * sizeof(int));

    array = readIntArrayFromFile("DADOS1.TXT");
    
    bool resposta = isArrayCrescent(array, arraySize);
    printf("O array%s esta em ordem crescente\n", resposta ? "" : " nao");
}

void method_1016() {
    int rows, columns;

    int **matriz1 = readIntMatrixFromFile("DADOS1.TXT", &rows, &columns);
    if (rows >= 0 && columns >= 0) {
        printf("Erro ao ler a matriz\n");
        return;
    }

    printf("Matriz original:\n");
    printMatrix(matriz1, rows, columns);

    int **matriz2 = matrixTranspose(matriz1, rows, columns);

    printf("\nMatriz transposta:\n");
    printMatrix(matriz2, columns, rows);

    freeMatrix(matriz1, rows);
    freeMatrix(matriz2, rows);
}

void method_1017() {
    int rows, columns;

    int **matrix = readIntMatrixFromFile("DADOS1.TXT", &rows, &columns);
    if (rows <= 0 && columns <= 0) {
        printf("Erro ao ler a matriz\n");
        return;
    }

    printf("Matriz lida:\n");
    printMatrix(matrix, rows, columns);

    bool resposta = matrixZero(matrix, rows, columns);
    printf("A matriz%s tem apenas zeros\n", resposta ? "" : " nao");

    freeMatrix(matrix, rows);
}

void method_1018() {
    int rows1, columns1;
    int rows2, columns2;

    int **matrix1 = readIntMatrixFromFile("DADOS1.TXT", &rows1, &columns1);
    if (rows1 <= 0 || columns1 <= 0) {
        printf("Erro ao ler a matriz 1\n");
        return;
    }

    int **matrix2 = readIntMatrixFromFile("DADOS2.TXT", &rows2, &columns2);
    if (rows2 <= 0 || columns2 <= 0) {
        printf("Erro ao ler a matriz 2\n");
        return;
    }

    if (rows1 != rows2 || columns1 != columns2) {
        printf("As matrizes possuem tamanhos diferentes\n");
        return;
    }

    bool resposta = matrixCompare(matrix1, matrix2, rows1, columns1);
    printf("As matrizes%s sao iguais!\n", resposta ? "" : " nao");

    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
}

void method_1019() {
    int rows1, columns1;
    int rows2, columns2;

    int** matrix1 = readIntMatrixFromFile("DADOS1.TXT", &rows1, &columns1);
    int** matrix2 = readIntMatrixFromFile("DADOS2.TXT", &rows2, &columns2);

    if (rows1 != rows2 || columns1 != columns2) {
        printf("As matrizes não têm o mesmo tamanho.\n");
        return;
    }

    int** result = matrixAdd(matrix1, -1, matrix2, rows1, columns1);

    printMatrix(result, rows1, columns1);

    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
    freeMatrix(result, rows1);
}

void method_1020() {
    int rows1, columns1;
    int rows2, columns2;

    int** matrix1 = readIntMatrixFromFile("DADOS1.TXT", &rows1, &columns1);
    int** matrix2 = readIntMatrixFromFile("DADOS2.TXT", &rows2, &columns2);

    if (rows1 != rows2 || columns1 != columns2) {
        printf("As matrizes não têm dimensões compatíveis para multiplicação.\n");
        return;
    }

    int** result = matrixProduct(matrix1, matrix2, rows1, columns1);

    printf("Matriz resultante:\n");
    printMatrix(result, rows1, columns1);

    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
    freeMatrix(result, rows1);
}

int main(void) {
    int opcao = 0;
    do {
        opcao = IO_readint("Escolha uma opcao: ");
        switch (opcao) {
            case 0: break;
            case 1: method_1011(); break;
            case 2: method_1012(); break;
            case 3: method_1013(); break;
            case 4: method_1014(); break;
            case 5: method_1015(); break;
            case 6: method_1016(); break;
            case 7: method_1017(); break;
            case 8: method_1018(); break;
            case 9: method_1019(); break;
            case 10: method_1020(); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    IO_printf("Aperte ENTER para finalizar:");
    getchar();
    return 0;
}