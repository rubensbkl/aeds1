#include "io.h"

void method_0211(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0211\n");
    // Recepção dos dados
    int num = 0;
    num = IO_readint("Insira um numero: ");
    // Apresentação dos dados
    if (num % 2 == 0) {
        printf("%s\n", "O numero e par");
    } else {
        printf("%s\n", "O numero e impar");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0212(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0212\n");
    // Recepção dos dados
    int num = 0;
    num = IO_readint("Insira um numero: ");
    // Apresentação dos dados
    if (num % 2 == 1 && num < -15) {
        printf("%s\n", "O numero e impar e menor que -15");
    } else if (num % 2 == 0 && num > 15) {
        printf("%s\n", "O numero e par e maior que -15");
    } else {
        printf("%s\n", "O numero nao corresponde as condições");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0213(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0213\n");
    // Recepção dos dados
    int num = 0;
    num = IO_readint("Insira um numero: ");
    // Apresentação dos dados
    if (num > 25 && num < 45) {
        printf("%s\n", "O numero pertence ao intervalo [25, 45]");
    } else {
        printf("%s\n", "O numero não pertence ao intervalo [25, 45]");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0214(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0214\n");
    // Recepção dos dados
    int num = 0;
    num = IO_readint("Insira um numero: ");
    // Apresentação dos dados
    if (num >= 20 && num <= 60) {
        printf("%s\n", "O numero pertence ao intervalo [20, 60]");
    } else {
        printf("%s\n", "O numero não pertence ao intervalo [20, 60]");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0215(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0215\n");
    // Recepção dos dados
    int num = 0;
    int resp = 0;
    num = IO_readint("Insira um numero: ") ;
    // Processamento dos dados
    if (num >= 10 && num <= 25) {
        resp++;
    }
    if (num > 15 && num < 50) {
        resp++;
    }
    // Apresentação dos dados
    if (resp == 2) {
        printf("%s\n", "O numero pertence ao duas intersessoes");
    } else if (resp == 1){
        printf("%s\n", "O numero pertence a apenas uma intersessao");
    } else {
        printf("%s\n", "O numero nao pertence a nenhuma intersessao");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0216(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0216\n");
    // Recepção dos dados
    int num0 = 0;
    int num1 = 0;
    num0 = IO_readint("Insira o primeiro numero: ");
    num1 = IO_readint("Insira o segundo numero: ");
    // Apresentação dos dados
    if (num0 % 2 == 0) {
        printf("%s%lf\n", "O primeiro numero e par", num0);
    } else {
        printf("%s%lf\n", "O primeiro numero não e par", num0);
    }
    if (num1 % 2 == 1) {
        printf("%s%lf\n", "O segundo numero e impar", num1);
    } else {
        printf("%s%lf\n", "O segundo numero não e impar", num1);
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0217(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0217\n");
    // Recepção dos dados
    int num0 = 0;
    int num1 = 0;
    num0 = IO_readint("Insira o primeiro numero: ");
    num1 = IO_readint("Insira o segundo numero: ");
    // Apresentação dos dados
    if (num0 % 2 == 1 && num0 < 0) {
        printf("%s\n", "O primeiro numero e impar e negativo");
    }
    if (num1 % 2 == 0 && num1 >= 0) {
        printf("%s\n", "O segundo numero e par e positivo");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0218(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0218\n");
    // Recepção dos dados
    double num0 = 0;
    double num1 = 0;
    num0 = IO_readint("Insira o primeiro numero: ");
    num1 = IO_readint("Insira o segundo numero: ");
    // Apresentação dos dados
    if (num0 < (num1/2)) {
        printf("%s\n", "O primeiro numero e menor que a metade do segundo");
    } else if (num0 == (num1/2)) {
        printf("%s\n", "O primeiro numero e igual a metade do segundo");
    } else if (num0 > (num1/2)) {
        printf("%s\n", "O primeiro numero e maior que a metade do segundo");
    } else {
        printf("%s\n", "Erro");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0219(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0219\n");
    // Recepção dos dados
    double primeiro = 0;
    double segundo = 0;
    double ultimo = 0;
    double menor = 0;
    double maior = 0;
    primeiro = IO_readdouble("Insira o primeiro numero: ");
    segundo = IO_readdouble("Insira o segundo numero: ");
    ultimo = IO_readdouble("Insira o ultimo numero: ");
    // Processamento dos dados
    if (primeiro > ultimo) {
        maior = primeiro;
        menor = ultimo;
    } else {
        maior = ultimo;
        menor = primeiro;
    }
    // Apresentação dos dados
    if (primeiro != ultimo) {
        if (segundo > menor && segundo < maior) {
            printf("%s\n", "O segundo numero esta entre o primeiro e o ultimo");
        } else {
            printf("%s\n", "O segundo numero nao esta entre o primeiro e o ultimo");
        }
    } else {
        printf("%s\n", "O primeiro e o ultimo numero sao iguais");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0220(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0220\n");
    // Recepção dos dados
    double primeiro = 0;
    double segundo = 0;
    double terceiro = 0;
    double menor = 0;
    double maior = 0;
    primeiro = IO_readdouble("Insira o primeiro numero: ");
    segundo = IO_readdouble("Insira o segundo numero: ");
    terceiro = IO_readdouble("Insira o terceiro numero: ");
    // Processamento dos dados
    if (primeiro > terceiro) {
        maior = primeiro;
        menor = terceiro;
    } else {
        maior = terceiro;
        menor = primeiro;
    }
    // Apresentação dos dados
    if (primeiro != segundo && primeiro != terceiro && segundo != terceiro) {
        if (segundo > menor && segundo < maior) {
            printf("%s\n", "O segundo numero esta entre o primeiro e o terceiro");
        } else {
            printf("%s\n", "O segundo numero nao esta entre o primeiro e o terceiro");
        }
    } else {
        printf("%s\n", "O primeiro e o terceiro numero sao iguais");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar(); 
}

void method_02E1(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 02E1\n");
    // Recepção dos dados
    char primeiro = 0, segundo = 0, terceiro = 0;
    primeiro = IO_readchar("Insira o primeiro caractere: ");
    segundo = IO_readchar("Insira o segundo caractere: ");
    terceiro = IO_readchar("Insira o terceiro caractere: ");
    // Apresentação dos dados
    if ((primeiro > segundo && primeiro < terceiro) || (primeiro > terceiro && primeiro < segundo)) {
        printf("O primeiro caractere esta entre os outros dois\n");
    } else if (primeiro == segundo || primeiro == terceiro) {
        printf("O primeiro caractere e igual a um dos outros dois\n");
    } else {
        printf("O primeiro caractere nao esta entre os outros dois e nao e igual a nenhum deles\n");
    }
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_02E2(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 02E2\n");
    // Recepção dos dados
    char primeiro = 0, segundo = 0, terceiro = 0;
    primeiro = IO_readchar("Insira o primeiro caractere: ");
    segundo = IO_readchar("Insira o segundo caractere: ");
    terceiro = IO_readchar("Insira o terceiro caractere: ");
    // Verificação e apresentação dos dados
    if (segundo != terceiro) {
        if ((primeiro < segundo && primeiro < terceiro) || (primeiro > segundo && primeiro > terceiro)) {
            printf("O primeiro caractere esta fora do intervalo definido pelos outros dois\n");
        } else {
            printf("O primeiro caractere esta dentro do intervalo definido pelos outros dois\n");
        }
    } else {
        printf("O segundo e terceiro caractere sao iguais, nao ha intervalo definido\n");
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
   printf ("%s\n", "Lista_02 - v.1.0 - 25/08/2024");
   printf ("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf ("\n");

   do {
        // Ler opcão
        printf ("%s", "Qual a sua opcao? ");
        scanf  ("%d", &opcao ); getchar();

        // Escolher ação
        switch ( opcao ) {
            case 0:             break;
            case 1: method_0211(); break;
            case 2: method_0212(); break;
            case 3: method_0213(); break;
            case 4: method_0214(); break;
            case 5: method_0215(); break;
            case 6: method_0216(); break;
            case 7: method_0217(); break;
            case 8: method_0218(); break;
            case 9: method_0219(); break;
            case 10: method_0220(); break;
            case 11: method_01E1(); break;
            case 12: method_01E2(); break;
            default:
                printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                break;
        }
    } while ( opcao != 0 );
    
    printf ("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}