/**
 * * Loop.cpp
 * *
 * * Programa que muestra como usar iteraciones
 * * Pello Xabier Altadill Izura
 * * Compilar: g++ Loop.cpp -o Loop
 * */
using namespace std;
#include <iostream>
// Programa principal
int main () {
  cout << " Hola, vamos a mostrar un loop " << endl;
  //Inicializamos variables
  int i = 0;
  int max = 0;
  // Le pedimos al usuario que meta el total de iteraciones
  cout << " Cuantas vueltas damos? ";
  cin >> max;
  // Vamos a implementar una iteracion con etiquetas
  // en general no es recomendable usar etiquetas
  bucle: i++;
    cout << "Contador: " << i << endl;
    // si no superamos el tama&ntilde;o maximo, volvemos a la etiqueta
    if (i < max)
      goto bucle;
    // fin de programa
  return 0;
}
