#include <stdio.h>
int pa_q1(void){
  int x, y, z, ty, tz, cy, cz;
  scanf("%d%*c", &x);
  y = 5; ty = x; cy = 0;
  z = 7; cz = 0;
  
  while(ty - y >= 0){ cy++; ty -= y; } // Descobrir quantas vezes o numero inserido pelo usuário é divisível por 5.
  for(tz = x; tz > 0; tz -= z){ cz++; } // Descobrir quantas vezes o numero inserido pelo usuário é divisível por 7.
  if(ty == tz && ty * ty == 0){ // Se o resto de (x / 5) e (x / 7) e o resto de (x / 5) for igual a 0, então o número inserido pelo usuário é divisível por 5 e 7.
    printf("Y:%d\tZ:%d\n", cy, cz); // Imprimir número de vezes que o número inserido pelo usuário é divisível por 5 e 7.
  } else if(ty * ty == 0) { // Senão, se o resto de (x / 5) for 0, então o número inserido pelo usuário é divisível por 5.
    printf("Y:%d\n", cy); // Imprimir número de vezes que o número inserido pelo usuário é divisível por 5.
  } else { // Senão, o número inserido pelo usuário é divisível por 7.
    printf("Z:%d\n", cz); // Imprimir número de vezes que o número inserido pelo usuário é divisível por 7.
  }
  return 0;
}

// O código verifica se o número inserido pelo usuário é dividivel por 5 e 7. Se for divisível por ambos, imprime o número de vezes que o número inserido é divisível por cada um, se for divisível apenas por 5 ou 7, imprime o número de vezes que o número inserido é divisível por cada um.