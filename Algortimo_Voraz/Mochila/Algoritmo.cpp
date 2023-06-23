#include <iostream>
#include <vector>

void Mochila(int M, std::vector<int> b, std::vector<int> p, std::vector<int>& X) {
    int n = b.size();
    for (int i = 0; i < n; i++) {
        X[i] = 0;
    }
    int pesoAct = 0;
    int beneficioTotal = 0;
    while (pesoAct < M) {
        int mejorObjeto = -1;
        double mejorRatio = 0.0;
        for (int i = 0; i < n; i++) {
            if (X[i] == 0 && (mejorObjeto == -1 || (double)p[i] / b[i] > mejorRatio)) {
                mejorObjeto = i;
                mejorRatio = (double)p[i] / b[i];
            }
        }
        if (mejorObjeto == -1) {
            break;
        }
        if (pesoAct + p[mejorObjeto] <= M) {
            X[mejorObjeto] = 1;
            pesoAct += p[mejorObjeto];
            beneficioTotal += b[mejorObjeto];
        }
        else {
            X[mejorObjeto] = (M - pesoAct) / p[mejorObjeto];
            pesoAct = M;
            beneficioTotal += X[mejorObjeto] * b[mejorObjeto];
        }
    }
    std::cout << "Beneficio total: " << beneficioTotal << std::endl;
}

int main() {
    int M = 10;
    std::vector<int> b = { 10, 1, 1, 1 };
    std::vector<int> p = { 10, 3, 3, 4 };
    std::vector<int> X(b.size());
    Mochila(M, b, p, X);
    for (int i = 0; i < b.size(); i++) {
        std::cout << "Objeto " << i+1 << ": " << X[i] << std::endl;
    }
    return 0;
}
