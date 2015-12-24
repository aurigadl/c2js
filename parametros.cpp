/**
* Parametros.cpp
* Programa para probar los parametros de las funciones y
* la forma de aplicar valores por defecto
*
* Pello Xabier Altadill Izura
*
* Compilado: g++ Parametros.cpp -o Parametros
*/
using namespace std;
#include <iostream>
// las funciones en CPP las debemos declarar antes de invocar
// aqui tenemos el prototipo. Si no se pone tendremos ERROR de compilador
double Calcula (double a, double b);
// suma: suma dos valores
int Suma(int a = 0, int b = 0, int c = 0);
// Log : saca un mensaje por pantalla
void Log(char *mensaje = "Sin valor prefijado");
// Variables globales
long variable = 666;
char *PROGRAMA = "Globales> ";
int main () {
  // Sacamos por salida standar un mensaje
  Log("Vamos a probar los operadores");
  // Llamada sin parametros
  Log();
  unsigned int test = 0;
  int a = 23, b = 21, c = 34, d = 0;
  // Llamanda sin parametros
  d = Suma();
  cout << "Y el resultado de la funcion Suma sin parametros :" << d << endl;
  // Llamada con parametros

  d = Suma(a,b,c);
  cout << "Y el resultado de la funcion Suma :" << d << endl;
  // Probamos la funcion
  Log("Venga va vamos");
  return 0;
}
/**
* Calcula
* parametros: double a, double b
* devuelve: double
*/
double Calcula (double a, double b) {
  return (a / b) * variable;
}
/**
* Log
* parametros: char *mensaje
* devuelve: void
* NOTA: no hace falta volver a poner el valor prefijado
*/
void Log (char *mensaje) {
  cout << PROGRAMA << mensaje << endl;
}
/**
* Suma
* parametros: int a, int b, int c
* devuelve: int
*/
int Suma (int a = 0, int b = 0, int c = 0) {
  Log("Vamos a ver. Estamos en suma. ");
  // Devolvemos un valor
  return (a + b + c);
}
