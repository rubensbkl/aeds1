#include "../lib.h"

void method_0111(void) {
    // Identificação
    De_printf("%s\n", "\nMetodo 0111\n");
    // Recepção dos dados
    int valor = 0;
    do {
        valor = De_readint("Insira o lado do primeiro quadrado: ");
    } while (valor <= 0);
    // Processamento dos dados
    int lado = valor * 2;
    int area = lado * lado;
    // Apresentação do resultado
    De_printf("%s%d\n", "Area do segundo quadrado = ", area);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0112(void) {
    // Identificação
    De_printf("%s\n", "\nMetodo 0112\n");
    // Recepção dos dados
    int valor = 0;
    do {
        valor = De_readint("Insira o lado do primeiro quadrado: ");
    } while (valor <= 0);
    // Processamento dos dados
    double lado = (double)valor / 3;
    double perimetro = 4 * lado;
    double area = lado * lado;
    // Apresentação do resultado
    De_printf("%s%lf\n", "Area do segundo quadrado = ", area);
    De_printf("%s%lf\n", "Perimetro do segundo quadrado = ", perimetro);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0113(void) {
    // Identificação
    De_printf("%s\n", "\nMetodo 0113\n");
    // Recepção dos dados
    int valor0 = 0, valor1 = 0;
    do {
        valor0 = De_readint("Insira o lado do primeiro retangulo: ");
        valor1 = De_readint("Insira o outro lado do primeiro retangulo: ");
    } while (valor0 <= 0 || valor1 <= 0);
    // Processamento dos dados
    int lado0 = valor0 * 3, lado1 = valor1 * 3;
    int area = lado0 * lado1;
    // Apresentação do resultado
    De_printf("%s%lf\n", "Area do segundo retangulo = ", area);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0114(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0114\n");
    // Recepção dos dados
    int valor0 = 0, valor1 = 0;
    do {
        valor0 = De_readint("Insira o lado do primeiro retangulo: ");
        valor1 = De_readint("Insira o outro lado do primeiro retangulo: ");
    } while (valor0 <= 0 || valor1 <= 0);
    // Processamento dos dados
    double lado0 = (double)valor0 / 6, lado1 = (double)valor1 / 6;
    double area = lado0 * lado1;
    double perimetro = lado0 * 2 + lado1 * 2;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Area do segundo retangulo = ", area);
    De_printf("%s%lf\n", "Perimetro do segundo retangulo = ", perimetro);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0115(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0115\n");
    // Recepção dos dados
    double base = 0;
    double altura = 0;
    base = De_readdouble("Insira a base do triangulo: ") ;
    altura = De_readdouble("Insira a altura do triangulo: ") / 2;
    // Processamento dos dados
    double area = base * altura / 2;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Area do triangulo = ", area);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0116(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0116\n");
    // Recepção dos dados
    double lado = 0;
    lado = De_readdouble("Insira o lado do triangulo: ");
    // Processamento dos dados
    double perimetro = lado * 3;
    double altura = sqrt(pow(lado, 2) - pow(lado / 2, 2));
    double area = lado * altura / 2;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Altura do triangulo = ", altura);
    De_printf("%s%lf\n", "Area do triangulo = ", area);
    De_printf("%s%lf\n", "Perimetro do triangulo = ", perimetro);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0117(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0117\n");
    // Recepção dos dados
    double lado = 0;
    lado = De_readdouble("Insira o lado do triangulo: ") * 7;
    // Processamento dos dados
    double volume = pow(lado, 3);
    // Apresentação dos dados
    De_printf("%s%lf\n", "Volume do cubo = ", volume);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0118(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0118\n");
    // Recepção dos dados
    double comprimento = 0;
    double largura = 0;
    double altura = 0;
    comprimento = De_readdouble("Insira o comprimento do cubo: ") / 5;
    largura = De_readdouble("Insira o largura do cubo: ") / 5;
    altura = De_readdouble("Insira o altura do cubo: ") / 5;
    // Processamento dos dados
    double volume = comprimento * largura * altura;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Volume do paralelepipedo = ", volume);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0119(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0119\n");
    // Recepção dos dados
    double comprimento = 0;
    double largura = 0;
    double altura = 0;
    comprimento = De_readdouble("Insira o comprimento do cubo: ") / 5;
    largura = De_readdouble("Insira o largura do cubo: ") / 5;
    altura = De_readdouble("Insira o altura do cubo: ") / 5;
    // Processamento dos dados
    double volume = comprimento * largura * altura;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Volume do paralelepipedo = ", volume);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_0120(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 0120\n");
    // Recepção dos dados
    double pi = acos(-1.0);
    double raio = 0;
    raio = De_readdouble("Insira o raio da esfera: ") / 5 * 3;
    // Processamento dos dados
    double volume = (4 * pi * pow(raio, 3)) / 3;
    // Apresentação dos dados
    De_printf("%s%lf\n", "Volume da esfera = ", volume);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_01E1(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 01E1\n");
    // Recepção dos dados
    double area = De_readdouble("Insira a area da circunferencia: ");
    double pi = acos(-1.0);
    // Processamento dos dados
    double raio = sqrt((area / 9) / pi);
    // Apresentação dos dados
    De_printf("%s%lf\n", "Raio da circunferencia = ", raio);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

void method_01E2(void) {
    // Identificação do programa
    De_printf("%s\n", "\nMetodo 01E2\n");
    // Recepção dos dados
    double volume = De_readdouble("Insira o volume da esfera: ");
    double pi = acos(-1.0);
    // Processamento dos dados
    double raio = cbrt((3 * (volume * 3 / 7)) / (4 * pi));
    double area_superficie = 4 * pi * pow(raio, 2);
    // Apresentação dos dados
    De_printf("%s%lf\n", "Raio da esfera = ", raio);
    De_printf("%s%lf\n", "Area da superficie da esfera = ", area_superficie);
    // Encerramento
    De_printf("%s\n", "\nPressione ENTER para continuar\n");
    getchar();
}

int main ( void ) {
   // definir dados/resultados   
   int opcao = 0;

   // Identificação do programa
   De_printf ("\n");
   De_printf ("%s\n", "Lista_01 - v.2.0 - 27/10/2024");
   De_printf ("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   De_printf ("\n");

   do {
        // Ler opcão
        De_printf ("%s", "Qual a sua opcao? ");
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
                De_printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                break;
        }
    } while ( opcao != 0 );
    
    De_printf ("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();

}