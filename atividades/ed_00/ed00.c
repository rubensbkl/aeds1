/**
  * Pontificia Universidade Catolica de Minas Gerais
  * Curso de Ciencia da Computacao
  * Algoritmos e Estruturas de Dados I
  *
  * Trabalho pratico: lista 00
  *
  * Objetivo:
  * Modelo de programa para a disciplina AED I
  * Sugestao para montar um trabalho pratico
  *
  * Autor:   Matricula: 855796  Nome: Rubens Dias Bicalho
  * Versao:  1.0                Data: 09/08/2024
  *
  * Dados:
  * - opcao de execucao escolhida pelo usuario
  *
  * Resultados:
  * - execucao de um teste de cada vez a escolha do usuario
  *
  * Condicoes:
  * - so' aceitara' as opcoes oferecidas.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00 ./lista_00.c -lm
  *   Windows: gcc -o   lista_00   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console
  *   (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// Dependências
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Dependências
#include "io.h"
#include "my_string.h"

// Variáveis Globais
int X = 0;

// Funções

// Método 3
void clrscr(void) {
   system ("cls");
}

// Método 41
void P1_0(void) { 
   printf("\n"); 
   printf("\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS"); 
   printf("\n"); 
}

// Método 42
void P1_1(void) { 
   printf("\n");
   printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X);
   printf("\n");
}

// Método 43
void P1_2(void) { 
   X = X + 1;

   printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X); 
   printf("\n"); 
 
   if (X < 5) 
     P1_2();
 
   printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X); 
   X = X - 1;
}

// Método 44
void P1_3(int X) { 
   printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X); 
   if (X < 5) {
      P1_3(X + 1);
   }
   printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X); 
   getchar();
}

// Método 45
void P1_4(int X) { 
   printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X); 
   if (X > 1) {
     P1_4 (X - 1); 
   }
   printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X); 
   getchar();
}

// Método 46
void P2_5 (int X);
 
void P1_5 (int X) 
{ 
   printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X ); 
   if ( X < 5 ) 
     P2_5 ( X ); 
   printf  ( "RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X ); 
   getchar ( );
}
 
void P2_5 (int X) 
{ 
   printf("CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X); 
   X = X + 1; 
   printf("RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X); 
   getchar();
   P1_5(X); 
}

// Metodo 47
void P1_6(int* X) { 
   *X = *X + 1;
 
   printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X);
   if (*X < 5) {
     P1_6(X);
   }

   printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X); 
   *X = *X - 1;
   getchar();
}

// Método 48
void P2_7(int X);
 
void P1_7(int X) 
{ 
   X = X + 1; 
   printf("CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X); 
 
   if (X < 4) { 
     P1_7(X); 
     P2_7(X); 
   }
 
   printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X); 
   getchar();
}
 
void P2_7( int X ) 
{ 
   printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X ); 
   if (X > 1) {
      P2_7(X - 1);
   }
   printf("RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X ); 
   getchar();
}

//---------//
// MÉTODOS //
//---------//

void metodo01() {
   printf("EXEMPLO101 - PRIMEIRO EXEMPLO EM C");
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR."); 
   getchar();
}

void metodo02() {
   system("cls");
   printf("EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n");
   system("pause");
   getchar();
}

void metodo03() {
   clrscr();
   printf("EXEMPLO103 - PRIMEIRO EXEMPLO EM C"); 
   printf("\n");
   printf("MATRICULA: 855796 ALUNO: Rubens Dias Bicalho"); 
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR."); 
   getchar();
}

void metodo04() {
   printf("EXEMPLO104 - PRIMEIRO EXEMPLO EM C"); 
   printf("\n");
   printf("MATRICULA: 855796 ALUNO: Rubens Dias Bicalho"); 
   printf("\n");
   printf("PRESSIONAR <Enter> PARA CONTINUAR."); 
   getchar();
}

void metodo05() {
   printf("EXEMPLO105 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("\nEXEMPLOS DE VALORES:");
   printf("\nCARACTERE : %c", 'A');
   printf("\nINTEIRO   : %d", 10);
   printf("\nREAL      : %f", 3.1415);
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR.");
   getchar();
}

void metodo06() {
   #define PI 3.1415

   printf("EXEMPLO106 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("\nEXEMPLOS DE VALORES:");
   printf("\nCARACTERE : %c", 'A');
   printf("\nINTEIRO   : %d", 10);
   printf("\nREAL      : %f", PI);
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR.");
   getchar();
}

void metodo07() {
   const float PI1 = 3.14;

   printf("EXEMPLO107 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("\nEXEMPLOS DE VALORES:");
   printf("\nCARACTERE : %c", 'A');
   printf("\nINTEIRO   : %d", 10);
   printf("\nREAL      : %f", PI1);
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR.");
   getchar();
}

void metodo08() {
   const float PI1 = 3.14;
   float X = 10.01;

   printf("EXEMPLO108 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("\nEXEMPLOS DE VALORES:");
   printf("\nCARACTERE : %c", 'A');
   printf("\nINTEIRO   : %d", 10);
   printf("\nREAL      : %f", PI1);
   printf("\nREAL      : %f", X);
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR.");
   getchar();
}

void metodo09() {
   const float PI1 = 3.14;
   float X = 10.01;
   int I = 10;

   printf("EXEMPLO109 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("\nEXEMPLOS DE VALORES:");
   printf("\nINTEIRO : %d", I);
   printf("\nREAL    : %f", X);
   printf("\nREAL    : %f", PI1);
   printf("\nPRESSIONAR <Enter> PARA CONTINUAR.");
   getchar();
}

void metodo10() {
   const float PI1 = 3.14;
   float X = 10.01;
   int I = 10;
   char N = '\n';

   printf("EXEMPLO110 - PRIMEIRO EXEMPLO EM C");
   printf("\nMATRICULA: 855796 ALUNO: Rubens Dias Bicalho");
   printf("%c%s"   , N, "EXEMPLOS DE VALORES:" ); 
   printf("%c%s%i" , N, "INTEIRO : ", I); 
   printf("%c%s%f" , N, "REAL    : ", X); 
   printf("%c%s%lf", N, "REAL    : ", PI1); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo11() {
   int X = 0;

   printf("EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO");
   printf("\nFORNECER UM VALOR INTEIRO QUALQUER:");
   scanf("%d", &X);
   getchar();
   printf("\nO VALOR DIGITADO FOI: %d", X); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo12() {
   double X = 0;

   printf("EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL");
   printf("\nFORNECER UM VALOR REAL QUALQUER:");
   scanf("%lf", &X);
   getchar();
   printf("\nO VALOR DIGITADO FOI: %lf", X);
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo13() {
   char X = '0';

   printf("EXEMPLO203 - LER E IMPRIMIR UM CARACTERE");
   printf("\nFORNECER UM VALOR REAL QUALQUER:");
   scanf("%c", &X);
   getchar();
   printf("\nO VALOR DIGITADO FOI: %c", X);
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo14() {
   char X[10];

   printf("EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES");
   printf("\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER:");
   scanf("%s", X);
   getchar();
   printf("\nFOI DIGITADO: %s", X); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo15() {
   int X = 0, Y = 0, Z = 0;

   printf("EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS"); 
   printf("\nFORNECER UM VALOR INTEIRO QUALQUER:"); 
   scanf("%d", &X); 
   getchar();
   printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER:"); 
   scanf("%d", &Y); 
   getchar();
   Z = X + Y; 
   printf ("\nA SOMA DOS DOIS = %d", Z); 
   printf ("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo16() {
   float X = 0.0, Y = 0.0, Z = 0.0;

   printf("EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS");
   printf( "\nFORNECER UM VALOR REAL QUALQUER:");
   scanf("%f", &X);
   getchar();
   printf("\nFORNECER OUTRO VALOR REAL QUALQUER:");
   scanf ("%f", &Y);
   getchar();
   Z = X - Y;
   printf("\nA DIFERENCA ENTRE OS DOIS = %f", Z);
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo17() {
   bool X = false, Y = false, Z = false; 

   printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS"); 
   X = true;
   Y = false;
   Z = X || Y;
   printf ("\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z); 
   Z = X && Y;
   printf("\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo18() {
   double D = 0.0,
          T = 0.0,
          V = 0.0;
   
   printf("EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO");
   printf( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS:");
   scanf( "%lf", &D );
   getchar();
   printf("\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS:");
   scanf("%lf", &T);
   getchar();
   V = D / T;
   printf ("\nV = D / T = %lf%s", V, " m/s ");
   printf ("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo19() {
   const char SENHA[5] = "XXXX";
   char S[10];

   printf("EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA"); 
   printf("\nFORNECER UMA CADEIA DE CARACTERES QUALQUER:"); 
   scanf("%s", S);
   getchar();
   printf("\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo20() {
   const double PI1 = 3.14; 
   double ARCO     = 0.0,
          COSSENO  = 0.0,
          SENO     = 0.0,
          TANGENTE = 0.0;

   printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" ); 
   printf ( "\nFORNECER O VALOR DO SENO: " ); 
   scanf  ( "%lf", &SENO ); 
   getchar( );
   COSSENO  = sqrt(1.0 - pow(SENO,2)); 
   TANGENTE = SENO / COSSENO; 
   ARCO     = atan(TANGENTE); 
   printf ("\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI)); 
   printf ("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo21() {
   int X = 0; 
 
   printf("EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO"); 
   printf("\nFORNECER UM VALOR INTEIRO QUALQUER:"); 
   scanf("%d", &X); 
   getchar();
   if (X == 0) {
      printf ("\nO VALOR DIGITADO FOI ZERO"); 
   } else {
      printf ("\nO VALOR DIGITADO NAO FOI ZERO"); 
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo22() {
   float X = 0.0; 
 
   printf ("EXEMPLO302 - LER E TESTAR UM VALOR REAL");
   printf ("\nFORNECER UM VALOR REAL DIFERENTE DE ZERO:");
   scanf("%f", &X);
   getchar();
   if (X != 0.0) {
      printf("\nO VALOR DIGITADO FOI DIFERENTE DE ZERO");
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo23() {
   char X = '0'; 
 
   printf("EXEMPLO303 - LER E TESTAR UM CARACTERE"); 
   printf("\nFORNECER UM ALGARISMO QUALQUER:"); 
   scanf("%c", &X); 
   getchar();
   if (X >= '0' && X <= '9') { 
      printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" ); 
      printf ( "\nO ALGARISMO DIGITADO FOI: %c", X ); 
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo24() {
   char X = '0'; 
 
   printf("EXEMPLO304 - LER E TESTAR CARACTERE"); 
   printf("\nFORNECER UM CARACTERE QUALQUER:");
   scanf("%c", &X); 
   getchar();
   if (!( X >= '0' && X <= '9')) {
      printf("\nNAO FOI DIGITADO UM ALGARISMO"); 
      printf("\nFOI DIGITADO O CARACTERE: %c", X); 
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo25() {
   int X        = 0, 
       N        = 0, 
       CONTADOR = 0; 

   printf("EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n"); 
   printf("\nFORNECER O NUMERO DE VEZES (N):"); 
   scanf("%d", &N);
   getchar();
   for (CONTADOR = 1; CONTADOR <= N; CONTADOR++) { 
     printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR); 
     scanf("%d", &X); 
     getchar();
     printf("\nO VALOR DIGITADO FOI : %d", X); 
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo26() {
   double X = 0.0, Y = 0.0; 
 
   printf ("EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS");
   printf ("\nFORNECER UM VALOR REAL QUALQUER:");
   scanf("%lf", &X);
   getchar();
   printf("\nFORNECER OUTRO VALOR REAL QUALQUER:");
   scanf("%lf", &Y);
   getchar();
   if ( ! (X == Y) ) {
      printf ("\n%lf", X);
      printf (" DIFERENTE DE ");
      printf ("%lf", Y);
   } else {
      printf ("VALORES IGUAIS");
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo27() {
   int X = 0, Y = 0; 
   bool Z = false; 
 
   printf ("EXEMPLO307 - TRATAR VALORES LOGICOS"); 
   printf ("\nFORNECER UM VALOR INTEIRO QUALQUER: "); 
   scanf("%d", &X); 
   getchar();
   printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER:"); 
   scanf("%d", &Y); 
   getchar();
   Z = (X == Y); 
   if (Z) {
      printf("VALORES IGUAIS"); 
   } else {
      printf("VALORES DIFERENTES"); 
   } 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo28() {
   char X = '0'; 
 
   printf("EXEMPLO308 - LER E TESTAR UMA LETRA"); 
   printf("\nFORNECER UMA LETRA QUALQUER:"); 
   scanf("%c", &X); 
   getchar();
   if (X >= 'A' && X <= 'Z') {
      printf("FOI DIGITADA UMA LETRA MAIUSCULA");
   } else if(X >= 'a' && X <= 'z') {
      printf("FOI DIGITADA UMA LETRA MINUSCULA"); 
   } else {
      printf("NAO FOI DIGITADA UMA LETRA");
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo29() {
   char X = '0'; 
 
   printf("EXEMPLO309 - COMPARAR CARACTERES < , = , >"); 
   printf("\nFORNECER UM DOS CARACTERES CITADOS:"); 
   scanf("%c", &X); 
   getchar();
   switch (X) { 
      case '>':
         printf ("FOI DIGITADO O SINAL DE MAIOR"); 
         break; 
      case '=':
         printf ("FOI DIGITADO O SINAL DE IGUAL"); 
         break; 
      case '<':
         printf ("FOI DIGITADO O SINAL DE MENOR"); 
         break; 
      default :
         printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER"); 
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo30() {
   char X = '0'; 

   printf("EXEMPLO310 - IDENTIFICAR CARACTERES"); 
   printf("\nFORNECER UM CARACTERE QUALQUER:"); 
   scanf("%c", &X); 
   getchar();
   switch (X) { 
      case 'A':
      case 'E':
      case 'I':
      case 'O': 
      case 'U':
         printf ( "FOI DIGITADO UMA VOGAL" ); 
         break; 
      case '0':
      case '1': 
      case '2':
      case '3': 
      case '4':
      case '5':
      case '6': 
      case '7':
      case '8':
      case '9':
         printf ("FOI DIGITADO UM ALGARISMO");
         printf ("\nO NUMERO CORRESPONDENTE = %d", (X-48));
      break;
 
      default:
         printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER");
   }
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo31() {
   int X                  = 0, 
       CONTADOR = 0; 
 
   printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" ); 
   printf ( "\n" );     // mudar de linha 
   CONTADOR = 1; 
   while ( CONTADOR <= 3 ) // REPETIR 
   { 
     printf ( "\n" );   // mudar de linha 
     printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR ); 
     scanf( "%d", &X ); 
     getchar( );   // limpar a entrada de dados 
     printf ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     CONTADOR = CONTADOR + 1; 
   }     // ENQUANTO ( CONTADOR <= 3 ) 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo32() {
   int X = 0, N = 0, CONTADOR = 0; 
 
   printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" ); 
   printf ( "\nFORNECER O NUMERO DE VEZES (N) : " ); 
   scanf   ( "%d", &N ); 
   getchar( );  // limpar a entrada de dados 
   CONTADOR = 1; 
   while ( CONTADOR <= N ) 
   { 
     printf  ( "\n%d", CONTADOR ); 
     printf  ( " FORNECER UM VALOR INTEIRO QUALQUER : " ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
     printf  ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     CONTADOR = CONTADOR + 1; 
   } // ENQUANTO ( CONTADOR <= N ) 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo33() {
   int X = 0, N = 0; 
 
   printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" ); 
   printf ( "\nFORNECER O NUMERO DE VEZES (N) : " ); 
   scanf   ( "%d", &N ); 
   getchar( );  // limpar a entrada de dados 
   while ( N > 0 )  // REPETIR 
   { 
     printf  ( "\n%d", N ); 
     printf  ( " FORNECER UM VALOR INTEIRO QUALQUER : " ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
     printf  ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     N = N - 1; 
   }   // ENQUANTO N > 0 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo34() {
   int X                  = 0, 
       CONTADOR = 0; 
 
   printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" ); 
   for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1) 
   { 
     printf    ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
     printf   ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
   } // PARA CONTADOR EM [1:3] 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo35() {
   int X                  = 0, 
       N                   = 0, 
       CONTADOR = 0; 
 
   printf    ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" ); 
   printf   ( "\nFORNECER O NUMERO DE VEZES (N) : " ); 
   scanf   ( "%d", &N ); 
   getchar( );  // limpar a entrada de dados 
   for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ ) 
   { 
     printf   ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
     printf  ( "\nO VALOR DIGITADO FOI : %d", X ); 
   } // PARA CONTADOR EM [1:N] 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo36() {
   int X                  = 0, 
       CONTADOR = 0; 
 
   printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" ); 
   CONTADOR = 1; 
   do    // REPETIR 
   { 
     printf   ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
     printf   ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     CONTADOR = CONTADOR + 1; 
   } 
   while ( CONTADOR <= 3 );  // ATE' ( CONTADOR > 3 ) 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo37() {
   int X                   = 0, 
        CONTADOR = 0; 
 
   printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" ); 
   printf ( "\nFORNECER O NUMERO DE VEZES (N) : " ); 
   scanf ( "%d", &CONTADOR ); 
   getchar( );   // limpar a entrada de dados 
   do    // REPETIR 
   { 
     printf  ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR ); 
     scanf ( "%d", &X ); 
     getchar( );   // limpar a entrada de dados 
     printf  ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     CONTADOR = CONTADOR - 1; 
   } 
   while ( CONTADOR > 0 ); // ATE' ( CONTADOR <= 3 ) 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo38() {
   int X = 0; 
 
   printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" ); 
   printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " ); 
   scanf   ( "%d", &X ); 
   getchar( );  // limpar a entrada de dados 
   while ( X != 0 ) // REPETIR 
   { 
     printf  ( "\nO VALOR DIGITADO FOI : %d\n", X ); 
     printf  (  "\nDIGITE UM VALOR INTEIRO QUALQUER : " ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
   }    // ENQUANTO X DIFERENTE DE ZERO 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo39() {
   int X = 0; 
 
   printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" ); 
   printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " ); 
   scanf   ( "%d", &X ); 
   getchar( );  // limpar a entrada de dados 
   while ( X == 0 ) // REPETIR 
   { 
      printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " ); 
      scanf   ( "%d", &X ); 
      getchar( );  // limpar a entrada de dados 
   }   // ENQUANTO X IGUAL A ZERO 
   printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" ); 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo40() {
   int X = 0;
 
   printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" ); 
   do   // REPETIR 
   { 
     printf   ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " ); 
     scanf   ( "%d", &X ); 
     getchar( );  // limpar a entrada de dados 
   } 
   while ( X == 0 ); // ATE' X DIFERENTE DE ZERO 
   printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" ); 
 
   printf     ( "\nPRESSIONAR <Enter> PARA TERMINAR." ); 
   getchar ( );
}

void metodo41() {
   printf("EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO");
   P1_0();
 
   printf("\n");
   printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
   getchar();
}

void metodo42() {
   printf("EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n"); 
   for (X = 1; X <= 5; X = X + 1) {
      P1_1();
   }
   printf("\n"); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo43() {
   printf("EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n"); 
 
   X = 0;
   P1_2();
 
   printf("\n"); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo44() {
   printf("EXEMPLO0504 - CHAMADA/RETORNO COM PARAMETRO\n"); 
   P1_3(1);
 
   printf("\n"); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo45() {
   printf("EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n"); 
   P1_4(5);
 
   printf("\n");
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo46() {
   printf("EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n"); 
   P1_5(1);

   printf("\n"); 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo47() {
   int X; 
 
   printf("EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n"); 
   X = 0; 
   P1_6(&X);
 
   printf("\n"); 
   printf( "\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo48() {
   printf("EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n"); 
   P1_7(1); 
 
   printf("\nPRESSIONAR <Enter> PARA TERMINAR."); 
   getchar();
}

void metodo49() {
   println("EXEMPLO0509 - USO DE MODULOS");

   pause ("PRESSIONAR <Enter> PARA TERMINAR.");
}

void metodo50() {
   chars text = "MUDAR DE LINHA"; 
 
   println ("EXEMPLO0510 - USO DE MODULOS"); 
 
   printf("%c", EOL); 
   printf("%s%c", text, EOL); 
 
   pause("PRESSIONAR <Enter> PARA TERMINAR.");
}



//------//
// MAIN //
//------//

int main ( void ) {
   // definir dados/resultados   
   int opcao = 0;
   
   // Identificação do programa
   printf ("\n");
   printf ("%s\n", "Lista_00 - v.0.1 - 09/08/2024");
   printf ("%s\n", "Matricula: 855796 Nome: Rubens Dias Bicalho");
   printf ("\n");

   do {

      // Ler opcão
      printf ("%s", "Qual a sua opcao? ");
      scanf  ("%d", &opcao ); getchar();

      // Escolher ação
      switch ( opcao ) {
         case 0:               break;
         case 1: metodo01 ( ); break;
         case 2: metodo02 ( ); break;
         case 3: metodo03 ( ); break;
         case 4: metodo04 ( ); break;
         case 5: metodo05 ( ); break;
         case 6: metodo06 ( ); break;
         case 7: metodo07 ( ); break;
         case 8: metodo08 ( ); break;
         case 9: metodo09 ( ); break;
         case 10: metodo10 ( ); break;
         case 11: metodo11 ( ); break;
         case 12: metodo12 ( ); break;
         case 13: metodo13 ( ); break;
         case 14: metodo14 ( ); break;
         case 15: metodo15 ( ); break;
         case 16: metodo16 ( ); break;
         case 17: metodo17 ( ); break;
         case 18: metodo18 ( ); break;
         case 19: metodo19 ( ); break;
         case 20: metodo20 ( ); break;
         case 21: metodo21 ( ); break;
         case 22: metodo22 ( ); break;
         case 23: metodo23 ( ); break;
         case 24: metodo24 ( ); break;
         case 25: metodo25 ( ); break;
         case 26: metodo26 ( ); break;
         case 27: metodo27 ( ); break;
         case 28: metodo28 ( ); break;
         case 29: metodo29 ( ); break;
         case 30: metodo30 ( ); break;
         case 31: metodo31 ( ); break;
         case 32: metodo32 ( ); break;
         case 33: metodo33 ( ); break;
         case 34: metodo34 ( ); break;
         case 35: metodo35 ( ); break;
         case 36: metodo36 ( ); break;
         case 37: metodo37 ( ); break;
         case 38: metodo38 ( ); break;
         case 39: metodo39 ( ); break;
         case 40: metodo40 ( ); break;
         case 41: metodo41 ( ); break;
         case 42: metodo42 ( ); break;
         case 43: metodo43 ( ); break;
         case 44: metodo44 ( ); break;
         case 45: metodo45 ( ); break;
         case 46: metodo46 ( ); break;
         case 47: metodo47 ( ); break;
         case 48: metodo48 ( ); break;
         case 49: metodo49 ( ); break;
         case 50: metodo50 ( ); break;
         default:
            printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
            break;
      }


   } while ( opcao != 0 );


   printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
   getchar( );

} // end main ( )


/* 
---------------------------------------------- documentacao complementar 
 
---------------------------------------------- notas / observacoes / comentarios 
 
---------------------------------------------- previsao de testes 
 
a.)  0.5 
b.) -0.5 
c.)  1.23456789 
 
---------------------------------------------- historico 
 
Versao Data  Modificacao 
  0.1 __/__  esboco 
  0.2 __/__  mudanca de versao 
 
 ---------------------------------------------- testes 
 
Versao Teste 
  0.0 00. ( OK ) identificacao de programa 
  0.1 01. ( OK ) identificacao de programa 
 
*/
