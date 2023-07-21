#include <iostream>
#include <vector>
#include <limits>

void showVect(const std::vector<std::vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<int> cambio(int n, int P, const std::vector<int>& C) {
    std::vector<std::vector<int>> D(n + 1, std::vector<int>(P + 1, 0));

    for (int j = 0; j <= P; ++j) {
        D[0][j] = j;
    }

    for (int i = 1; i <= n; ++i) {
        D[i][0] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= P; ++j) {
            if (C[i - 1] > j) {
                D[i][j] = D[i - 1][j];
            }
            else {
                D[i][j] = std::min(D[i - 1][j], D[i][j - C[i - 1]] + 1);
            }
        }
    }

    std::cout << "Tabla D:" << std::endl;
    showVect(D);

    std::vector<int> x(n, 0);
    int i = n;
    int j = P;

    while (i > 0 && j > 0) {
        if (D[i][j] != D[i - 1][j]) {
            x[i - 1]++;
            j -= C[i - 1];
        }
        else {
            i--;
        }
    }

    return x;
}

int main() {
    int n, P;
    std::cout << "Ingrese el numero de monedas (n): ";
    std::cin >> n;
    std::cout << "Ingrese el cambio (P): ";
    std::cin >> P;

    std::vector<int> C(n);

    std::cout << "Ingrese los valores de las n monedas: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> C[i];
    }

    std::vector<int> result = cambio(n, P, C);

    std::cout << "La solucion optima es: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout <<"Monedas de " << C[i] << ": " << result[i] << std::endl;
    }
    return 0;
}
