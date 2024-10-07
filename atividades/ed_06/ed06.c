#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
Olá professor, tudo bem?
As funções recursivas nas primeiras questões estão muito ruins pois só depois entendi como elas deveriam ser feitas
para serem mais eficientes. Não tive tempo de refaze-las, mas a partir da questão 0619 elas estão melhores.
*/

void printMultiplesUp(int num, int current, int range) {
    if(range > 0) {
        if(current % num == 0 && current > 0) {
            printf_s("%d ", current);
            printMultiplesUp(num, current + num, range - 1);
        } else {
            printMultiplesUp(num, current + 1, range);
        }
    }
}

void method_0611(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0611\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printMultiplesUp(4, 0, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printMultiplesDown(int num, int current, int range) {
    if(range > 0) {
        if(current % num == 0 && current > 0) {
            printf_s("%d ", current);
            printMultiplesDown(num, current - num, range - 1);
        } else {
            printMultiplesDown(num, current - 1, range);
        }
    }
}

void method_0612(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0612\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printMultiplesDown(4, 4*valor, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printDivMultipleUp(int num, int current, int range) {
    double x = 0.0;
    if(range > 0) {
        if((current % num == 0 || current == 1) && current > 0) {
            x = (double)1/current;
            printf_s("%lf ", x);
            printDivMultipleUp(num, current + 1, range - 1);
        } else {
            printDivMultipleUp(num, current + 1, range);
        }
    }
}


void method_0613(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0613\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printDivMultipleUp(4, 1, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printDivMultipleDown(int num, int current, int range) {
    double x = 0.0;
    if(range > 0) {
        if((current % num == 0 || current == 1) && current > 0) {
            x = (double)1/current;
            printf_s("%lf ", x);
            printDivMultipleDown(num, current - 1, range - 1);
        } else {
            printDivMultipleDown(num, current - 1, range);
        }
    }
}


void method_0614(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0614\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printDivMultipleDown(4, (valor-1)*4, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printAdd(int current, int add, int range) {
    if(range > 0) {
        printf_s("%d ", current);
        printAdd(current + add, add + 2, range - 1);
    }
}

void method_0615(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0615\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printAdd(4, 2, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printDivAdd(int current, int add, int range) {
    double x = 0.0;
    if(range > 0) {
        x = (double)1/current;
        printf_s("%lf ", x);
        printDivAdd(current + add, add + 2, range - 1);
    }
}

void method_0616(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0616\n");

    // Recepção dos dados
    int valor = 0;
    printf_s("Insira a quantidade de numeros desejados: ");
    scanf_s("%d", &valor); getchar();

    // Processamento e apresentação dos dados
    printDivAdd(4, 2, valor);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void printString(char string[], int index) {
    if(index < strlen(string)) {
        printf_s("%c\n", string[index]);
        printString(string, index + 1);
    }
}

void method_0617(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0617\n");

    // Recepção dos dados
    char string[80];
    printf_s("Insira a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string,"\n")] = '\0';

    // Processamento e apresentação dos dados
    printString(string, 0);
    

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int countImpDigits(char string[], int index, int count) {
    if(index < strlen(string)) {
        if (string[index] % 2 == 1) {
            countImpDigits(string, index + 1, count + 1);
        } else {
            countImpDigits(string, index + 1, count);
        }
    } else {
        return count;
    }
}

void method_0618(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0618\n");

    // Recepção dos dados
    int x = 0;
    char string[80];
    printf_s("Insira a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string,"\n")] = '\0';

    // Processamento
    x = countImpDigits(string, 0, 0);

    // Apresentação dos dados
    printf_s("Quantidade de digitos impares: %d", x);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int countMaiFromM(char string[], int index, int count) {
    if(index < strlen(string)) {
        if (string[index] > 'M' && string[index] <= 'Z') {
            countMaiFromM(string, index + 1, count + 1);
        } else {
            countMaiFromM(string, index + 1, count);
        }
    } else {
        return count;
    }
}

void method_0619(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0619\n");

    // Recepção dos dados
    int x = 0;
    char string[80];
    printf_s("Insira a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string,"\n")] = '\0';

    // Processamento
    x = countMaiFromM(string, 0, 0);

    // Apresentação dos dados
    printf_s("Quantidade de maiusculas maiores que M: %d", x);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int isFibonacciPar(int valor, int current) {
    if (valor == 0) {
        return 0;
    } else {
        if(fibonacci(current) % 2 == 0) {
            return fibonacci(current) + isFibonacciPar(valor - 1, current + 1);
        } else {
            return isFibonacciPar(valor, current + 1);
        }
    }
}

void method_0620(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 0620\n");

    // Recepção dos dados
    int valor = 0;
    int resp = 0;
    printf_s("Insira o valor desejado: ");
    scanf_s("%d", &valor); getchar();

    // Processamento
    resp = isFibonacciPar(valor, 1);

    // Apresentação dos dados
    printf_s("A soma dos %d primeiros valores de fibonnacci e: %d", valor, resp);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

double recursao1(int x, int n) {
    if(n == 1) {
        return 1;
    } else {
        return pow(x, (n - 1) * 2) + recursao1(x, n - 1);
    }
}

void method_06E1(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 06E1\n");

    // Recepção dos dados
    double x = 0.0, resp = 0.0;
    int n = 0;
    printf_s("Insira o valor de x: ");
    scanf_s("%lf", &x); getchar();
    printf_s("Insira o valor de n: ");
    scanf_s("%d", &n); getchar();

    // Processamento
    resp = recursao1(x, n);

    // Apresentação dos dados
    printf_s("Resultado: %lf", resp);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

double fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

double numerador(int n) {
    if (n == 2) {
        return 2;
    } else {
        return pow(2, n) - 1 + numerador(n - 1);
    }
}

double recursao2(int n) {
    if(n == 1) {
        return 1;
    } else {
        return (numerador(n) / fatorial(pow(2, n) - 1)) + recursao2(n - 1);
    }
}

void method_06E2(void) {

    // Identificação do programa
    printf_s("%s\n", "\nMetodo 06E2\n");

    // Recepção dos dados
    int n = 0;
    double resp = 0.0;
    printf_s("Insira o valor de n: ");
    scanf_s("%d", &n); getchar();

    // Processamento
    resp = recursao2(n);

    // Apresentação dos dados
    printf_s("Resultado: %lf", resp);

    // Encerramento
    printf_s("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

int main (void) {

   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf_s("\n");
   printf_s("%s\n", "Lista_06 - v.1.0 - 22/09/2024");
   printf_s("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf_s("\n");

    // Selecionar ação

   do {
        // Ler opcão
        printf_s("%s", "Qual a sua opcao? ");
        scanf_s("%d", &opcao ); getchar();

        // Escolher ação
        switch (opcao) {
            case 0: break;
            case 1: method_0611(); break;
            case 2: method_0612(); break;
            case 3: method_0613(); break;
            case 4: method_0614(); break;
            case 5: method_0615(); break;
            case 6: method_0616(); break;
            case 7: method_0617(); break;
            case 8: method_0618(); break;
            case 9: method_0619(); break;
            case 10: method_0620(); break;
            case 11: method_06E1(); break;
            case 12: method_06E2(); break;
            default: printf_s("\n%s\n\n", "ERRO: Opcao invalida."); break;
        }
    } while (opcao != 0);
    
    printf_s("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}