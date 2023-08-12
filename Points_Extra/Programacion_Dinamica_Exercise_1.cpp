#include <iostream>
#include <vector>
#include <algorithm>

void printVector2D(const std::vector<std::vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

std::pair<int, std::vector<int>> Mochila(int n, int M, const std::vector<int>& p, const std::vector<int>& b) {
    std::vector<std::vector<int>> V(n + 1, std::vector<int>(M + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (p[i - 1] > j) { // Corregir el índice
                V[i][j] = V[i - 1][j];
            }
            else {
                V[i][j] = std::max(V[i - 1][j], V[i - 1][j - p[i - 1]] + b[i - 1]); // Corregir el índice
            }
        }
    }
    std::vector<int> x(n + 1, 0);
    int i = n;
    int j = M;
    while (i > 0 && j > 0) {
        if (V[i][j] != V[i - 1][j]) {
            x[i - 1] = 1; // Corregir el índice
            j -= p[i - 1]; // Corregir el índice
        }
        i--;
    }
    //std::cout << "Tabla V:" << std::endl;
    //printVector2D(V);

    return { V[n][M], x };
}

int main() {
    // a. Mochila de capacidad W=15
    int M = 15;
    std::vector<int> p = { 3, 7, 4, 2, 1, 6 };
    std::vector<int> b = { 12, 3, 7, 4, 3, 8 };
    std::pair<int, std::vector<int>> result = Mochila(6, M, p, b);
    std::cout << "a. Mochila de capacidad W=15:\n";
    std::cout << "Objeto: ";
    for (int i = 1; i <= 6; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\nPeso: ";
    for (auto c:p) {
        std::cout << c << " ";
    }
    std::cout << "\nBeneficio: ";
    for (auto c:b) {
        std::cout << c << " ";
    }
    std::cout << "\nEl peso maximo que se puede obtener: " << result.first << std::endl;
    std::cout << "Los objetos de la solucion optima son: ";
    for (int i = 0; i < 6; ++i) {
        if (result.second[i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    M = 255;
    p = { 51, 119, 68, 34, 17, 102 };
    b = { 204, 51, 119, 68, 51, 136 };
    result = Mochila(6, M, p, b);
    std::cout << "b. Mochila de capacidad W=255:\n";
    std::cout << "Objeto: ";
    for (int i = 1; i <= 6; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\nPeso: ";
    for (auto c : p) {
        std::cout << c << " ";
    }
    std::cout << "\nBeneficio: ";
    for (auto c : b) {
        std::cout << c << " ";
    }
    std::cout << "\nEl peso maximo que se puede obtener: " << result.first << std::endl;
    std::cout << "Los objetos de la solucion optima son: ";
    for (int i = 0; i < 6; ++i) {
        if (result.second[i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    M = 1000;
    p = { 130, 570, 140, 200, 360, 400 };
    b = { 120, 300, 570, 423, 300, 800 };
    result = Mochila(6, M, p, b);
    std::cout << "c. Mochila de capacidad W=1000:\n";
    std::cout << "Objeto: ";
    for (int i = 1; i <= 6; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\nPeso: ";
    for (auto c : p) {
        std::cout << c << " ";
    }
    std::cout << "\nBeneficio: ";
    for (auto c : b) {
        std::cout << c << " ";
    }
    std::cout << "\nEl peso maximo que se puede obtener: " << result.first << std::endl;
    std::cout << "Los objetos de la solucion optima son: ";
    for (int i = 0; i < 6; ++i) {
        if (result.second[i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
