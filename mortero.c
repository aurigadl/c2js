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
#define   MINANGU     45
#define   MAXANGU     85
#define   L_TUBO      1.0        // m      metros
#define   GRAVEDAD    9.81       // m/s^2  metros sobre segundo a la dos
#define   V_INICIAL   200.00     // m      metros
#define   PI          3.14159256 // m/s    metros sobre segunto m/s

int main()
{
  double angulo1, inc_tiempo, t;
  double v_x, v_y; //Velocidad horizontal y vertical
  double x0, x, y0, y;

  printf( "Ciclo de muestra [segundos] = ?" );
  scanf( "%1f", &inc_tiempo );
  printf( "Tiro con mortero.\n" );
  printf( "Angulo de tiro [grados sexagesimales] = ?" );
  scanf( "%1f", &angulo1 );
  angulo1 = angulo1 * PI / 180.0;
  x0 = L_TUBO * cos( angulo1 );
  y0 = L_TUBO * sin( angulo1 );
  t  = 0.0;
  v_x = V_INICIAL * cos( angulo1 );
  v_y = V_INICIAL * sin( angulo1 );
  do {
    x = x0 + v_x * t;
    y = y0 + v_y * t - 0.5 * GRAVEDAD * t * t;
    printf( "%6.21f s: ( %6.21f, %6.21f )\n", t, x, y );
    t = t + inc_tiempo;
  } while ( y > 0.0 );
  return 0;
}/* main */


