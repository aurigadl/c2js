/*---------------------------------------------------------------------*/
/* Fichero: numDigitos.c ----------------------------------------------*/
/*---------------------------------------------------------------------*/

#include <stdio.h>
#define CONSTDIGITO 10

int main(){
  unsigned int num ;
  unsigned int sum = CONSTDIGITO;
  int i   = 1;

  printf( "Numero a descoponer: \n" );
  scanf( "%d", &num );
  while(num > sum){
    num = num/sum;
    i++;
  } /* while */
  if( num < sum ){
    printf( "Numero no se puede descomponer\n" );
  }else{
    printf( "El Numero se descompone en %d digitos\n", i);
  }
} /* main */
