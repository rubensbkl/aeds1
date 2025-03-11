#include <stdio.h>

int sudoku[9][9];
int vetor_indice[9];

int reset_indice(){
    for (int i = 0; i < 9; i++) {
        vetor_indice[i] = 0;
    }

    return 0;
}

int check_rep(int in_line, int out_line, int in_col, int out_col) {
    reset_indice();
    int teste1 = 0;
    for (int i = in_line; i <= out_line; i++) {
        for (int j = in_col; i <= out_col; j++) {
            vetor_indice[sudoku[i][j]-1]++;
        }
    }

    for (int i; i < 9; i++) {
        if(vetor_indice[i] != 1) {
            teste1 = 1;
        }
    }

    return teste1;
}

int print_sudoku(int sudoku[9][9]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 3; j < 6; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 6; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("           \n");
    for (int i = 3; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 3; j < 6; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 6; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("           \n");
    for (int i = 6; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 3; j < 6; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf(" ");
        for (int j = 6; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main() {

    int x, y;
    int op;
    int chosen;
    int repete;

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
                scanf("%d%*c", chosen);
                repete = check_rep(chosen, chosen, 0, 8);
                printf("%d", &repete);
                if(repete == 1) {
                    printf("S");
                } else {
                    printf("N");
                }
            break;

            case 3:
                scanf("%d", chosen);
                check_rep(0, 8, chosen, chosen);
            break;

            case 4:
                scanf("%d", chosen);
                repete = check_rep(chosen, chosen, 0, 8);
            break;

            case 5:
                scanf("%d", chosen);
                repete = check_rep(chosen, chosen, 0, 8);
            break;

            case 6:
                print_sudoku(sudoku);
            break;

            default:
                printf("Errou!");
            break;

        }

        scanf("%d%*c", &op);

    }

    return 0;

}