#include <iostream>
#include <vector>
#include <algorithm>

// Estructura para representar una arista con su costo
struct Arista {
    int nodo1;
    int nodo2;
    int costo;
    Arista(int n1, int n2, int c) : nodo1(n1), nodo2(n2), costo(c) {}
};

// Función para comparar aristas por su costo (utilizada en la ordenación)
bool compararAristas(const Arista& a1, const Arista& a2) {
    return a1.costo < a2.costo;
}

// Función para encontrar el padre de un nodo en el conjunto de elementos
int encontrarPadre(int nodo, std::vector<int>& padres) {
    if (padres[nodo] != nodo)
        padres[nodo] = encontrarPadre(padres[nodo], padres);
    return padres[nodo];
}

// Función para unir dos conjuntos de elementos
void unir(int nodo1, int nodo2, std::vector<int>& padres) {
    int padre1 = encontrarPadre(nodo1, padres);
    int padre2 = encontrarPadre(nodo2, padres);
    padres[padre1] = padre2;
}

// Función para encontrar un ciclo de costo mínimo que pase por todos los nodos
std::vector<Arista> encontrarCicloMinimoCerrado(const std::vector<std::vector<int>>& grafo) {
    int n = grafo.size();

    // Crear vector de aristas
    std::vector<Arista> aristas;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            aristas.push_back(Arista(i, j, grafo[i][j]));
        }
    }

    // Ordenar las aristas por su costo en orden ascendente
    std::sort(aristas.begin(), aristas.end(), compararAristas);

    // Vector para almacenar los padres de los nodos
    std::vector<int> padres(n);
    for (int i = 0; i < n; i++) {
        padres[i] = i;
    }

    // Vector para almacenar las aristas del ciclo mínimo
    std::vector<Arista> cicloMinimo;

    // Vector para contar el grado de los nodos
    std::vector<int> grado(n, 0);

    // Variables para contar las aristas seleccionadas y verificar si se ha formado un ciclo
    int aristasSeleccionadas = 0;
    int indice = 0;

    // Construir el ciclo mínimo
    while (aristasSeleccionadas < n - 1) {
        Arista aristaActual = aristas[indice++];
        int padreNodo1 = encontrarPadre(aristaActual.nodo1, padres);
        int padreNodo2 = encontrarPadre(aristaActual.nodo2, padres);

        // Verificar si agregar la arista crea un grado mayor a 2 en algún nodo
        if (grado[aristaActual.nodo1] < 2 && grado[aristaActual.nodo2] < 2 && padreNodo1 != padreNodo2) {
            cicloMinimo.push_back(aristaActual);
            unir(padreNodo1, padreNodo2, padres);
            aristasSeleccionadas++;
            grado[aristaActual.nodo1]++;
            grado[aristaActual.nodo2]++;
        }
    }

    // Buscar los dos nodos que no están conectados en el ciclo mínimo
    int nodo1 = -1, nodo2 = -1;
    for (int i = 0; i < n; i++) {
        if (grado[i] < 2) {
            if (nodo1 == -1)
                nodo1 = i;
            else
                nodo2 = i;
        }
    }

    // Agregar la arista final que cierra el ciclo
    cicloMinimo.push_back(Arista(nodo1, nodo2, grafo[nodo1][nodo2]));

    return cicloMinimo;
}


// Función para imprimir el ciclo mínimo y calcular el costo total
void imprimirCiclo(const std::vector<Arista>& ciclo) {
    int costoTotal = 0;

    std::cout << "Solucion: ";
    for (const Arista& arista : ciclo) {
        std::cout << arista.nodo1 + 1 << "-" << arista.nodo2 + 1 << " ";
        costoTotal += arista.costo;
    }
    std::cout << std::endl;

    std::cout << "Costo total del ciclo mínimo: " << costoTotal << std::endl;
}

int main() {
    int n = 5;  // Número de nodos

    // Ejemplo de inserción de datos
    std::vector<std::vector<int>> grafo = {
        {0, 10, 55, 25, 45},
        {10, 0, 20, 25, 40},
        {55, 20, 0, 15, 30},
        {25, 25, 15, 0, 50},
        {45, 40, 30, 50, 0}
    };

    std::vector<Arista> cicloMinimo = encontrarCicloMinimoCerrado(grafo);
    imprimirCiclo(cicloMinimo);

    return 0;
}
