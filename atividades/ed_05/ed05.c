#include <stdio.h>
#include <math.h>

void method_0511(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0511\n");

    // Recepção dos dados
    int x = 1, y = 4;
    int n;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    for (x = 1; x <= n; x++) {
        printf("%d\t%d\n", x, y);
        y = y + 4;
    }

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0512(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0512\n");

    // Recepção dos dados
    int x = 1, y = 12;
    int n;
    printf("Insira a quantidade de pares de valores: ");
    scanf_s("%d", &n); getchar();

    // Processamento e apresentação dos dados
    while (x <= n) {
        if (y % 3 == 0 && y % 4 == 0) {
            printf("%d\t%d\n", x, y);
            y = y + 4;
            x++;
        } else {
            y = y + 4;
        }
    }

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0513(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0513\n");

    // Recepção dos dados
    int x = 1, y = 1;
    int n;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    for (int i = 0; i < n; i++) {
        y = y * 3;
    }
    for (x = 1; x <= n; x++) {
        printf("%d\t%d\n", x, y);
        y = y / 3;
    }

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0514(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0514\n");

    // Recepção dos dados
    int x = 1;
    double y = 4;
    int n;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    for (x = 1; x <= n; x++) {
        printf("%d\t%lf\n", x, (1/y));
        y = y + 4;
    }

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0515() {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0515\n");

    // Recepção dos dados
    double x = 0, y = 1, pot = 0;
    int numero = 0;
    double pot = 0.0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x); getchar();
    printf("Digite a quantidade: ");
    scanf("%d", &numero); getchar();

    // Processamento e apresentação dos dados
    for(int i=0; i<numero; i++) {
        pot = pow(x,y);
        printf("%lf\n", (1/pot));
        y += 2.0;
    }

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
    
}

void method_0516(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0516\n");

    // Recepção dos dados
    int x = 1, y = 4;
    int n, soma = 0;
    printf("Insira a quantidade de pares de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    while (x <= n) {
        if (y % 5 != 0) {
            printf("%d\t%d\n", x, y);
            soma += y;
            y = y + 4;
            x++;
        } else {
            y = y + 4;
        }
    }
    printf("Soma: %d\n", soma);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0517(void) {

    // Identificação do programa
    printf("%s\n", "\nMetodo 0517\n");

    // Recepção dos dados
    double y = 0;
    int temp = 3, n, x = 1;
    printf("Insira a quantidade de pares de valores: ");
    scanf_s("%d", &n); getchar();

    // Processamento e apresentação dos dados
    while (x <= n) {
        if (temp % 3 == 0 && temp % 5 != 0) {
            y += ((double)1/temp);
            temp = temp + 3;
            x++;
        } else {
            temp = temp + 3;
        }
    }

    printf_s("Soma: %lf\n", y);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();

}

void method_0518(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0518\n");

    // Recepção dos dados
    int n;
    printf("Insira a quantidade de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    int soma = 0;
    for (int i = 4; i < 4 + n; i++) {
        soma += i;
    }
    printf("Soma dos primeiros %d numeros naturais comecando em 4: %d\n", n, soma);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0519(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0519\n");

    // Recepção dos dados
    int n;
    printf("Insira a quantidade de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    int soma = 0;
    for (int i = 4; i < 4 + n; i++) {
        soma += i * i;
    }
    printf("Soma dos quadrados dos primeiros %d numeros naturais comecando em 4: %d\n", n, soma);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0520(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0520\n");

    // Recepção dos dados
    int n;
    printf("Insira a quantidade de valores: ");
    scanf("%d", &n); getchar();

    // Processamento e apresentação dos dados
    double soma = 0;
    for (int i = 4; i < 4 + n; i++) {
        soma += 1.0 / i;
    }
    printf("Soma dos inversos dos primeiros %d numeros naturais comecando em 4: %lf\n", n, soma);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int main (void) {

   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf("\n");
   printf("%s\n", "Lista_05 - v.1.0 - 15/09/2024");
   printf("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf("\n");

   do {
        // Ler opcão
        printf("%s", "Qual a sua opcao? ");
        scanf("%d", &opcao ); getchar();

        // Escolher ação
        switch (opcao) {
            case 0: break;
            case 1: method_0511(); break;
            case 2: method_0512(); break;
            case 3: method_0513(); break;
            case 4: method_0514(); break;
            case 5: method_0515(); break;
            case 6: method_0516(); break;
            case 7: method_0517(); break;
            case 8: method_0518(); break;
            case 9: method_0519(); break;
            case 10: method_0520(); break;
            default: printf("\n%s\n\n", "ERRO: Opcao invalida."); break;
        }
    } while (opcao != 0);
    
    printf("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}