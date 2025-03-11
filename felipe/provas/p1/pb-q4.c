#include <stdio.h>

int pb_q4(void) {

  int lado;
  scanf("%d", &lado);

  for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
      if ((i + j) % 2 == 0) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}