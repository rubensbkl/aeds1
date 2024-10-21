#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

/**
 * Questão 1
 */
void question_01 (void) {
    printf("a.) %d = %d\n", (4/(2*2)/1), (4/2+2/4));
    printf("b.) %d = %d\n", ((4/2)+(2/4)), (2-(4/2)+2*(4/2/2)));
    printf("c.) %d = %d\n", ((4+2)*2/4), (4*2*2/4));
    printf("d.) %d = %d\n", (((4+2)/4)+(4*(4/2)/2)), ((2+2*4)/(2+4)+2));
}

// [] a.)
// [X] b.)
// [] c.)
// [] d.)
// [] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 2
 */
int f_02a(int x) {
    int y = 0, z = 0, p = x;
    while ( p > 4 ) {
        if ( p % 10 % 2 == 0) {
            y = y + p % 10 - 1;
        } else {
            z = z / 10 + p % 10 + 1;
        }
        p = p / 10;
    }
    return (y + z);
}

// [X] a.)
// [] b.)
// [] c.)
// [] d.)
// [] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 3
 */
int f_03 ( char* text ) {
    int a = 0, x = 0, t = strlen(text);  
    if ( t > 0 ) {
        a = (text[0] - 48 + text[t-1] - 48);
        for ( x = 0; x < t - 2; x++ ) {
            text[x] = text[x+1];
        }
        text[x] = '\0';
        a = a + f_03( text );
    }
    return ( a );
}

// [] a.) 7
// [] b.) 14
// [] c.) 18
// [X] d.) 21
// [] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 4
 */
int f_04 ( int a, int b ) {
    while ( a > 0 && b > 0 && a >= b ) {
        a = a - b;
        if ( a < b ) {
            a = a + b;
            b = a - b;
            a = a - b;
        }
    }
    return ( a );
}

// [] a.) 12
// [] b.) 8
// [X] c.) 6
// [] d.) 4
// [] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 5
 */
int f_05 ( int n )
{  int s = 0, z = 0;  
    while ( n > 0 )
    {  z = z + 4;
    if (z % 5 == 0) n = n + 1;
    else s = s + z; n = n - 1; } 
    return ( s );
}

// [] a.) f_05(7) = 128
// [] b.) f_05(8) = 164
// [] c.) f_05(9) = 208
// [X] d.) f_05(10) = 254
// [] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 6
 */
int resto(int num, int divisor) {
    while (num >= divisor) {
        num -= divisor;
    }
    return num;
}

bool bisexto(int ano) {
    return (resto(ano, 4) == 0 && (resto(ano, 100) != 0 || resto(ano, 400) == 0));
}

int p06(void) {
    printf("%d\n", bisexto(1800));
    printf("%d\n", bisexto(2000));
    printf("%d\n", bisexto(2024));
}


/**
 * Questão 7
 */
int somaAlgarismos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

int amigos(int numero) {
    for (int i = 10; i <= 99; i++) {
        if (pow(somaAlgarismos(numero), 2) == pow(somaAlgarismos(numero), 2)) {
            return i;
        }
    }
    return -1;
}

int p07(void) {
    int x = 0;
    int amigo = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if (amigos(x) == -1) {
        printf("Nao tem amigo\n");
    } else {
        printf("Amigo: %d\n", amigos(x));
    }
}

/**
 * Questão 8
 */
bool decendentes(char c) {
    bool resposta = false;
    if(c == 'g' || c == 'j' || c == 'p' || c == 'q' || c == 'y') {
        resposta = true;
    }
    return resposta;
}

int somar(char palavra[]) {
    int soma = 0;
    for (int i = 0; i < strlen(palavra) / 2; i++) {
        if (decendentes(palavra[i])) {
            soma++;
        }
    }
    return soma;
}

int p08(char p1[], char p2[]) {
    if (somar(p1) > somar(p2)) {
        printf("A palavra %s tem mais decendentes\n", p1);
    } else if (somar(p2) > somar(p1)) {
        printf("A palavra %s tem mais decendentes\n", p2);
    }
}


/**
 * MAIN
 */
int main(void) {

    // Questão 1
    printf("Questao 1\n");
    question_01();

    // Questão 2
    printf("Questao 2\n");
    printf("%d\n", f_02a(567890));

    // Questão 3
    printf("Questao 3\n");
    char text[] = "123456";
    printf("%d\n", f_03(text));

    // Questão 4
    printf("Questao 4\n");
    printf("%d\n", f_04(54, 24));

    // Questão 5
    printf("Questao 5\n");
    printf("%d\n", f_05(10));

    // Questão 6
    printf("Questao 6\n");
    p06();

    // Questão 7
    printf("Questao 7\n");
    p07();
    
    // Questão 8
    printf("Questao 8\n");
    p08("bagagem", "papagaio");

    return 0;

}