/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file ejercicio2.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 20 2023
* @brief Devuelve uin vector de números aleatorios de un punto dentro de un
* 	 rango especificado.
*/

#include <iostream>
#include <vector>
#include <random>

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    // Inicializa el generador de números aleatorios
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(lower, upper);
    // Crea un vector para almacenar los valores generados
    std::vector<double> result;
    // Genera los valores aleatorios y los agrega al vector
    for (int i = 0; i < size; ++i) {
        result.push_back(dist(gen));
    }
    // Devuelve el vector resultante
    return result;
}
int main() {
    // Llama a la función GenerateVector con los parámetros deseados
    std::vector<double> my_vector = GenerateVector(10, 5.0, 10.0);
    // Imprime los componentes del vector
    for (const auto& value : my_vector) {
        std::cout << "Component: " << value << std::endl;
    }

    return 0;
}
