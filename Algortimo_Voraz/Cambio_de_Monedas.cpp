#include <iostream>
#include <vector>

void DevolverCambio(int P, std::vector<int> C, std::vector<int>& X) {
    int act = 0;
    int j = C.size() - 1;
    for (int i = 0; i < C.size(); i++) {
        X[i] = 0;
    }
    while (act != P) {
        while (C[j] > (P - act) && j > 0) {
            j--;
        }
        if (j == 0 && C[j] > (P - act)) {
            std::cout << "No existe solución" << std::endl;
            return;
        }
        X[j] = (P - act) / C[j];
        act += C[j] * X[j];
    }
}

int main() {
    int P = 389;
    //std::vector<int> C = { 200, 100, 50, 20, 10, 5, 2, 1 };
    std::vector<int> C = { 1,2,5,10,20,100,200 };
    std::vector<int> X(C.size());

    DevolverCambio(P, C, X);
    int total = 0;
    int nMonedas = 0;

    for (int i = 0; i < C.size(); i++) {
        std::cout << "Monedas de " << C[i] << " centimos: " << X[i] << std::endl;
        total = C[i] * X[i] + total;
        nMonedas += X[i];
    }
    std::cout << "Siendo en total: " << total << " en " << nMonedas << " monedas." << std::endl;
    return 0;
}
