#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void showAllChars() {
    char current = 0;
    for (int i = 0; i < 256; i++) {
        printf_s("%d\t%c\n", current, current);
        current++;
    }
}

bool between(char min, char max, char c) {
    if (c >= min && c <= max) {
        return true;
    }
    return false;
}

int countBetween(char min, char max, char string[]) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= min && string[i] <= max) {
            count++;
        }
    }
    return count;
}

void printBetween(char min, char max, char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= min && string[i] <= max) {
            printf_s("%c", string[i]);
        }
    }
    printf_s("\n");
}

int countString(char string[]) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 48 && string[i] <= 57 && (string[i]) % 2 == 1) {
            count++;
        }
    }
    return count;
}

void showNotAlpha(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] < 48 || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || string[i] > 122) {
            printf_s("%c", string[i]);
        }
    }
    printf_s("\n");
}

void showAlpha(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        if ((string[i] >= 48 && string[i] <= 57) || (string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) {
            printf_s("%c", string[i]);
        }
    }
    printf_s("\n");
}

int countString2(char* string){
    int count = 0;
    for(int i=0; i<strlen(string); i++) {
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z') || (string[i] >= '1' && string[i] <= '9')) {
            count++;
        }
    }
    printf("Quantidade de alfanumericos na string: %d\n", count);

    return count;
}

void method_0411(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0411\n");

    // Recepção dos dados
    int qtd = 0, in = 0, out = 0;
    double min = 0, max = 0, current = 0;
    scanf_s("%d", &qtd);
    scanf_s("%lf", &min);
    scanf_s("%lf", &max);

    // Processamento
    for (int i = 0; i < qtd; i++) {
        scanf_s("%lf", &current);
        if (current >= min && current <= max) {
            in++;
        } else {
            out++;
        }
    }

    // Apresentação dos dados
    printf_s("Valores dentro do intervalo [%.2lf:%.2lf]: %d\n", min, max, in);
    printf_s("Valores fora do intervalo [%.2lf:%.2lf]: %d\n", min, max, out);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0412(void) {
    
    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0412\n");

    // Recepção dos dados
    char *sequencia = calloc(80, sizeof(char));
    int qtd = 0;

    printf_s("Insira a sequencia: ");
    fgets(sequencia, 80, stdin);

    // Processamento
    for (int i = 0; i < strlen(sequencia); i++) {
        if (between('a', 'l', sequencia[i])) {
            qtd++;
        }
    }

    // Apresentação dos dados
    printf_s("Quantidade de letras minusculas menores que 'm': %d\n", qtd);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0413(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0413\n");

    // Recepção dos dados
    char *sequencia = calloc(80, sizeof(char));
    int qtd;

    printf_s("Insira a sequencia: ");
    fgets(sequencia, 80, stdin);

    // Processamento
    qtd = countBetween('a', 'l', sequencia);

    // Apresentação dos dados
    printf_s("Quantidade de letras minusculas menores que 'm': %d\n", qtd);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0414(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0414\n");

    // Recepção dos dados
    char *x = calloc(80, sizeof(char));
    char *y = calloc(80, sizeof(char));
    int currenty = 0;

    printf_s("Insira a sequencia: ");
    fgets(x, 80, stdin);

    // Processamento
    for (int i = 0; i < strlen(x); i++) {
        if (between('a', 'l', x[i])) {
            y[currenty] = x[i];
            currenty++;
        }
    }

    // Apresentação dos dados
    printf_s("Sequencia filtrada: %s\n", y);

    // Free
    free(x);
    free(y);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0415(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0415\n");

    // Recepção dos dados
    char *string = calloc(80, sizeof(char));
    int min = 0, mai = 0;

    printf_s("Insira a sequencia: ");
    fgets(string, 80, stdin);

    // Processamento

    min = countBetween('a', 'l', string);
    mai = countBetween('A', 'L', string);

    // Apresentação dos dados
    printf_s("Quantidade de letras minusculas menores que 'm': %d\n", min);
    printf_s("Quantidade de letras maiusculas menores que 'M': %d\n", mai);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0416(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0416\n");

    // Recepção dos dados
    char *string = calloc(80, sizeof(char));

    printf_s("Insira a sequencia: ");
    fgets(string, 80, stdin);

    // Processamento e apresentação dos dados
    printBetween('a', 'l', string);
    printBetween('A', 'L', string);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0417(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0417\n");

    // Recepção dos dados
    char *string = calloc(80, sizeof(char));
    int count = 0;

    printf_s("Insira a sequencia: ");
    fgets(string, 80, stdin);

    // Processamento
    count = countString(string);

    // Apresentação dos dados
    printf_s("Quantidade de digitos impares: %d\n", count);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0418(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0418\n");

    // Recepção dos dados
    char *string = calloc(80, sizeof(char));

    printf_s("Insira a sequencia: ");
    fgets(string, 80, stdin);

    // Processamento e apresentação dos dados
    showNotAlpha(string);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0419(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0419\n");

    // Recepção dos dados
    char *string = calloc(80, sizeof(char));

    printf_s("Insira a sequencia: ");
    fgets(string, 80, stdin);

    // Processamento e apresentação dos dados
    showAlpha(string);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0420(void) {

    // Identificação do programa
    printf("Metodo 0420\n");

    // Recepção dos dados
    char* string = calloc(80, sizeof(char));
    int numero = 0;
    int temp = 0;

    printf_s("Insira a quantidade de strings: ");
    scanf_s("%d", &numero); getchar();

    // Processar e apresentar os dados
    for(int i=0; i<numero; i++) {
        fgets(string, 80, stdin);
        temp += countString2(string);
    }

    printf_s("\nQuantidade de todos alfanumericos nas strings: %d\n", temp);

    // Free
    free(string);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}


int main ( void ) {
   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf_s("\n");
   printf_s("%s\n", "Lista_04 - v.1.0 - 08/09/2024");
   printf_s("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf_s("\n");

   do {
        // Ler opcão
        printf_s("%s", "Qual a sua opcao? ");
        scanf ("%d", &opcao ); getchar();

        // Escolher ação
        switch ( opcao ) {
            case 0: break;
            case 1: method_0411(); break;
            case 2: method_0412(); break;
            case 3: method_0413(); break;
            case 4: method_0414(); break;
            case 5: method_0415(); break;
            case 6: method_0416(); break;
            case 7: method_0417(); break;
            case 8: method_0418(); break;
            case 9: method_0419(); break;
            case 10: method_0420(); break;
            case 20: showAllChars(); break;
            default: printf ( "\n%s\n\n", "ERRO: Opcao invalida." ); break;
        }
    } while (opcao != 0);
    
    printf ("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}