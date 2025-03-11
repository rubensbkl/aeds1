#include <stdio.h>

int pa_q6(void) {

  int num;

  scanf("%d", &num);

  for(int i = 0; i < num; i+=30) {
    printf("%d ", i);
  }

  return 0;
}