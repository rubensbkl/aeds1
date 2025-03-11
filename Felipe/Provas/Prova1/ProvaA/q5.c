#include <stdio.h>

int pa_q5(void) {

  int num, acc = 0, resp;
  scanf("%d", &num);

  while (num > 0) {
    if ((num % 10) % 2 == 0) {
      acc += num % 10;
    }
    num /= 10;
  }

  resp = acc;

  for(int i = 1; i < 2; i++) {
    resp *= acc;
  }

  printf("Resultado: %d\n", resp);

  return 0;
}