/**
* Referencias.cpp
* Programa que muestra el uso de referencias
*
* Pello Xabier Altadill Izura
*
* Compilado: g++ Referencias.cpp -o Referencias
*/
using namespace std;
#include <iostream>
int main() {
  // Definimos un dato y su referencia
  int numero;
  int &referenciaNumero = numero; // Ahi se crea la referencia
  cout << "Vamos a ver que pasa si le asignamos un dato: " << endl;
  numero = 31337;
  // Los dos mostraran el mismo valor
  cout << "Valor de numero: " << numero << endl;
  cout << "Valor de referenciaNumero: " << referenciaNumero << endl;
  // y a donde apuntan? AL MISMO SITIO
  cout << "Posicion de numero: " << &numero << endl;
  cout << "Posicion de referenciaNumero: " << &referenciaNumero << endl;
  cout << "Programa terminado \n" << endl;
  return 0;
}

