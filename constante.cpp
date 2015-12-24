/**
 * Constante.cpp
 * Programa en el que definimos un valor constante
 * Pello Xabier Altadill Izura
 *
 * Compilado: g++ Constante.cpp -o Constante
 */
using namespace std;
#include <iostream>
#define MEMOLA 25
int main () {
  int y = 0;
  // Definimos el valor constante
  const float PI = 3.1416;
  cout << "Ten fe en el caos: " << PI << endl;
  // Sacamos por salida standar un mensaje
  cout << "\nTermino el programa : " << MEMOLA << endl;
  return 0;
}
