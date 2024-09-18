#include <stdio.h>
#include <string.h>

void method_0311(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0311\n");
    // Recepção dos dados
    char palavra[100];
    printf("Insira uma palavra: ");
    scanf("%s", palavra); getchar();
    // Processamento e apresentação dos dados
    printf("Letras maiusculas: ");
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%c", palavra[i]);
        }
    }
    printf("\n");
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0312(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0312\n");
    // Recepção dos dados
    char palavra[100];
    printf("Insira uma palavra: ");
    scanf("%s", palavra); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    printf("Letras minusculas: ");
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            printf("%c", palavra[i]);
            count++;
        }
    }
    printf("\nTotal de letras minusculas: %d\n", count);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0313(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0313\n");

    // Recepção dos dados
    char palavra[100];
    printf("Insira uma palavra: ");
    scanf("%s", palavra); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    int length = strlen(palavra);
    printf("Letras minusculas (do fim para o inicio): ");
    for (int i = length - 1; i >= 0; i--) {
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            printf("%c", palavra[i]);
            count++;
        }
    }
    printf("\nTotal de letras minusculas: %d\n", count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0314(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0314\n");
    // Recepção dos dados
    char cadeia[100];
    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", cadeia); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    printf("Letras (maiusculas ou minusculas): ");
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if ((cadeia[i] >= 'A' && cadeia[i] <= 'Z') || (cadeia[i] >= 'a' && cadeia[i] <= 'z')) {
            printf("%c", cadeia[i]);
            count++;
        }
    }
    printf("\nTotal de letras: %d\n", count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0315(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0315\n");
    // Recepção dos dados
    char cadeia[100];
    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", cadeia); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    int length = strlen(cadeia);
    printf("Digitos (do fim para o inicio): ");
    for (int i = length - 1; i >= 0; i--) {
        if (cadeia[i] >= '0' && cadeia[i] <= '9') {
            printf("%c", cadeia[i]);
            count++;
        }
    }
    printf("\nTotal de digitos: %d\n", count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0316(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0316\n");

    // Recepção dos dados
    char cadeia[100];
    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", cadeia);

    // Processamento e apresentação dos dados
    int count = 0;
    printf("Caracteres nao digitos e nao letras: ");
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (!((cadeia[i] >= 'A' && cadeia[i] <= 'Z') || (cadeia[i] >= 'a' && cadeia[i] <= 'z') || (cadeia[i] >= '0' && cadeia[i] <= '9'))) {
            printf("%c", cadeia[i]);
            count++;
        }
    }
    printf("\nTotal de caracteres nao digitos e nao letras: %d\n", count);

    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
    getchar();
}

void method_0317(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0317\n");

    // Recepção dos dados
    int a, b, n;
    printf("Insira o valor de a: ");
    scanf("%d", &a); getchar();
    printf("Insira o valor de b: ");
    scanf("%d", &b); getchar();
    printf("Insira a quantidade de valores a serem testados: ");
    scanf("%d", &n); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        printf("Insira um valor: ");
        scanf("%d", &x);
        if (x % 5 == 0 && x >= a && x <= b) {
            count++;
        }
    }
    printf("Total de valores multiplos de 5 no intervalo [%d:%d]: %d\n", a, b, count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0318(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0318\n");
    // Recepção dos dados
    int a, b, n;
    printf("Insira o valor de a: ");
    scanf("%d", &a); getchar();
    printf("Insira o valor de b: ");
    scanf("%d", &b); getchar();
    printf("Insira a quantidade de valores a serem testados: ");
    scanf("%d", &n); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        printf("Insira um valor: ");
        scanf("%d", &x);
        if (x % 3 == 0 && x % 5 != 0 && x >= a && x <= b) {
            count++;
        }
    }
    printf("Total de valores multiplos de 3 e nao multiplos de 5 no intervalo [%d:%d]: %d\n", a, b, count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0319(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0319\n");
    // Recepção dos dados
    double a, b;
    int n;
    printf("Insira o valor de a: ");
    scanf("%lf", &a); getchar();
    printf("Insira o valor de b: ");
    scanf("%lf", &b); getchar();
    printf("Insira a quantidade de valores a serem testados: ");
    scanf("%d", &n); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    for (int i = 0; i < n; i++) {
        double x;
        printf("Insira um valor: ");
        scanf("%lf", &x);
        int parte_int = (int)x;
        if (x > a && x < b && parte_int % 2 != 0) {
            count++;
        }
    }
    printf("Total de valores no intervalo (%.2lf:%.2lf) com partes inteiras impares: %d\n", a, b, count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0320(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0320\n");
    // Recepção dos dados
    double a, b;
    int n;
    printf("Insira o valor de a: ");
    scanf("%lf", &a); getchar();
    printf("Insira o valor de b: ");
    scanf("%lf", &b); getchar();
    printf("Insira a quantidade de valores a serem testados: ");
    scanf("%d", &n); getchar();
    // Processamento e apresentação dos dados
    int count = 0;
    for (int i = 0; i < n; i++) {
        double x;
        printf("Insira um valor: ");
        scanf("%lf", &x);
        double parte_frac = x - (int)x;
        if (parte_frac <= a || parte_frac >= b) {
            count++;
        }
    }
    printf("Total de valores com partes fracionarias fora do intervalo (%.2lf:%.2lf): %d\n", a, b, count);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_03E2(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 03E2\n");
    // Recepção dos dados
    char cadeia[100];
    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", cadeia); getchar();
    // Processamento e apresentação dos dados
    int semletras = 1;
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if ((cadeia[i] >= 'A' && cadeia[i] <= 'Z') || (cadeia[i] >= 'a' && cadeia[i] <= 'z')) {
            semletras = 0;
            break;
        }
    }
    if (semletras) {
        printf("A sequencia contem apenas simbolos que NAO sao letras.\n");
    } else {
        printf("A sequencia contem letras.\n");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}



int main ( void ) {
   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf ("\n");
   printf ("%s\n", "Lista_03 - v.1.0 - 01/09/2024");
   printf ("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf ("\n");

   do {
        // Ler opcão
        printf ("%s", "Qual a sua opcao? ");
        scanf  ("%d", &opcao ); getchar();

        // Escolher ação
        switch ( opcao ) {
            case 0:             break;
            case 1: method_0311(); break;
            case 2: method_0312(); break;
            case 3: method_0313(); break;
            case 4: method_0314(); break;
            case 5: method_0315(); break;
            case 6: method_0316(); break;
            case 7: method_0317(); break;
            case 8: method_0318(); break;
            case 9: method_0319(); break;
            case 10: method_0320(); break;
            case 12: method_03E2(); break;
            default:
                printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                break;
        }
    } while ( opcao != 0 );
    
    printf ("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}