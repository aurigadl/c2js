/**
* Puntero.cpp
*
* Clase que muestra la okupacion/liberacion de memoria con new y delete
* Pello Xabier Altadill Izura
* Compilar: g++ Puntero.cpp -o Puntero
*/
using namespace std;
#include <iostream>
int main () {
  // Creamos varias variables:
  int *pruebaInt = new int;
  short *pruebaShort = new short;
  pruebaInt = 777;
  pruebaShort = 23;
  // Ahora las mostramos por pantalla:
  cout << "Variable pruebaInt: " << pruebaInt << endl;
  cout << "Direccion pruebaInt: " << &pruebaInt << endl << endl;
  cout << "Variable pruebaShort: " << pruebaShort << endl;
  cout << "Direccion pruebaShort: " << &pruebaShort << endl << endl;
  // Liberamos la memoria
  delete pruebaInt;
  delete pruebaShort;
  // Contra la especulacion del sistema (operativo)
  // volvemos a oKupar un espacio de memoria
  int *pruebaInt = new int;
  short *pruebaShort = new short;
  pruebaInt = 666;
  pruebaShort = 21;
  // quiza tengamos un error, pero se puede comprobar:
  if ( pruebaInt == NULL || pruebaShort == NULL  ) {
    cout << "Error al reservar memoria" << endl;
    return 0;
  }
  // Ahora las mostramos por pantalla:
  cout << "Variable pruebaInt: " << pruebaInt << endl;
  cout << "Direccion pruebaInt: " << &pruebaInt << endl << endl;
  cout << "Variable pruebaShort: " << pruebaShort << endl;
  cout << "Direccion pruebaShort: " << &pruebaShort << endl << endl;
  return 0;
}
