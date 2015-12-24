/**
*
* Perro.cpp
* Clase que implementa la clase Perro
*
* Pello Xabier Altadill Izura
*
* Compilado: g++ Perro.cpp -o Perro
*
*/

#include "perro.hpp"

Perro::Perro(int initialAge){ //constructor
  itsAge = initialAge;
}

Perro::~Perro(){ //destructor
  cout << " objeto destruido." << endl;
}

/**
* La funcion principal, crea un perro y le hace ladrar
*/
int main() {
  bool test = false;
  Perro Canelo(5);
  Canelo.Ladra();
  cout << "Canelo es un perro cuya edad es: " ;
  cout << Canelo.GetAge() << " años\n";
  Canelo.Ladra();
  Canelo.SetAge(7);
  cout << "Ahora Canelo es " ;
  cout << Canelo.GetAge() << " años\n";
  return 0;
}
