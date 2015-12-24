/**
 * Operadores.cpp
 * Programa para probar algunos operadores
 * Pello Xabier Altadill Izura
 *
 * Compilado: g++ Operadores.cpp -o Operadores
 */
using namespace std;
#include <iostream>
int main () {
  // Sacamos por salida standar un mensaje
  cout << "Vamos a probar los operadores\n";
  unsigned int test = 0;
  unsigned int a = 0, b = 0, c;
  // Sacamos el valor por pantalla de test
  cout << "Valor de test: " << test << endl;
  // Sacamos el valor por pantalla de test++
  cout << "Valor de test++: " << (test++) << endl;
  // Sacamos el valor por pantalla de ++test
  cout << "Valor de ++test: " << (++test) << endl;
  cout << "Valor de test actual: " << test << endl;
  // asignacion multiple
  c = b = a = test;
  // Veamos el resto de valores
  cout << "Y los demas: " << c << " " << b << " " << a << endl;
  return 0;
}
