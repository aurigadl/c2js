/**
 * * Puntero.cpp
 * *
 * * Clase que muestra las direcciones de variables
 * * Pello Xabier Altadill Izura
 * * Compilar: g++ Puntero.cpp -o Puntero
 * */
using namespace std;
#include <iostream>
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
  // SEGMENTATION FAULT y la CAGAREMOS de gordo
  // cout << "Variable puntero: " << *puntero << endl;
  cout << "Direccion puntero: " << &puntero << endl << endl;
  puntero = &pruebaInt;
    cout << "Variable puntero: " << puntero << endl;
    cout << "Variable puntero: " << *puntero << endl;
    cout << "Direccion puntero: " << &puntero << endl << endl;
  return 0;
}
