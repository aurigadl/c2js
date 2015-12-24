/**
 * * Funcion3.cpp
 * * Programa con llamada a una funcion
 * * El programa principal recoge datos de la entrada estandar
 * *
 * * Pello Xabier Altadill Izura
 * *
 * * Compilado: g++ Funcion3.cpp -o Funcion3
 * */
using namespace std;
#include <iostream>
// Funcion: llamada
int llamada (int x, int y) {
  cout << "Estamos en la funcion!!" << endl;
  return (x+y);
}


int main() {
  // Estos comentarios son propios de C++
  cout << "Vamos a llamar a la funcion.." << endl;
  // Llamamos a la funcion
  // Llamamos a una funcion y asignamos
  int z = 0, x = 0, y = 0;
  // Recogemos los parametros
  cout << "Dame el primer parametro:";
  cin >> x;
  cout << "\nOK!\nDame el segundo parametro:";
  cin >> y;
  cout << "\nOK vamos a calcular.";
  //Efectuamos la funcion.
  z = llamada(x,y);
  // Mostramos el resultado
  cout << "Resultado:" << z << endl;
  // Llamada desde el output
  cout << "Resultado:" << llamada(6,7) << endl;
  cout << "Programa terminado \n" << endl;
  return 0;
}
