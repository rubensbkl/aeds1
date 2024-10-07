#include "library.h"

void printMultiplesOfThree(int count) {
    for (int i = 1; i <= count; i++) {
        IO_printf("%d ", 3 * (2 * i - 1));
    }
    IO_printf("\n");
}

void method_0711(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0711\n");

    // Recepção dos dados
    int n = 0;
    n = IO_readint("Insira a quantidade de numeros desejados: ");

    // Processamento e apresentação dos dados
    printMultiplesOfThree(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printMultiplesOfSix(int count) {
    for (int i = 0; i < count; i++) {
        IO_printf("%d ", 60 - (i * 6));
    }
    IO_printf("\n");
}

void method_0712(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0712\n");

    // Recepção dos dados
    int n = 0;
    n = IO_readint("Insira a quantidade de numeros desejados: ");

    // Processamento e apresentação dos dados
    printMultiplesOfSix(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printSequenceOfPowers(int count) {
    int value = 1;
    for (int i = 0; i < count; i++) {
        IO_printf("%d ", value);
        value *= 4;
    }
    IO_printf("\n");
}

void method_0713(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0713\n");

    // Recepção dos dados
    int n = 0; 
    n = IO_readint("Insira a quantidade de numeros desejados: ");

    // Processamento e apresentação dos dados
    printSequenceOfPowers(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printInverseSequenceOfPowers(int count) {
    double value = 1.0;
    for (int i = 0; i < count; i++) {
        IO_printf("1/%.0lf ", value);
        value *= 4;
    }
    IO_printf("\n");
}

void method_0714(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0714\n");

    // Recepção dos dados
    int n = 0;
    n = IO_readint("Insira a quantidade de numeros desejados: ");

    // Processamento e apresentação dos dados
    printInverseSequenceOfPowers(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printRealSequence(int count, double x) {
    for (int i = 0; i < count; i++) {
        IO_printf("1/%.2lf ", pow(x, 2 * i));
    }
    IO_printf("\n");
}

void method_0715(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0715\n");

    // Recepção dos dados
    int n = 0;
    double x = 0;
    n = IO_readint("Insira a quantidade de numeros desejados: ");
    x = IO_readdouble("Insira o valor de x: ");

    // Processamento e apresentação dos dados
    printRealSequence(n, x);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void writeToFile06(int count, double x) {
    FILE *file = fopen("RESULTADO06.TXT", "w");
    if (file != NULL) {
        double sum = 0.0;
        for (int i = 0; i < count; i++) {
            sum += pow(x, 2 * i);
        }
        IO_fprintf(file, "Soma dos primeiros %d termos da sequencia: %.2lf\n", count, sum);
        fclose(file);
    }
}

void method_0716(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0716\n");

    // Recepção dos dados
    int n = 0;
    double x = 0.0;
    n = IO_readint("Insira a quantidade de numeros a serem somados: ");
    x = IO_readdouble("Insira o valor de x: ");

    // Processamento e apresentação dos dados
    writeToFile06(n, x);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void writeToFile07(int count) {
    FILE *file = fopen("RESULTADO07.TXT", "w");
    if (file != NULL) {
        double sum = 0.0;
        double value = 1.0;
        for (int i = 0; i < count; i++) {
            sum += 1.0 / value;
            value *= 4; // Potências de 4
        }
        IO_fprintf(file, "Soma dos primeiros %d inversos das potencias: %.5lf\n", count, sum);
        fclose(file);
    }
}

void method_0717(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0717\n");

    // Recepção dos dados
    int n = 0;
    n = IO_readint("Insira a quantidade de numeros: ");

    // Processamento e apresentação dos dados
    writeToFile07(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void writeToFile08(int count) {
    FILE *file = fopen("RESULTADO08.TXT", "w");
    if (file != NULL) {
        int found = 0, index = 0;
        while (found < count) {
            int fib = fibonacci(index);
            if (fib % 2 == 0 && fib != 0) {
                IO_fprintf(file, "%d ", fib);
                found++;
            }
            index++;
        }
        IO_fprintf(file, "\n");
        fclose(file);
    }
}

void method_0718(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0718\n");

    // Recepção dos dados
    int n = 0;
    n = IO_readint("Insira a quantidade de numeros pares da serie de Fibonacci: ");

    // Processamento e apresentação dos dados
    writeToFile08(n);

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void countLowercaseInFile() {
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("RESULTADO09.TXT", "w");
    if (input != NULL && output != NULL) {
        char c;
        int lowercaseCount = 0;
        while ((c = fgetc(input)) != EOF) {
            if (c >= 'a' && c <= 'z') {
                lowercaseCount++;
            }
        }
        IO_fprintf(output, "Quantidade de minusculas: %d\n", lowercaseCount);
        fclose(input);
        fclose(output);
    }
}

void method_0719(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0719\n");

    // Processamento e apresentação dos dados
    countLowercaseInFile();

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void countDigitsInFile() {
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("RESULTADO10.TXT", "w");
    if (input != NULL && output != NULL) {
        char c;
        int digitCount = 0;
        while ((c = fgetc(input)) != EOF) {
            if (c >= '0' && c <= '4') {
                digitCount++;
            }
        }
        IO_fprintf(output, "Quantidade de digitos <= 4: %d\n", digitCount);
        fclose(input);
        fclose(output);
    }
}

void method_0720(void) {

    // Identificação do programa
    IO_printf("%s\n", "\nMetodo 0720\n");

    // Processamento e apresentação dos dados
    countDigitsInFile();

    // Encerramento
    IO_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int main (void) {

   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   IO_printf("\n");
   IO_printf("%s\n", "Lista_07 - v.1.0 - 29/09/2024");
   IO_printf("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   IO_printf("\n");

    // Selecionar ação

   do {
        // Ler opcão
        opcao = IO_readint("Qual a sua opcao? ");

        // Escolher ação
        switch (opcao) {
            case 0: break;
            case 1: method_0711(); break;
            case 2: method_0712(); break;
            case 3: method_0713(); break;
            case 4: method_0714(); break;
            case 5: method_0715(); break;
            case 6: method_0716(); break;
            case 7: method_0717(); break;
            case 8: method_0718(); break;
            case 9: method_0719(); break;
            case 10: method_0720(); break;
            default: IO_printf("\n%s\n\n", "ERRO: Opcao invalida."); break;
        }
    } while (opcao != 0);
    
    IO_printf("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}