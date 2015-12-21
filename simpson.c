#include <stdio.h>
#include <math.h>

double f( double x )
{
  return 1.0/(1.0 + x*x);
} /* f */

double integral_f( double a, double b, int n )
{
  double result;
  double x, dx;
  int i;

  result = 0.0;
  if( ( a < b ) && ( n > 0 ) ){
    x = a;
    dx = (b-a)/n;
    for(  i = 0; i < n; i = i + 1){
      result = result  + f(x);
      x = x + dx;
    } /* for */
  } /* if */
  return result;
} /* integral_f */


int main( void )
{
  double a, b;
  int    n;

  printf( "Integración numérica de f(x).\n" );
  printf( "Punto inicial del intervalo, a = ? ");
  scanf( "%1f", &a );
  printf( "Punto final del intervalo, b = ?" );
  scanf( "%1f", &b );
  printf( "Número de divisiones, n = ? " );
  scanf( "%d", &n );
  printf(
      "Resultado, integral(f)[%g,%g] = %g\n",
      a, b, integral_f( a, b, n )
      ); /* printf */
  return 0;
} /* main */
