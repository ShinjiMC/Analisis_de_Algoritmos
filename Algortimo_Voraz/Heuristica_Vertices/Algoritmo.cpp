#include <iostream>
#include <vector>
#include <limits>

int encontrarNodoCercano(int nodoActual, const std::vector<std::vector<int>>& grafo, std::vector<bool>& visitado) {
    int n = grafo.size();
    int nodoCercano = -1;
    int distanciaMinima = std::numeric_limits<int>::max();

    for (int i = 0; i < n; i++) {
        if (!visitado[i] && grafo[nodoActual][i] < distanciaMinima) {
            nodoCercano = i;
            distanciaMinima = grafo[nodoActual][i];
        }
    }

    return nodoCercano;
}

std::vector<int> encontrarCicloMinimo(const std::vector<std::vector<int>>& grafo, int nodoInicial) {
    int n = grafo.size();
    std::vector<int> cicloMinimo;
    std::vector<bool> visitado(n, false);
    int costoTotal = 0;

    cicloMinimo.push_back(nodoInicial);
    visitado[nodoInicial] = true;
    std::cout << "Costo: ";
    for (int i = 1; i < n; i++) {
        int nodoActual = cicloMinimo.back();
        int siguienteNodo = encontrarNodoCercano(nodoActual, grafo, visitado);
        cicloMinimo.push_back(siguienteNodo);
        visitado[siguienteNodo] = true;
        std::cout << grafo[nodoActual][siguienteNodo] << " + ";
        costoTotal += grafo[nodoActual][siguienteNodo];
    }
    
    costoTotal += grafo[cicloMinimo.back()][nodoInicial];
    std::cout << grafo[cicloMinimo.back()][nodoInicial] << std::endl;
    cicloMinimo.push_back(nodoInicial);
    std::cout << "Costo total del ciclo minimo: " << costoTotal << std::endl;

    return cicloMinimo;
}

void imprimirCiclo(const std::vector<int>& ciclo) {
    std::cout << "Solucion: ";
    for (int i = 0; i < ciclo.size() - 1; i++) {
        std::cout << ciclo[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n = 5;
    std::vector<std::vector<int>> grafo = {
        {0, 10, 55, 25, 45},
        {10, 0, 20, 25, 40},
        {55, 20, 0, 15, 30},
        {25, 25, 15, 0, 50},
        {45, 40, 30, 50, 0}
    };

    int nodoInicial = 4;//0-4

    std::vector<int> cicloMinimo = encontrarCicloMinimo(grafo, nodoInicial);
    imprimirCiclo(cicloMinimo);

    return 0;
}
