#include <iostream>

void code7() {
    int N = 1000;
    int contador = 0;
    if (N % 2 == 0) {
        contador++;
        std::cout << "par" << std::endl;
    }

    if (N % 2 != 0) {
        contador++;
        std::cout << "impar" << std::endl;
    }

    std::cout << "La complejidad algorítmica es: " << contador << std::endl;
}

int main() {
    code7();

    return 0;
}
