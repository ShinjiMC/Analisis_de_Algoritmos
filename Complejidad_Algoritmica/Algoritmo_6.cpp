#include <iostream>

void code6(int N) {
    int contador = 0;
    for (int i = 0; i < N; i++) {
        int j = 1;
        while (j < N) {
            contador++;
            std::cout << j << std::endl;
            j = j * 2;
        }
    }

    std::cout << "La complejidad algorítmica es: " << contador << std::endl;
}

int main() {
    int N;
    std::cout << "Ingrese un valor para N: ";
    std::cin >> N;

    code6(N);

    return 0;
}
