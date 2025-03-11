#include <stdio.h>

int pb_q2(void) {

  int num, mai = 0, men = 1000;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &num);
    if (num >= 0) {
      if (num > mai) {
        mai = num;
      }
      if (num < men) {
        men = num;
      }
    }
  }

  printf("Maior: %d\n", mai);
  printf("Menor: %d\n", men);

  return 0;
}