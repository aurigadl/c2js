#include <stdio.h>
#define TAB 8
int main()
{
 char caracter;
 unsigned short posicion, tabulador;
 posicion = 0;
 caracter = getchar();
 while(sizeof(caracter) < 20){
   switch( caracter ){
     case '\t':/* avanza hata siguiente columna */
       for( tabulador = posicion;
           tabulador < TAB;
           tabulador = tabulador + 1) {
         putchar( ' ');
       } /* for */
       posicion = 0;
       break;
     case '\n': /*nueva linea implica columna 0*/
       putchar( caracter );
       posicion = 0;
       break;
     default:
       putchar( caracter );
       posicion = (posicion + 1) % TAB;
   } /* switch */
   caracter = getchar();
 } /* while */
 return 0;
} /* main */
