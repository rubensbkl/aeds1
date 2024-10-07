#include "library.h"

void method_0811(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0811\n");

    // Recepção dos dados
    int size = 0;
    do {
        size = IO_readint("Tamanho do array: ");
    } while (size <= 0);

    // Alocar memória
    int* array = (int*)malloc(size * sizeof(int));

    // Processamento
    for (int i = 0; i < size; i++) {
        do {
            array[i] = IO_readint("Insira um valor: ");
        } while (array[i] <= 0 || array[i] % 2 == 0);
    }

    // Apresentação dos dados
    for (int i = 0; i < size; i++) {
        IO_printf("%d ", array[i]);
    }
    IO_printf("\n");

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void readArrayFromFile(char fileName[], int* array) {
    int size = 0;
    FILE* file = fopen(fileName, "r"); // Abrir arquivo
    if (file != NULL) { // Verificar se o arquivo foi aberto
        fscanf(file, "%d", &size); // Ler tamanho do array

        // Alocar array com base no tamanho lido
        array = (int*)malloc(size * sizeof(int));

        for (int i = 0; i < size; i++) {
            do {
                fscanf(file, "%d", &array[i]);
            } while (array[i] <= 0 || array[i] % 2 == 0);
        }
        fclose(file);

        for (int i = 0; i < size; i++) {
            IO_printf("%d ", array[i]);
        }
    } else {
        printf("Erro ao abrir arquivo %s\n", fileName);
    }
}

void method_0812() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0812\n");

    // Alocar memória
    int* array = NULL;

    // Processamento
    readArrayFromFile("dados812.txt", array);

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

//Gerar valor aleatório no intervalo [min, max]
int gerarInt(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

void method_0813() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0813\n");

    // Recepção dos dados
    int min = 0, max = 0, n = 0;
    int* array = NULL;
    do {
        min = IO_readint("Valor minimo: ");
        max = IO_readint("Valor maximo: ");
    } while (min >= max);
    do {
        n = IO_readint("Quantidade de valores: ");
    } while (n <= 0);

    // Alocar memória
    array = (int*)malloc(n * sizeof(int));

    srand(time(NULL)); // Inicializar o gerador de números aleatórios

    // Gerar numeros aleatorios e armazenar no array
    for (int i = 0; i < n; i++) {
        array[i] = gerarInt(min, max);
    }

    // Abrir aquivo
    FILE* file = fopen("DADOS.TXT", "w");
    if (file == NULL) { // Verificar se o arquivo foi aberto
        printf("Erro ao abrir o arquivo DADOS.TXT.\n");
        free(array);
        return;
    }

    // Escrever dados no arquivo
    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", array[i]);
    }

    // Fechar arquivo
    fclose(file);

    // Apresentação dos dados
    printf("Elementos do arranjo:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

// Abrir arquivo e retornar array com os valores lidos e o tamanho do array
int* lerArquivo(int *n, char filename[]) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL;
    }
    fscanf(file, "%d", n);

    int* array = (int*)malloc((*n) * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(file);
        return NULL;
    }

    for (int i = 0; i < *n; i++) {
        fscanf(file, "%d", &array[i]);
    }

    fclose(file);
    return array;
}

int acharMenorImpar(int n, int* arr) {
    int menor = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] < menor) {
            menor = arr[i];
        }
    }
    return (menor == INT_MAX) ? -1 : menor;
}

void method_0814() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0814\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    int menor = 0;

    // Processamento
    array = lerArquivo(&n, "DADOS.TXT");
    if (array == NULL) {
        IO_printf("Erro ao ler o arquivo.\n");
        return;
    }
    menor = acharMenorImpar(n, array);

    // Apresentação dos dados
    if (menor == -1) {
        IO_printf("Nenhum valor impar encontrado.\n");
    } else {
        IO_printf("O menor valor impar e: %d\n", menor);
    }

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int acharMaiorParDivisivelPorTres(int n, int* array) {
    int maior = -1;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0 && array[i] % 3 == 0) {
            if (maior == -1 || array[i] > maior) {
                maior = array[i];
            }
        }
    }
    return maior;
}

void method_0815() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0815\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    int maior = 0;

    // Processamento
    array = lerArquivo(&n, "DADOS.TXT");
    if (array == NULL) {
        IO_printf("Erro ao ler o arquivo.\n");
        return;
    }
    maior = acharMaiorParDivisivelPorTres(n, array);

    // Apresentação dos dados
    if (maior == -1) {
        IO_printf("Nenhum valor par divisivel por 3 encontrado.\n");
    } else {
        IO_printf("O maior valor par divisivel por 3 e: %d\n", maior);
    }

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

// Function to calculate the average of values in an array
double acharMedia(int n, int* arr) {
    if (n == 0) return 0.0;

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    return (double)soma / n;
}

void escreverArquivo(const char* filename, int* arr, int n) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        exit(1);
    }

    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", arr[i]);
    }

    fclose(file);
}

void method_0816() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0816\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    double media = 0.0;

    // Processamento
    array = lerArquivo(&n, "DADOS.TXT");
    if (array == NULL) {
        IO_printf("Erro ao ler o arquivo.\n");
        return;
    }
    media = acharMedia(n, array);

    // Separar os valores em dois arranjos
    int* menorOuIgual = (int*)malloc(n * sizeof(int));
    int* maior = (int*)malloc(n * sizeof(int));
    int countMenorOuIgual = 0;
    int countMaior = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] <= media) {
            menorOuIgual[countMenorOuIgual++] = array[i];
        } else {
            maior[countMaior++] = array[i];
        }
    }

    // Escrever os valores nos arquivos
    escreverArquivo("menorerouigual.txt", menorOuIgual, countMenorOuIgual);
    escreverArquivo("maior.txt", maior, countMaior);

    // Apresentação dos dados
    IO_printf("A média dos valores é: %.2f\n", media);

    // Desalocar memória
    free(array);
    free(menorOuIgual);
    free(maior);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

bool ordenadoDecrescente(int n, int* arr) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void method_0817() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0817\n");

    // Recepção dos dados
    int array[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int n = sizeof(array) / sizeof(array[0]);

    // Processamento
    bool bIsOrdenado = ordenadoDecrescente(n, array);

    // Apresentação dos dados
    if (bIsOrdenado) {
        IO_printf("Esta ordenado em ordem decrecente.\n");
    } else {
        IO_printf("NAO esta ordenado em ordem decrecente.\n");
    }

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

bool acharValor(int procurado, int inicio, int n, int* arr) {
    for (int i = inicio; i < n; i++) {
        if (arr[i] == procurado) {
            return true;
        }
    }
    return false;
}

void method_0818() {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0818\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    array = lerArquivo(&n, "DADOS.TXT");

    // Ler valor procurado do teclado
    int procurado;
    procurado = IO_readint("Valor a ser procurado: ");

    // Processamento
    bool existe = acharValor(procurado, 0, n, array);

    // Apresentação dos dados
    if (existe) {
        IO_printf("O valor %d foi encontrado.\n", procurado);
    } else {
        IO_printf("O valor %d NAO foi encontrado.\n", procurado);
    }

    // Desalocar memória
    free(array);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int acharPosicao(int procurado, int inicio, int n, int* arr) {
    for (int i = inicio; i < n; i++) {
        if (arr[i] == procurado) {
            return i;
        }
    }
    return -1;
}

void method_0819() {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0819\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    array = lerArquivo(&n, "DADOS.TXT");

    // Ler valor procurado do teclado
    int procurado;
    procurado = IO_readint("Valor a procurar: ");

    // Processamento
    int posicao = acharPosicao(procurado, 0, n, array);

    // Apresentação dos dados
    if (posicao == -1) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Encontrado na posicao: %d\n", posicao);
    }

    // Desalocar memória
    free(array);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int acharQuantos(int procurado, int inicio, int n, int* arr) {
    int count = 0;
    for (int i = inicio; i < n; i++) {
        if (arr[i] == procurado) {
            count++;
        }
    }
    return count;
}

void method_0820() {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0820\n");

    // Recepção dos dados
    int* array = NULL;
    int n = 0;
    array = lerArquivo(&n, "DADOS.TXT");

    // Ler valor procurado do teclado
    int procurado;
    procurado = IO_readint("Valor para procurar: ");

    // Processamento
    int vezes = acharQuantos(procurado, 0, n, array);

    // Apresentação dos dados
    printf("O valor %d aparece %d vezes.\n", procurado, vezes);

    // Desalocar memória
    free(array);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int main (void) {

   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf("\n");
   printf("%s\n", "Lista_08 - v.1.0 - 06/10/2024");
   printf("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf("\n");

    // Selecionar ação

   do {
        // Ler opcão
        printf("%s", "Qual a sua opcao? ");
        scanf("%d", &opcao ); getchar();

        // Escolher ação
        switch (opcao) {
            case 0: break;
            case 1: method_0811(); break;
            case 2: method_0812(); break;
            case 3: method_0813(); break;
            case 4: method_0814(); break;
            case 5: method_0815(); break;
            case 6: method_0816(); break;
            case 7: method_0817(); break;
            case 8: method_0818(); break;
            case 9: method_0819(); break;
            case 10: method_0820(); break;
            default: printf("\n%s\n\n", "ERRO: Opcao invalida."); break;
        }
    } while (opcao != 0);
    
    // Encerramento do programa
    printf("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}