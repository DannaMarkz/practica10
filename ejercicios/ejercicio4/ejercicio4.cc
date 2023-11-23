/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file ejercicio4.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 23 2023
* @brief La función toma como parámetro un vector y calcula los valores 
*        máximo, mínimo y promedio de todos los valores almacenados en el vector.
*/

#include <iostream>
#include <vector>
#include <cmath>

void CalculateStats(const std::vector<double>& vec, double& max, double& min, double& avg) {
    if (vec.empty()) {
        // Vector vacío, asignamos valores por defecto
        max = min = avg = 0.0;
        return;
    }
    // Inicializamos max y min con el primer elemento del vector
    max = min = vec[0];
    avg = 0.0;
    // Calculamos el máximo, mínimo y sumamos los valores para el promedio
    for (double value : vec) {
        if (value > max) {
            max = value;
        }
        if (value < min) {
            min = value;
        }
        avg += value;
    }
    // Calculamos el promedio dividiendo la suma total por la cantidad de elementos
    avg /= vec.size();
}
int main() {
    std::vector<double> user_vector;

    // Solicitamos al usuario que ingrese los valores del vector
    double value;
    std::cout << "Ingrese los valores del vector (ingrese un valor no numérico para finalizar): ";
    while (std::cin >> value) {
        user_vector.push_back(value);
    }

    // Variables para almacenar los resultados
    double max, min, avg;

    // Llamamos a la función para calcular los valores
    CalculateStats(user_vector, max, min, avg);

    // Mostramos los resultados
    std::cout << "Máximo: " << max << std::endl;
    std::cout << "Mínimo: " << min << std::endl;
    std::cout << "Promedio: " << avg << std::endl;

    return 0;
}
