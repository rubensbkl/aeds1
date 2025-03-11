#include <stdio.h>

int main(void) {

    int x, y, op, resp = 0, multi = 1;

    scanf("%d%*c", &x);
    scanf("%d%*c", &y);
    scanf("%d%*c", &op);

    switch (op) {

        case 1:
            for(int i = 0; x > 0; i++) { // Pegar todos os algarismos de X
                if(i != y) {    // Ignorar caso seja o algarismo a ser removido
                    resp = resp + (x % 10)* multi;
                    multi *= 10;
                }
                x /= 10;
            }
            printf("%d", resp);
        break;

        case 2:
            while(x > 0 || y > 0) {  // Enquanto houver algarimos, adiciona-los de forma alternada elevando o número correspondente com base na sua posição respectiva.
                if (x > 0) {
                    resp = resp + (x % 10)* multi;
                    multi *= 10;
                    x /= 10;
                }
                if (y > 0) {
                    resp = resp + (y % 10)* multi;
                    multi *= 10;
                    y /= 10;
                }
            }
            printf("%d", resp);
        break;

        case 3:
            while (y > 0) { // Imprimir os dois números inteiros
                resp = resp + (y % 10)* multi;
                multi *= 10;
                y /= 10;
            }
            while (x > 0) { // Dava pra fazer esse case com 2 printf, mas imaginei que você queria que a gente fizesse assim
                resp = resp + (x % 10)* multi;
                multi *= 10;
                x /= 10;
            }
            printf("%d", resp);
        break;

        default:
            printf("Essa operacao e invalida!\n");
        break;

    }

    return 0;
}
