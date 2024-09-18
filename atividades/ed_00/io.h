// bibliotecas de funcoes auxiliares 
#include <stdio.h> // para entradas e saídas 
#include <stdlib.h> // para outras funcoes de uso geral 
 
void pause(char message[ ]) { 
    printf("\n%s", message); 
    fflush(stdin);
    getchar();
}
 
void println (char text[ ]) {
    printf ("%s\n", text );
}