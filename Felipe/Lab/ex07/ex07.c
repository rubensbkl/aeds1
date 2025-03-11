#include <stdio.h>

int sudoku[9][9];
int vetor_index[9];
int repete = 0;

void reset_index(){     // Zerar vetor de contagem
    for (int i = 0; i < 9; i++) {
        vetor_index[i] = 0;
    }
}

void check_rep(int in_line, int out_line, int in_col, int out_col) {    // Checar repetição
    reset_index();
    for (int i = in_line; i <= out_line; i++) { 
        for (int j = in_col; j <= out_col; j++) {
            vetor_index[sudoku[i][j]-1]++;  // Adicionar numero ao vetor de contagem
        }
    }
    for (int i = 0; i < 9; i++) {   // Checar contagem, se repete, definir que repete
        if (vetor_index[i] != 1) {
            repete = 1;
        }
    }
}

void print_resp() {    // Printar resposta 
    if (repete == 1) {
        printf("S\n");
    }
    if (repete == 0) {
        printf("N\n");
    }
}

void print_sudoku(int sudoku[9][9]) {    //Printar sudoku
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
            if (j == 2 || j == 5) {
                printf(" ");
            }
        }
        printf("\n");
        if (i == 2 || i == 5) {
            printf("\n");
        }
    }
}

int main() {
    int x, y;
    int op;
    int chosen;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d%*c", &sudoku[i][j]);
        }
    }

    scanf("%d%*c", &op);

    while (op != 0) {

        switch (op) {

            case 1:
                scanf("%d%*c", &x);
                scanf ("%d%*c", &y);
                scanf("%d%*c", &sudoku[x][y]);
            break;

            case 2:
                repete = 0;
                scanf("%d%*c", &chosen);
                check_rep(chosen, chosen, 0, 8);    // Checar repeticao com base na linha
                print_resp();
            break;

            case 3:
                repete = 0;
                scanf("%d%*c", &chosen);
                check_rep(0, 8, chosen, chosen);    // Checar repeticao com base na coluna
                print_resp();
            break;

            case 4:
                repete = 0;
                scanf("%d%*c", &chosen);
                check_rep((chosen/3)*3, (chosen/3)*3+2, (chosen%3)*3, (chosen%3)*3+2); // Checar repeticao com base no quadrante
                print_resp();
            break;

            case 5:
                repete = 0;
                for(int i = 0; i < 9; i++) {
                    check_rep(i, i, 0, 8);
                    check_rep(0, 8, i, i);
                    check_rep((i/3)*3, (i/3)*3+2, (i%3)*3, (i%3)*3+2);      // Checar repeticao com base em tudo para cada linha, coluna e quadrante
                }
                print_resp();
            break;

            case 6:
                repete = 0;
                print_sudoku(sudoku);
            break;

            default:
                printf("Opcao Invalida!\n");
            break;

        }

        scanf("%d%*c", &op);

    }

    return 0;

}