/**
   IO - Console input/output library.
   @author  PUC-Minas - ICEI
   @version 0.1 - 2023-1b
   
   IO - v2023-1_0.1 - __ / __ / _____
   Author: Rubens Dias Bicalho

 */
// ---------------------- lista de dependencias


#include <stdio.h>     // para entradas e saidas
#include <stdlib.h>    // para a biblioteca padrao
#include <math.h>      // para definicoes matematicas
#include <string.h>    // para cadeias de caracteres
#include <stdbool.h>   // para definicoes logicas

#include <stddef.h>    // para definicoes basicas
#include <stdarg.h>    // para tratar argumentos
#include <ctype.h>     // para tipos padroes
#include <time.h>      // para medir tempo
#include <wchar.h>     // para 16-bit characters
#include <iso646.h>    // para and, or, xor, not alternatives

// ---------------------- redefinicoes uteis

#define IO_printf   printf  // melhor: printf_s
#define IO_scanf    scanf   // melhor: scanf_s
#define IO_fprintf  fprintf // melhor: fprintf_s
#define IO_fscanf   fscanf  // melhor: fscanf_s

// ---------------------- definicoes de constantes

const   bool FALSE          = false;  // definir constante
const   bool TRUE           = true ;  // definir constante

const   char EOS            = '\0';   // definir fim de cadeia de caracteres
const   char EOL            = '\n';   // definir mudanca de linha
const   char ENDL[]         = "\n";   // definir mudanca de linha

const   char STR_EMPTY[]    =  "" ;   // definir cadeia de caracteres vazia
const   int  STR_SIZE       =  80 ;   // definir tamanho padrao para caracteres

// ---------------------- definicoes de tipos

typedef char*   chars  ;            // definir cadeia  de caracteres
typedef int*    ints   ;            // definir arranjo de inteiros
typedef double* doubles;            // definir arranjo de reais
typedef bool*   bools  ;            // definir arranjo de logicos

// ---------------------- definicoes de variaveis globais

int  IO_error   = 0;                // inicialmente sem erros
bool IO_trace   = true;             // inicialmente habilitado

// ---------------------- definicoes de funcoes e procedimentos

// ---------------------- para tratamento de erros

void IO_debugOFF() {
    IO_trace = false;
}

void IO_debugON() {
    IO_trace = true;
}

// ---------------------- para entradas e saidas

void IO_flush() {
    int  x = 0;
    do {
        x = getchar( );
    } while (x != EOF && x != '\n');
    clearerr(stdin);
}

int IO_readint (const char * const text)
{
    int x = 0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%d", &x);
    IO_flush();
    return(x);
}

double IO_readdouble ( const char * const text )
{
    double x = 0.0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%lf", &x);
    IO_flush();
    return(x);
}

bool IO_readbool(const char * const text) {
    int x = 0;
    if (IO_trace) {
        IO_printf("%s", text);
    }
    IO_scanf("%d", &x);
    IO_flush();
    return(x!=0);
}

/**
    Funcao para ler caractere do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
char IO_readchar ( const char * const text )
{
    char x = '0';
    if ( IO_trace )
       IO_printf ( "%s", text   );
    do { x = getchar( ); } while ( '\n' == x ); IO_flush  ( );
//  getchar ( );
    return ( x );
} // end IO_readchar ( )
