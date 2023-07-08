#include <iostream>

void code2(int N) {
    int contador = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            contador++;
            std::cout << i << "," << j << std::endl;
        }
    }

    std::cout << "La complejidad algorítmica es: " << contador << std::endl;
}

int main() {
    int N;
    std::cout << "Ingrese un valor para N: ";
    std::cin >> N;

    code2(N);

    return 0;
}
