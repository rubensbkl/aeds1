#include <stdio.h>

int pb_q6(void) {
  
  int num;
  
  scanf("%d", &num);

  for(int i = 0; i < num; i+=70) {
    printf("%d ", i);
  }
  
  return 0;
}