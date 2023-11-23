/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file ejercicio3.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 23 2023
* @brief Función toma como parámetro un vector de números en punto
* 	 flotante y devuelve la suma de todos los valores almacenador en el vector.
*/

#include <iostream>
#include <vector>
#include <numeric> // Para std::accumulate

// Función para sumar los elementos de un vector
double ReduceSum(const std::vector<double>& vec) {
    // Utiliza std::accumulate para sumar los elementos del vector
    return std::accumulate(vec.begin(), vec.end(), 0.0);
}

int main() {
    std::cout << " ";

    // Vector para almacenar los números ingresados por el usuario
    std::vector<double> user_vector;
    double input;

    // Lee los números ingresados por el usuario
    while (std::cin >> input) {
        user_vector.push_back(input);
    }
        // Calcula y muestra la suma de los elementos del vector
        double sum = ReduceSum(user_vector);
        std::cout << sum << std::endl;
    return 0;
}
