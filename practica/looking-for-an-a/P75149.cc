/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file P75149.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 23 2023
* @brief Lee una secuencia de caracteres terminados en un punto y
* 	 dice si la secuencia tiene alguna 'a' minúscula o no.
*/

#include <iostream>
using namespace std;

int main() {
  char cadena;
  bool hay_a = false;
  while (cin >> cadena && cadena != '.') {
    if (cadena == 'a') {
      hay_a = true;
    }
  }
  if (hay_a) {
    cout << "yes";
  } else {
    cout << "no";
  }
  cout << endl;
}
