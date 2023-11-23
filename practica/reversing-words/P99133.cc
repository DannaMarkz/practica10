/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file P99133.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 23 2023
* @brief El programa lee palabras e imprime el orden inverso,
* 	 invirtiendo también los carácteres
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string palabra;
  int knumero_palabras;
  cin >> knumero_palabras;
  vector<string> words(knumero_palabras);
  for (int i = knumero_palabras - 1; i >= 0; --i) {
    cin >> palabra;
    words[i] = palabra;
  }
  for (int j = 0; j < knumero_palabras; ++j) {
    palabra = words[j];
    reverse(palabra.begin(), palabra.end());
    cout << palabra << endl;
  }
}
