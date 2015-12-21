/* Fichero: mortero.c                                         */

/* Contenido: Calculo de la posición de un proyectil lanzado
 * desde un mortero, mostrando la altura y la distanci a
 * intervalos  regulares de tiempo hasta que alcance el suelo */

/* Autor: aurigadl                                            */
/* Revisión: 0.1                                              */

/* COMANDOS DEL PREPROCESADOR*/
/* -inclusión de ficheros de cabeceras*/
#include <stdio.h>
#include <math.h>

/* -definición de constantes simbólicas*/

int main()
{
  unsigned int xxangulo1, inc_tiempo;
  unsigned int leido_ok;
  char codigo[] = "ADSFASDFADFASDFDF";
  printf( "Ciclo de muestra [segundos] = ? \n" );
  scanf( "%1f", &inc_tiempo );
  printf( "Ciclo de muestra [segundos] = ? \n" );
  leido_ok = scanf( "%1f", &xxangulo1);
  if( leido_ok == 1 ){
    printf( "leido_ok %d", leido_ok );
    printf( "Ci\n" );
  } else {
    printf( "Entrada vacía." );
  }

  return 0;
}/* main */


