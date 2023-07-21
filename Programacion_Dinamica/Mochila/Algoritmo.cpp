#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, std::vector<int>> Mochila(int n, int M, const std::vector<int>& p, const std::vector<int>& b) {
    std::vector<std::vector<int>> V(n + 1, std::vector<int>(M + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (p[i] > j) {
                V[i][j] = V[i - 1][j];
            }
            else {
                V[i][j] = std::max(V[i - 1][j], V[i - 1][j - p[i]] + b[i]);
            }
        }
    }
    std::vector<int> x(n + 1, 0);
    int i = n;
    int j = M;
    while (i > 0 && j > 0) {
        if (V[i][j] != V[i - 1][j]) {
            x[i] = 1;
            j -= p[i];
        }
        i--;
    }
    return { V[n][M], x };
}

int main() {
    int n, M;
    std::cout << "Ingrese el número de objetos (n): ";
    std::cin >> n;
    std::cout << "Ingrese la capacidad de la mochila (M): ";
    std::cin >> M;

    std::vector<int> p(n + 1);
    std::vector<int> b(n + 1);

    std::cout << "Ingrese los pesos de los n objetos (p): ";
    for (int i = 1; i <= n; ++i) {
        std::cin >> p[i];
    }

    std::cout << "Ingrese los valores de los n objetos (b): ";
    for (int i = 1; i <= n; ++i) {
        std::cin >> b[i];
    }

    std::pair<int, std::vector<int>> result = Mochila(n, M, p, b);

    std::cout << "El peso maximo que se puede obtener: " << result.first << std::endl;
    std::cout << "Los objetos de la solución óptima son: ";
    for (int i = 1; i <= n; ++i) {
        if (result.second[i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
