#include <stdio.h>

int main(void) {

  int lado, linha, coluna;
  char comando;

  scanf("%d%*c", &lado);

  scanf("%c%*c", &comando);

  switch (comando) {

  case 'c': // Printar quadrado preenchido
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        printf("*");
      }
      printf("\n");
    }
    break;

  case 'b':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1) { // Printar quadrado apenas com as bordas
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

  case 'p':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1 || coluna == linha) { // Printar quadrado apenas com as bordas e uma linha no meio
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

  case 's':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1 || coluna == lado - linha - 1) { // Printar quadrado apenas com as bordas e uma linha no meio
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

  case 'h':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1 || linha == lado / 2) {  // Printar quadrado apenas com as bordas e uma linha no meio
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

  case 'v':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1 || coluna == lado / 2) { // Printar quadrado apenas com as bordas e uma linha no meio
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

  default:
    printf("Não existe essa opção.");
  }

  return 0;
}