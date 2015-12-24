/**
 * * Sobrecarga.cpp
 * * Programa para probar la sobrecarga de funciones
 * * La sobrecarga es una misma funcion con distintos parametros
 * * Con la sobrecarga logramos el POLIMORFISMO de clases
 * y funciones
 * *
 * * Pello Xabier Altadill Izura
 * *
 * * Compilado: g++ Sobrecarga.cpp -o Sobrecarga
 * */
using namespace std;
#include <iostream>

// las funciones en CPP las debemos declarar antes de invocar
// aqui tenemos el prototipo. Si no se pone tendremos ERROR de compilador
double Calcula (double a, double b);
int Calcula (int a, int b);
float Calcula (float a, float b);
// Log : saca un mensaje por pantalla
// Esto provocaria error de compilador por ambiguedad de sobrecarga
// void Log();
// Log : saca un mensaje por pantalla
// NOTA: el valor por defecto solo se pone en la DECLARACION
void Log(char *mensaje = "Sin valor prefijado");
// suma: suma dos valores
int Suma(int a = 0, int b = 0, int c = 0);
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
* Calcula
* parametros: float a, float b
* devuelve: float
* */
float Calcula (float a, float b) {
  return (a / b) * variable;
}


/**
 * * Calcula
 * * parametros: long a, long b
 * * devuelve: long
 * */
long Calcula (long a, long b) {
  return (a / b) * variable;
}


/**
 * * Log
 * * parametros: char *mensaje
 * * devuelve: void
 * */
void Log (char *mensaje) {
  cout << PROGRAMA << mensaje << endl;
}


/**
 * * Suma
 * * parametros: int a, int b, int c
 * * devuelve: int
 * */
int Suma (int a = 0, int b = 0, int c = 0) {
  Log("Vamos a ver. Estamos en suma. ");
  // Devolvemos un valor
  return (a + b + c);
}
