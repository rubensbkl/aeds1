#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * Questão 1
 */
void p_01(int n, char text[]) { 
    for (int x = n/2; x < n; x++) {
        text[n+1] = text[x];
        text[x] = text[n-x];  
        text[n-x] = text[n+1];
        text[n+1] = '\0';  
    }
}

// [ ] a.) patso
// [ ] b.) patos
// [X] c.) posta
// [ ] d.) potsa
// [ ] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 2
 */
void p_02(int v, int m, int n, int a[]) {
    int z = 0;
    for (int x = 1; x <= v; x=x+1) {
        for (int y = (n-1); y > m; y = y - 1) { 
            z = a[y];
            a[y] = a[y-1];
            a[y-1] = z;
        }
    }
} 

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", a[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

// [ ] a.) p:(n)  , q:(y>m+1),
// [ ] b.) p:(n)  , q:(y>m-1),
// [X] c.) p:(n-1), q:(y>m),
// [ ] d.) p:(n-1), q:(y>=m),
// [ ] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 3
 */

int f_03(int n, int m[][n]) {  
    int z = 0;  
    for (int x = 0; x < n; x++) {  
        for (int y = 0; y < n; y++) {     
            if (x - y < 0 && x + 1 < n - y) {
                z = z + m[x][y];
            }
        }
    }
    return (z);
} 

// [ ] a.) 9
// [X] b.) 13
// [ ] c.) 15
// [ ] d.) 17
// [ ] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 4
 */
int f_04(int m, char *text1, int n, char *text2) {
    int result = 0;
    if (text1 && text1[m] != '\0' && text2 && text2[n] != '\0') { 
        if (text1[m] != text2[n]) {
            result = 0 + f_04(m + 1, text1, n, text2);
        } else {
            result = 1 + f_04(m + 1, text1, n + 1, text2);
        }
    }
    return (result);  
}  

// [ ] a.) 5
// [ ] b.) 4
// [X] c.) 3
// [ ] d.) 2
// [ ] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 5
 */
struct s_Fraction {int x, y,z;};
struct s_Fraction f_05(double a) {
    struct s_Fraction f = {0, 0, 0}; int y = 2; 
    if (a > 0) {
        f.x = (int) a;
        a = (a - f.x);
    }  
    f.y = (int)(a * 128); f.z = 128;  
    while (y <= 64) {  
        if (f.y % y == 0 && f.z % y == 0) {
            f.y = f.y / y;
            f.z = f.z / y;
        } else {
            y = y * 2;
        }  
    }  
    return (f);
}

// [X] a.) (3,15/16)
// [ ] b.) (3,31/32)
// [ ] c.) (3,63/64)
// [ ] d.) (3,124/128)
// [ ] e.) OUTRA (JUSTIFICATIVA)

/**
 * Questão 6
 */

#define MAX 10

int f_06(char filename[], int n, int limite, int arranjo[]) {
    int acc = 0, qtd = 0;
    for (int i = 0; i < n && i < MAX; i++) {
        acc += arranjo[i];
        if (acc <= limite) {
            qtd++;
        }
    }
    FILE *output = fopen(filename, "w");
    if (output != NULL) {
        fprintf(output, "%d\n", qtd);
        for (int y = 0; y < qtd; y++) {
            fprintf(output, "%d\n", arranjo[y]);
        }
    }
    fclose(output);
    return qtd;
}


/**
 * Questão 7
 */
int f_07(char filename[]) {
    int menor = 1000000, mex = 0, mey = 0;
    int maior = -1000000, max = 0, may = 0;
    int res = 0;
    FILE *arquivo = fopen(filename, "r");
    if (arquivo != NULL) {
        int x, y;
        fscanf(arquivo, "%d %d", &x, &y);
        int *array = malloc(x * y * sizeof(int));
        for (int j = 0; j < y; j++) {
            for (int i = 0; i < x; i++) {
                fscanf(arquivo, "%d\n", &array[j * x + i]);
                if (array[j * x + i] < menor) {
                    menor = array[j * x + i];
                    mex = i;
                    mey = j;
                }
                if (array[j * x + i] > maior) {
                    maior = array[j * x + i];
                    max = i;
                    may = j;
                }
            }
        }
        if (mex == max || mey == may) {
            res = 1;
        } else {
            res = -1;
        }
    }
    fclose(arquivo);
    return res;
}

/**
 * Questão 8
 */

struct s_Park {
    int he, me, se;
    int hs, ms, ss;
} car[MAX];

int cobrar(struct s_Park *car) {
    int h = car->hs = car->he;
    int hemm = h * 60;
    int minutos = car->ms - car->me + hemm;
    if (minutos < 15) return 0;
    else if (minutos % 15 == 0 && car->ss - car->se == 0) return minutos / 15;
    else return minutos / 15 + 1;
}



/**
 * MAIN
 */
int main(void) {

    // Questão 1
    printf("\nQuestao 1\n");
    char p1[] = "pasto";
    p_01(5, p1);
    printf("%s\n", p1);

    // Questão 2
    printf("\nQuestao 2\n");
    int a2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    p_02(3, 0, 10, a2);
    print_array(a2, 9);

    // Questão 3
    printf("\nQuestao 3\n");
    int m[][5] = {{1, 2, 3, 4, 5}, {2, 1, 4, 5, 3}, {3, 4, 5, 2, 1}, {3, 4, 5, 2, 1}, {5, 3, 2, 1, 4}};
    int result3 = f_03(5, m);
    printf("%d\n", result3);

    // Questão 4
    printf("\nQuestao 4\n");
    char p2[] = "pista";
    char p3[] = "despistar";
    int result4 = f_04(0, p3, 0, p2);
    printf("%d\n", result4);

    // Questão 5
    printf("\nQuestao 5\n");
    struct s_Fraction a4 = f_05(3.94);
    printf("(%d,%d/%d)\n", a4.x, a4.y, a4.z);

    // Questão 6
    printf("\nQuestao 6\n");
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    f_06("output.txt", 10, 10, x);
    printf("Registrado no arquivo output.txt na pasta do projeto\n");

    // Questão 7
    printf("\nQuestao 7\n");
    printf("%d\n", f_07("MATRIX.TXT"));
    
    // // Questão 8
    printf("\nQuestao 8\n");
    struct s_Park vaga1 = {10, 0, 0, 10, 14, 0};
    int result5 = cobrar(&vaga1);
    printf("%d\n", result5);


    printf("\n");
    return 0;

}