#include <stdio.h>
#include <math.h>

main()
{
  struct cartesiano_s { double x, y; } c;
  struct polar_s { double radio, angulo; } p;
  double prec = 1e-9;
  double pi = 3.141592654;
  printf( "De coordenadas cartesianas a polares.\n" );
  printf( "x = ? " );
  scanf( "%1f", &(c.x) );
  printf( "y = ? " );
  scanf( "%1f", &(c.y) );
  p.radio = sqrt( c.x * c.x + c.y * c.y );
  if( p.radio < prec ){ /* Si el radio es cero ....*/
    p.angulo = 0.0; /* .. el angulo es cero.*/
  }else{
    if( -prec<c.x && c.x<prec ){ /*Si c.x es cero ...*/
      if( c.y > 0.0 ) p.angulo = 0.5*pi;
      else p.angulo = -0.5*pi;
    }else{
      p.angulo = atan( c.y/c.x );
    } /* if */
  } /* if */
  printf( "radio = %g\n", p.radio );
  printf( "angulo = %g (%g grados sexagesimales)\n",
      p.angulo,
      p.angulo*180.0/pi
      ); /* printf */
} /* main */

