#include <stdio.h>
#include <stdlib.h>

int main() {
  int repete_linha, repete_coluna, repete_quadrante;
  int x, y;
  int op , op2;
  int sudoku[9][9];
  int h, a;
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
      repete_linha = 0;
      scanf("%d%*c", &chosen);
      for (int j = 0; j < 9; j++) {
        for (int n = j + 1; n < 9; n++) {
          if (sudoku[chosen][j] == sudoku[chosen][n]) {
            repete_linha++;
          }
        }
      }
      if (repete_linha > 0) {
        printf("S\n");
      } else {
        printf("N\n");
      }
      break;

    case 3:
      repete_coluna = 0;
      scanf("%d%*c", &chosen);
      for (int i = 0; i < 9; i++) {
        for (int n = i + 1; n < 9; n++) {
          if (sudoku[i][chosen] == sudoku[n][chosen]) {
            repete_coluna++;
          }
        }
      }
      if (repete_coluna > 0) {
        printf("S\n");
      } else {
        printf("N\n");
      }
      break;

    case 4: 
      scanf("%d%*c", &op2);
      repete_quadrante = 0;
      if( op2 == 0){
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            for (int b = 0; b < 3; b++) {
              for (int n = 0; n < 3; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if( op2 == 1){
        for (int i = 0; i < 3; i++) {
          for (int j = 3; j < 6; j++) {
            for (int b = 0; b < 3; b++) {
              for (int n = 3; n < 6; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 2){
        for (int i = 0; i < 3; i++) {
          for (int j = 6; j < 9; j++) {
            for (int b = 0; b < 3; b++) {
              for (int n = 6; n < 9; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if (op2 == 3){
        for (int i = 3; i < 6; i++) {
          for (int j = 0; j < 3; j++) {
            for (int b = 3; b < 6; b++) {
              for (int n = 0; n < 3; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 4){
        for (int i = 3; i < 6; i++) {
          for (int j = 3; j < 6; j++) {
            for (int b = 3; b < 6; b++) {
              for (int n = 3; n < 6; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 5){
        for (int i = 3; i < 6; i++) {
          for (int j = 6; j < 9; j++) {
            for (int b = 3; b < 6; b++) {
              for (int n = 6; n < 9; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 6){
        for (int i = 6; i < 9; i++) {
          for (int j = 0; j < 3; j++) {
            for (int b = 6; b < 9; b++) {
              for (int n = 0; n < 3; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 7){
        for (int i = 6; i < 9; i++) {
          for (int j = 3; j < 6; j++) {
            for (int b = 6; b < 9; b++) {
              for (int n = 3; n < 6; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }
      if ( op2 == 8){
        for (int i = 6; i < 9; i++) {
          for (int j = 6; j < 9; j++) {
            for (int b = 6; b < 9; b++) {
              for (int n = 6; n < 9; n++) {
                if (i != b || j != n) {
                  if (sudoku[i][j] == sudoku[b][n]) {
                    repete_quadrante++;
                  }
                }
              }
            }
          }
        }
      }

      if (repete_quadrante > 0) {
        printf("S\n");
      } else {
        printf("N\n");
      }
      break;

    case 5:

    // CHECAR LINHA

      repete_linha = 0;
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          for (int n = j + 1; n < 9; n++) {
            if (sudoku[i][j] == sudoku[i][n]) {
              repete_linha++;
            }
          }
        }
      }

      // CHECAR COLUNA

      repete_coluna = 0;
      for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
          for (int n = i + 1; n < 9; n++) {
            if (sudoku[i][j] == sudoku[n][j]) {
              repete_coluna++;
            }
          }
        }
      }

      // CHECAR QUADRANTE

      repete_quadrante = 0;
      h = 0;
      a = 0;
      while (h < 9) {
        while (a < 9) {
          for (int i = 0 + h; i < 3 + h; i++) {
            for (int j = 0 + a; j < 3 + a; j++) {
              for (int b = 0 + h; b < 3 + h; b++) {
                for (int n = 0 + a; n < 3 + a; n++) {
                  if (i != b || j != n) {
                    if (sudoku[i][j] == sudoku[b][n]) {
                      repete_quadrante++;
                    }
                  }
                }
              }
            }
          }
          a = a + 3;
        }
        h = h + 3;
      }

      if (repete_linha > 0 || repete_coluna > 0 || repete_quadrante > 0) {
        printf("S\n");
      } else {
        printf("N\n");
      }

      break;

    case 6:
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
      break;

    default:
      break;

    }

    scanf("%d%*c", &op);

  }

  return 0;

}