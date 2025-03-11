#include <stdio.h>
int pb_q1(void){
  int i, x, e, y;
  float t, v;
  x = 2;  //Define o valor de x como 2.
  scanf("%d%*c", &y); //Lê do usuário e define o número lido como y.
  e = y; v = x; // Define o valor de e = y (número fornecido); Define o valor de v = x (2.000000), o transformando em um valor flutuante.
  if(e*e*e<0){e*=-1;v=1/v;} //Se o número fornecido pelo usuário for negativo, transformá-lo em positivo e definir o valor de v = 1 / v (0,500000)
  t=v; //Definir o valor de t = v {(0,5) caso o numero fornecido pelo usuário seja negativo e (2) caso seja positivo; 
  if(e%2==1){--e;} // Se o número fornecido pelo usuário for impar, transformá-lo em par subraindo 1.
  for(i=1;i<e;i+=2){t*=v*v;}
  if(y%2==0){t/=v;}
    printf("%f\n", t);

  return 0;
}

// Elevando 2 ao número inserido pelo usuário caso ele seja positivo, caso seja negativo, transformando-o em positivo e elevando 0.5 pelo número inserido pelo usuário após ser positivado.