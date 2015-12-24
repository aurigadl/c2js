/**
 * Operadores2.cpp
 * Programa para probar algunos operadores segunda parte
 * Pello Xabier Altadill Izura
 *
 * Compilado: g++ Operadores2.cpp -o Operadores2
 */

using namespace std;
#include <iostream>
int main () {
  // Sacamos por salida standar un mensaje
  cout << "Vamos a probar los operadores\n";
  unsigned int test = 0;
  unsigned int a = 0, b = 0, c;
  // asignacion multiple
  c = b = a = ++test;
  b += 3;
  c++;
  a -= 1;
  // Veamos el resto de valores
  cout << "Son estos: c=" << c << " b=" << b << " a=" << a << endl;
  a += b + c;
  cout << "Y ahora son estos: c=" << c << " b=" << b << " a=" << a << endl;
  // Tomamos el valor a
  cout << "Dame valores. \na=";
  cin >> a;
  // Tomamos el valor b
  cout << "b=";
  cin >> b;
  // Tomamos el valor c
  cout << "c=";
  cin >> c;
  cout << "Y ahora son estos: c=" << c << " b=" << b << " a=" << a << endl;
  //Probamos el if
  if (a > b) {
    cout << "A es mayor que B" << endl;
  }
  //Probamos el if
  if (a >= b) {
    cout << "A es mayor o igual que B" << endl;
  }
  //Probamos el if
  if (a <= b) {
    cout << "A es menor o igual que B" << endl;
  }
  return 0;
}
