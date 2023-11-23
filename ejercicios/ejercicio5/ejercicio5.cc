/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file ejercicio5.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Nov 23 2023
* @brief Toma como parámetros dos vectores y devuelve copmo resultado
*        un tercer vector que sea la "concatenación" de los dos vectores pasados.
*/

#include <iostream>
#include <vector>
#include <iterator>

// Función para concatenar dos vectores
std::vector<int> ConcatenateVectors(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::vector<int> result(vec1);
    result.insert(result.end(), vec2.begin(), vec2.end());
    return result;
}

int main() {
    // Primer vector
    std::cout << " ";
    std::vector<int> vector1(std::istream_iterator<int>(std::cin), {});
    // Segundo vector
    std::cout << " ";
    std::vector<int> vector2(std::istream_iterator<int>(std::cin), {});
    // Llamar a la función para concatenar los vectores
    std::vector<int> concatenatedVector = ConcatenateVectors(vector1, vector2);
    // Mostrar el resultado, vector concatenado
    std::cout << " ";
    for (int value : concatenatedVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}
