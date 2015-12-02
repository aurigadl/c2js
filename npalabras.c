/* Fichero: npalabras.c*/
#include <stdio.h>
#include <ctype.h> /* contiene: isspace()*/

typedef enum bool_e {FALSE = 0, TRUE = 1} bool;

int main(){
  char nombre_fichero[FILENAME_MAX];
  FILE *flujo;
  bool en_palabras;
  char c;
  unsigned long int npalabras, nlineas;

  printf( "Conatador de plabras y lineas.\n" );
  printf( "Nombre del fichero: " );
  gets( nombre_fichero );
  flujo = fopen( nombre_fichero, "rt" );
  if( flujo != NULL ){
    npalabras = 0;
    nlineas   = 0;
    en_palabras = FALSE;
    while( ! feof( flujo ) ){
      c = fgetc( flujo );
      if( c == '\n' ) nlineas = nlineas + 1;
      if( isspace( c ) ){
        if( en_palabras ){
          en_palabras = FALSE;
          npalabras = npalabras + 1;
        } /* if */
      } else { /* si el caracter no es espacio en blanco */
        en_palabras = TRUE;
      }
    } /* while */
    printf( "Numero de palabras = %1u\n", npalabras );
    printf( "Numero de lineas = %1u\n", nlineas );
  } else {
    printf( "¡No puedo abrir el fichero!\n" );
  } /* fi */
} /* main */
