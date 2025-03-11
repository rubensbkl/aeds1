#include "../lib.h"

/*
Boa noite professor, tudo bem?
Essa atividade eu, o Sávio, e o Wogel fizemos juntos,
por isso a semelhança entre os códigos. Nós espelhamos a tela do computador
na televisão do diretorio acadêmico e fizemos no mesmo computador.
 */

const int MAX = 10;

void double_Matrix_print(int rows, int columns, double matrix[][]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            printf("%.2lf ", matrix[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

void double_Matrix_scan(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            do {
                printf("Digite o valor para [%d][%d]: ", x, y);
                scanf("%lf", &matrix[x][y]);
                if (matrix[x][y] < 0) {
                    printf("Valor invalido. Digite um valor positivo.\n");
                }
            } while (matrix[x][y] < 0);
        }
    }
}

void double_Matrix_fprint ( const char filename [ ], int rows, int columns, double matrix[][MAX] )
{
    int x = 0;
    int y = 0;
    FILE * arquivo;
    if ( rows<=MAX && columns<=MAX )
    {
       arquivo = fopen ( filename, "w" );
       fprintf ( arquivo, "%d\n", rows );
       fprintf ( arquivo, "%d\n", columns );
       for ( x=0; x<rows && x<MAX; x=x+1 )
        {
            for ( y=0; y<columns && y<MAX; y=y+1 )
            {    
                fprintf ( arquivo, "%lf\n", matrix [x] [y] );
            }
            printf ( "\n" );
        }
    }
    fclose ( arquivo );
}

void double_Matrix_fscan(const char filename[], int rows, int columns, double matrix[][MAX]) {
    int m = 0, n = 0;
    FILE *arquivo = fopen(filename, "r");
    if (arquivo != NULL) {
        // Lê o número de linhas e colunas do arquivo
        fscanf(arquivo, "%d", &m);
        fscanf(arquivo, "%d", &n);

        // Leitura dos dados da matriz
        for (int x = 0; !feof(arquivo) && x < rows && x < MAX; x++) {
            for (int y = 0; !feof(arquivo) && y < columns && y < MAX; y++) {
                fscanf(arquivo, "%lf", &matrix[x][y]);
            }
        }
        fclose(arquivo); // Fecha o arquivo após ler os dados
    }
}

void method_911() {
    int x, y;

    do {
        printf("Insira o numero de linhas: ");
        scanf("%d", &x);
        if(x <= 0) {
            printf("Valor invalido. Digite um valor positivo maior que zero.\n");
        }
        if(x > MAX) {
            printf("Valor invalido. Digite um valor menor ou igual a %d.\n", MAX);
        }
    } while(x <= 0 || x > MAX);

    do {
        printf("Insira o numero de colunas: ");
        scanf("%d", &y);
        if(y <= 0) {
            printf("Valor invalido. Digite um valor positivo maior que zero.\n");
        }
        if(y > MAX) {
            printf("Valor invalido. Digite um valor menor ou igual a %d.\n", MAX);
        }
    } while(y <= 0 || y > MAX);

    double matrix[MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_Matrix_print(x, y, matrix);
}

void method_912() {
    int x, y;

    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    double matrix1[MAX][MAX];
    double matrix2[MAX][MAX];

    double_Matrix_scan(x, y, matrix1);  // Preenche a matriz 1
    double_Matrix_fprint("MATRIX_01.TXT", x, y, matrix1);  // Salva a matriz no arquivo
    double_Matrix_fscan("MATRIX_01.TXT", x, y, matrix2);  // Lê a matriz do arquivo
    double_Matrix_print(x, y, matrix2);  // Exibe a matriz lida do arquivo
}
void double_diagonal_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x==y){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void method_913(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_Matrix_print(x, y, matrix);
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}
void double_diagonal_secundaria_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x+y==columns-1){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void method_914(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_secundaria_Matrix_print(x, y, matrix);
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}
void double_diagonal_triangulo_abaixo_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x>=y){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void method_915(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_triangulo_abaixo_Matrix_print(x, y, matrix);
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}
void double_diagonal_triangulo_acima_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x+y<=columns-1){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void method_916(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_triangulo_acima_Matrix_print(x, y, matrix);
    }
    else printf("Nao eh quadrada, digite uma matriz quadrada.");
}
void double_diagonal_triangulo_abaixo_s_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x+y>=columns-1){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void method_917(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_triangulo_abaixo_s_Matrix_print(x, y, matrix);
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}

void double_diagonal_triangulo_acima_s_Matrix_print(int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x+y<=columns-1){
            printf("%.2lf ", matrix[x][y]);
            }
            else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void method_918(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_diagonal_triangulo_acima_s_Matrix_print(x, y, matrix);
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}

bool allZerosLTriangleDoubleMatrix (int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x>=y){
                if (matrix[x][y] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

void method_919(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    double matrix [MAX][MAX];

    if(x == y){

    double_Matrix_scan(x, y, matrix);
    double_Matrix_print(x, y, matrix);
    if(allZerosLTriangleDoubleMatrix(x, y, matrix)) {
        printf("Todos sao zeros\n");
    } else {
        printf("nao sao todos zeros.\n");
    }
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}

bool allZerosUTriangleDoubleMatrix (int rows, int columns, double matrix[][MAX]) {
    int x = 0;
    int y = 0;
    for (x = 0; x < rows && x < MAX; x = x + 1) {
        for (y = 0; y < columns && y < MAX; y = y + 1) {
            if (x<=y){
                if (matrix[x][y] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

void method_920(){
    int x, y;
    
    printf("Insira o numero de linhas: ");
    scanf("%d", &x);

    printf("Insira o numero de colunas: ");
    scanf("%d", &y);

    if(x == y){
    double matrix [MAX][MAX];

    double_Matrix_scan(x, y, matrix);
    double_Matrix_print(x, y, matrix);
    if(allZerosUTriangleDoubleMatrix(x, y, matrix)) {
        printf("Todos sao zeros\n");
    } else {
        printf("nao sao todos zeros.\n");
    }
    } else printf("Nao eh quadrada, digite uma matriz quadrada.");
}

int main(void) {
    int opcao = 0;
    do {
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Para consumir o '\n' deixado pelo scanf
        switch (opcao) {
            case 0: break;
            case 1: method_911(); break;
            case 2: method_912(); break;
            case 3: method_913(); break;
            case 4: method_914(); break;
            case 5: method_915(); break;
            case 6: method_916(); break;
            case 7: method_917(); break;
            case 8: method_918(); break;
            case 9: method_919(); break;
            case 10: method_920(); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    printf("Aperte ENTER para finalizar:");
    getchar();
    return 0;
}