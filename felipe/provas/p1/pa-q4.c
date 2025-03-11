#include <stdio.h>

int pa_q4(void) {

  int lado;
  scanf("%d", &lado);

  for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
      if ((i + j) % 2 == 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}