#include <iostream>

void code5(int N) {
    int contador = 0;
    int i = 1;
    while (i < N) {
        contador++;
        std::cout << i << std::endl;
        i = i * 2;
    }

    std::cout << "La complejidad algorítmica es: " << contador << std::endl;
}

int main() {
    int N;
    std::cout << "Ingrese un valor para N: ";
    std::cin >> N;

    code5(N);

    return 0;
}
