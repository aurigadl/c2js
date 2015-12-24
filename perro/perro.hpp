/**
 * * Perro.hpp
 * * Cabecera de la clase Perro con sus funciones get/set para el atributo edad
 * *
 * * Pello Xabier Altadill Izura
 * *
 * */
using namespace std;
#include <iostream>
class Perro {
  public:
    Perro (int initialAge);
    ~Perro();
    int  GetAge() { return itsAge; } // inline?
    void SetAge (int age) { itsAge = age; } // inline?
    void Ladra() { cout << "Guau Guau arrr...\n"; } // inline?
  private:
    int itsAge;
};
