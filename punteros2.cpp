/**
 * Puntero2.cpp
 *
 * Clase que muestra mas usos de los punteros
 * Pello Xabier Altadill Izura
 *
 * Compilar: g++ Puntero2.cpp -o Puntero2
 * */

using namespace std;
#include <iostream>
// prototipo de funciones que implementamos luego
int devuelve(int *punteroInt, int entero);
int main () {
  // Creamos varias variables:
  int pruebaInt = 99, prueba2Int;
  short pruebaShort = 34;
  char carac = 'a';
  int *puntero = 0;
  int *punteroNuevo;
  // Ahora las mostramos por pantalla:
  cout << "Variable pruebaInt: " << pruebaInt << endl;
  cout << "Direccion pruebaInt: " << &pruebaInt << endl << endl;
  cout << "Variable prueba2Int: " << prueba2Int << endl;
  cout << "Direccion prueba2Int: " << &prueba2Int << endl << endl;
  cout << "Variable pruebaShort: " << pruebaShort << endl;
  cout << "Direccion pruebaShort: " << &pruebaShort << endl << endl;
  cout << "Variable carac: " << carac << endl;
  cout << "Direccion carac: " << &carac << endl << endl;
  cout << "Variable puntero: " << puntero << endl;
  // ATENCION, si el puntero no tiene valor dara
  // SEGMENTATION FAULT y la CAGAREMOS
  //cout << "Variable puntero: " << *puntero << endl;
  cout << "Direccion puntero: " << &puntero << endl << endl;
  puntero = &pruebaInt;
  cout << "Variable puntero: " << puntero << endl;
  cout << "Variable puntero: " << *puntero << endl;
  cout << "Direccion puntero: " << &puntero << endl << endl;
  *puntero = 345;
  cout << "Variable puntero: " << puntero << endl;
  cout << "Variable puntero: " << *puntero << endl;
  cout << "Direccion puntero: " << &puntero << endl << endl;
  // Ahora las mostramos por pantalla:
  cout << "Variable pruebaInt: " << pruebaInt << endl;
  cout << "Direccion pruebaInt: " << &pruebaInt << endl << endl;
  *punteroNuevo = devuelve(puntero,34);
  cout << " Tras llamada: " << endl;
  cout << "Variable puntero: " << punteroNuevo << endl;
  cout << "Variable puntero: " << *punteroNuevo << endl;
  cout << "Direccion puntero: " << &punteroNuevo << endl << endl;
  return 0;
}

int devuelve (int *punteroInt, int entero) {
  cout << "Variable param. puntero: " << punteroInt << endl;
  cout << "Variable param. puntero: " << *punteroInt << endl;
  cout << "Direccion param. puntero: " << &punteroInt << endl << endl;
  return (*punteroInt) + entero;
}
