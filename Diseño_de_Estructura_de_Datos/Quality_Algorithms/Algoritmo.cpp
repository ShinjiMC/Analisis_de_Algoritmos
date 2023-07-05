#include <iostream>

unsigned long fibonacciIterative(unsigned n) {
    if (n < 2)
        return n;

    unsigned long f1 = 0, f2 = 1;
    unsigned long output;

    for (unsigned i = 2; i <= n; i++) {
        output = f1 + f2;
        f1 = f2;
        f2 = output;
    }

    return output;
}

int main() {
    unsigned n;

    std::cout << "Ingresa el valor de N: ";
    std::cin >> n;

    unsigned long result = fibonacciIterative(n);

    std::cout << "El " << n << "th Fibonacci numero es: " << result << std::endl;

    return 0;
}
