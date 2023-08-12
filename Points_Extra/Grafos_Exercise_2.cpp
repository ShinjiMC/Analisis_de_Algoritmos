#include <iostream>
#include <vector>

using namespace std;

void Generar(int nivel, vector<int>& solucion_actual, int& b_actual, int& p_actual, int& maxb, vector<int>& mejor_solucion, const vector<int>& p, const vector<int>& b, int M, int n);

void Mochila01Backtracking(const vector<int>& p, const vector<int>& b, int M, int n) {
    int maxb = 0;
    vector<int> mejor_solucion(n, 0);
    vector<int> solucion_actual(n, 0);
    int b_actual = 0;
    int p_actual = 0;
    int nivel = 0;

    Generar(nivel, solucion_actual, b_actual, p_actual, maxb, mejor_solucion, p, b, M, n);
    cout << "\nMejor solucion: \n Camino: ";
    for (int i = 0; i < n; ++i) {
        cout << mejor_solucion[i] << " ";
    }
    cout << endl;
    cout << "Objetos: " << endl;
    int ptotal=0;
    for (int i = 0; i < n; ++i) {
        if (mejor_solucion[i] != 0) {
            cout << "- Beneficio: " << b[i] <<" Peso: " << p[i] << endl;
            ptotal += p[i];
        }
    }
    cout << "Beneficio Total: " << maxb << endl;
    cout << "Peso Total: " << ptotal << endl;
}

void Generar(int nivel, vector<int>& solucion_actual, int& b_actual, int& p_actual, int& maxb, vector<int>& mejor_solucion, const vector<int>& p, const vector<int>& b, int M, int n) {
    if (nivel == n) {
        cout << "Solucion: ";
        for (int i = 0; i < n; ++i) {
            cout << solucion_actual[i] << " ";
        }
        cout << "Beneficio: " << b_actual << " Peso: " << p_actual << endl;

        if (b_actual > maxb) {
            maxb = b_actual;
            mejor_solucion = solucion_actual;
        }
        return;
    }

    if (p_actual + p[nivel] <= M) {
        solucion_actual[nivel] = 1;
        b_actual += b[nivel];
        p_actual += p[nivel];
        Generar(nivel + 1, solucion_actual, b_actual, p_actual, maxb, mejor_solucion, p, b, M, n);
        b_actual -= b[nivel];
        p_actual -= p[nivel];
    }

    solucion_actual[nivel] = 0;
    Generar(nivel + 1, solucion_actual, b_actual, p_actual, maxb, mejor_solucion, p, b, M, n);
}

int main() {
    int M = 61;
    std::vector<int> p = { 1, 11, 21, 23, 33};
    std::vector<int> b = { 11, 21, 31, 33, 43 };
    std::cout << "a. Mochila de capacidad W=15:\n";
    std::cout << "Objeto: ";
    for (int i = 1; i <= 5; ++i) {
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
    std::cout << std::endl;
    cout << "Arbol de decision:" << endl;
    Mochila01Backtracking(p, b, M, 5);

    return 0;
}

