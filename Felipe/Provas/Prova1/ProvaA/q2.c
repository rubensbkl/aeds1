#include <stdio.h>

int pa_q2(void) {

  int num, mai = -1000, men = -1;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &num);
    if (num < 0) {
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