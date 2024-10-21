#include "io.h"

void method_0111(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0111\n");
    // Recepção dos dados
    int lado = 0;
    lado = IO_readint("Insira o lado do quadrado: ") * 2;
    // Processamento dos dados
    int area = lado * lado;
    // Apresentação dos dados
    printf("%s%lf\n", "Area do outro quadrado = ", area);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0112(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0112\n");
    // Recepção dos dados
    int lado = 0;
    lado = IO_readint("Insira o lado do quadrado: ") / 3;
    // Processamento dos dados
    int perimetro = 4 * lado;
    int area = lado * lado;
    // Apresentação dos dados
    printf("%s%lf\n", "Area do quadrado = ", area);
    printf("%s%lf\n", "Perimetro do quadrado = ", perimetro);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0113(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0113\n");
    // Recepção dos dados
    int lado0 = 0;
    int lado1 = 0;
    lado0 = IO_readint("Insira o lado do quadrado: ") * 3;
    lado1 = IO_readint("Insira o outro lado do quadrado: ") * 3;
    // Processamento dos dados
    int area = lado0 * lado1;
    // Apresentação dos dados
    printf("%s%lf\n", "Area do quadrado = ", area);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0114(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0114\n");
    // Recepção dos dados
    int lado0 = 0;
    int lado1 = 0;
    lado0 = IO_readint("Insira o lado do quadrado: ") / 6;
    lado1 = IO_readint("Insira o outro lado do quadrado: ") / 6;
    // Processamento dos dados
    int area = lado0 * lado1;
    int perimetro = lado0 * 2 + lado1 * 2;
    // Apresentação dos dados
    printf("%s%lf\n", "Area do quadrado = ", area);
    printf("%s%lf\n", "Perimetro do quadrado = ", perimetro);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0115(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0115\n");
    // Recepção dos dados
    double base = 0;
    double altura = 0;
    base = IO_readdouble("Insira a base do triangulo: ") ;
    altura = IO_readdouble("Insira a altura do triangulo: ") / 2;
    // Processamento dos dados
    double area = base * altura / 2;
    // Apresentação dos dados
    printf("%s%lf\n", "Area do triangulo = ", area);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0116(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0116\n");
    // Recepção dos dados
    double lado = 0;
    lado = IO_readdouble("Insira o lado do triangulo: ");
    // Processamento dos dados
    double perimetro = lado * 3;
    double altura = sqrt(pow(lado, 2) - pow(lado / 2, 2));
    double area = lado * altura / 2;
    // Apresentação dos dados
    printf("%s%lf\n", "Altura do triangulo = ", altura);
    printf("%s%lf\n", "Area do triangulo = ", area);
    printf("%s%lf\n", "Perimetro do triangulo = ", perimetro);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0117(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0117\n");
    // Recepção dos dados
    double lado = 0;
    lado = IO_readdouble("Insira o lado do triangulo: ") * 7;
    // Processamento dos dados
    double volume = pow(lado, 3);
    // Apresentação dos dados
    printf("%s%lf\n", "Volume do cubo = ", volume);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0118(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0118\n");
    // Recepção dos dados
    double comprimento = 0;
    double largura = 0;
    double altura = 0;
    comprimento = IO_readdouble("Insira o comprimento do cubo: ") / 5;
    largura = IO_readdouble("Insira o largura do cubo: ") / 5;
    altura = IO_readdouble("Insira o altura do cubo: ") / 5;
    // Processamento dos dados
    double volume = comprimento * largura * altura;
    // Apresentação dos dados
    printf("%s%lf\n", "Volume do paralelepipedo = ", volume);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0119(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0119\n");
    // Recepção dos dados
    double comprimento = 0;
    double largura = 0;
    double altura = 0;
    comprimento = IO_readdouble("Insira o comprimento do cubo: ") / 5;
    largura = IO_readdouble("Insira o largura do cubo: ") / 5;
    altura = IO_readdouble("Insira o altura do cubo: ") / 5;
    // Processamento dos dados
    double volume = comprimento * largura * altura;
    // Apresentação dos dados
    printf("%s%lf\n", "Volume do paralelepipedo = ", volume);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0120(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 0120\n");
    // Recepção dos dados
    double pi = acos(-1.0);
    double raio = 0;
    raio = IO_readdouble("Insira o raio da esfera: ") / 5 * 3;
    // Processamento dos dados
    double volume = (4 * pi * pow(raio, 3)) / 3;
    // Apresentação dos dados
    printf("%s%lf\n", "Volume da esfera = ", volume);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_01E1(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 01E1\n");
    // Recepção dos dados
    double area = IO_readdouble("Insira a area da circunferencia: ");
    double pi = acos(-1.0);
    // Processamento dos dados
    double raio = sqrt((area / 9) / pi);
    // Apresentação dos dados
    printf("%s%lf\n", "Raio da circunferencia = ", raio);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_01E2(void) {
    // Identificação do programa
    printf("%s\n", "\nMetodo 01E2\n");
    // Recepção dos dados
    double volume = IO_readdouble("Insira o volume da esfera: ");
    double pi = acos(-1.0);
    // Processamento dos dados
    double raio = cbrt((3 * (volume * 3 / 7)) / (4 * pi));
    double area_superficie = 4 * pi * pow(raio, 2);
    // Apresentação dos dados
    printf("%s%lf\n", "Raio da esfera = ", raio);
    printf("%s%lf\n", "Area da superficie da esfera = ", area_superficie);
    // Encerramento
    printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int main ( void ) {
   // definir dados/resultados   
   int opcao = 0;

   // Identificação do programa
   printf ("\n");
   printf ("%s\n", "Lista_01 - v.1.0 - 18/08/2024");
   printf ("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf ("\n");

   do {
        // Ler opcão
        printf ("%s", "Qual a sua opcao? ");
        scanf  ("%d", &opcao ); getchar();

        // Escolher ação
        switch ( opcao ) {
            case 0:             break;
            case 1: method_0111(); break;
            case 2: method_0112(); break;
            case 3: method_0113(); break;
            case 4: method_0114(); break;
            case 5: method_0115(); break;
            case 6: method_0116(); break;
            case 7: method_0117(); break;
            case 8: method_0118(); break;
            case 9: method_0119(); break;
            case 10: method_0120(); break;
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