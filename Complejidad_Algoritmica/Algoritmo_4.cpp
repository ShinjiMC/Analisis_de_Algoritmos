#include <iostream>
#include <vector>

void code4(const std::vector<int>& A, const std::vector<int>& B) {
    int contador = 0;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            contador++;
            std::cout << A[i] << "," << B[j] << std::endl;
        }
    }

    std::cout << "La complejidad algoritmica es: " << contador << std::endl;
}

int main() {
    std::vector<int> A = { 1, 2, 3 };
    std::vector<int> B = { 4, 5, 6, 7 };

    code4(A, B);

    return 0;
}
