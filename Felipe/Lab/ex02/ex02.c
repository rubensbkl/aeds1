#include <stdio.h>

int main(void) {
    int angulo;
    int voltas;
    int angulofinal;
    int sentido;
    int falta;
    
    scanf("%d", &angulo);

    // Definir se é reto
    if (angulo % 90 == 0) {
        printf("Este angulo se encontra em um dos eixos\n");
    }
    
    // Definir sentido
    if (angulo < 0) {
        sentido = 0;    // Definir se o sentido é antihorario ou horario
        angulo = angulo * -1;   // Inverter caso seja negativo
        voltas = angulo / 360;  // Calcular número de voltas
        falta = ((voltas + 1) * 360) - angulo;  // Calcular quantos graus faltam para completar a proxima volta
        angulofinal = ((voltas + 1) * 360) - angulo;    // Definir angulo para calcular o quadrante
    } else {
        sentido = 1;    // Definir se o sentido é antihorario ou horario
        voltas = angulo / 360;  // Calcular número de voltas
        falta = ((voltas + 1) * 360) - angulo;  // Calcular quantos graus faltam para completar a proxima volta
        angulofinal = angulo - (voltas * 360);  // Definir angulo para calcular o quadrante
    }

    // Definir o quadrante
    if (angulofinal > 0 && angulofinal <= 90) {
        printf( "Primeiro quadrante\n");
    }
    if (angulofinal > 90 && angulofinal <= 180) {
        printf( "Segundo quadrante\n");
    }
    if (angulofinal > 180 && angulofinal <= 270) {
        printf( "Terceiro quadrante\n");
    }
    if (angulofinal > 270 && angulofinal < 360) {
        printf( "Quarto quadrante\n");
    }
    if (angulofinal == 0) {
        printf( "Quarto quadrante\n");
    }

    // Imprimir demais informações

    if (sentido == 0) {
        printf("%d volta(s) sentido horario\n", voltas, sentido);
        printf("Falta(m) %d graus (sentido horario) para completar %d volta(s)\n", falta, (voltas + 1));
    } else {
        printf("%d volta(s) sentido antihorario\n", voltas, sentido);
        printf("Falta(m) %d graus (sentido antihorario) para completar %d volta(s)\n", falta, (voltas + 1));
    }

  return 0;
}