#include <iostream>

double Potencia(double x, int n) {
    if (n == 0)
        return 1.0;

    if (n % 2 == 0) {
        double temp = Potencia(x, n / 2);
        return temp * temp;
    }
    else {
        double temp = Potencia(x, (n - 1) / 2);
        return x * temp * temp;
    }
}


int main() {
    double x = 0;
    int n = 0;
    std::cout << "El numero a Potenciar: ";
    std::cin >> x;
    std::cout << "La potencia de: ";
    std::cin >> n;
    std::cout << "Su potencia es: " << Potencia(x, n) << std::endl;
}
