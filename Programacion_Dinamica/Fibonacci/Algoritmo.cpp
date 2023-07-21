#include <iostream>
#include <vector>
int fibonacci(int n) {
    std::vector<int> T(n + 1, 0);
    T[1] = 1;
    T[2] = 1;

    for (int i = 3; i <= n; i++) {
        T[i] = T[i - 1] + T[i - 2];
    }
    return T[n];
}

int main() {
    int n;
    std::cout << "Ingrese el valor de n para calcular Fibonacci: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "El numero de Fibonacci para n = " << n << " es: " << result << std::endl;

    return 0;
}
