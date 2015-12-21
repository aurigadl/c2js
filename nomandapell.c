/* Fichero: Nombre y apellidos*/
/* Contenido: Toma como entrada un nombre completo
 * y lo separa en nombre y apellidos*/
/* Autor: aurigadl*/
/* Revisión: 0.1*/

/* COMANDOS DEL PREPROCESADOR*/
/* -inclusión de ficheros de cabeceras*/
#include <stdio.h>
#include <ctype.h>

typedef char frase_t[256]; /* -definición de constantes simbólicas*/
char *copia_palabra( char *frase, char *palabra ){
/*Copia la primera palabra de la frase en palabra.
 * frase: apuntador a un vector de caractere.
 * palabra: apuntador a un vector de caracteres.
 * Devuelve la direccón del ultimo carácter leido
 * en la frase. */
   while  ( *frase!='\0' && isspace( *frase ) ) {
      frase = frase + 1;
   } /* while */
   while( *frase!='\0' && !isspace( *frase ) ){
     *palabra = *frase;
     palabra = palabra + 1;
     frase = frase + 1;
   } /* while */
   *palabra = '\0';
   return frase;
} /* palabra */

int main(int argc, const char *argv[])
{
  frase_t nombre_completo, nombre, apellido1, apellido2;
  char *posicion;

  printf( "Nombre y apellidos? " );
  gets( nombre_completo );
  posicion = copia_palabra( nombre_completo, nombre );
  posicion = copia_palabra( posicion, apellido1 );
  posicion = copia_palabra( posicion, apellido2 );
  printf(
      "Gracias por su amabilidad, Sr/a. %s.\n",
      apellido1
      ); /* printf */
  return 0;
} /* main */
