#include <stdio.h>
#include <math.h>

int main(void)
{
	int a , b , i ;
	float s ;
	/* Pedir limites inferior y superior.  */
	printf ("Limite inferior:");
	scanf ("%d", & a);
	while ( a < 0) {
		printf ("No puede ser negativo\n");
		printf ("Limite inferior:");
		scanf ("%d", & a);
	}
	printf ("L ́ımite superior:");
	scanf ("%d", & b);
	while ( b < a) {
		printf ("No puede ser menor que %d\n", a);
		printf ("Limite superior:");
		scanf ("%d", & b);
	}
	/* Calcular el sumatorio de la raiz cuadrada de i 
	   para i entre a y b .  */
	s = 0.0 ;
	for ( i = a ; i <= b ; i++) {
		s += sqrt(i);
	}
	/* Mostrar el resultado.  */
	printf ("Sumatorio de ra ́ıces ");
	printf ("de %d a %d: %f\n", a , b , s);
	return 0 ;
}
