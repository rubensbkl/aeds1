#include <stdio.h>

int pa_q3(void) {
  
  int num, isPrime = 1;
  scanf("%d%*c", &num);

  for(int i = num - 1; i > 1; i--) {
    if(num % i == 0) {
      isPrime = 0;
      break;
    }
  }

  if(isPrime == 1) {
    printf("É primo\n");
  } else {
    printf("Não é primo\n");
  }
  
  return 0;
}