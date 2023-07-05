#include <iostream>

int binarySearch(double a[], double key, int l, int u) {
    if (u < l)
        return -1;

    int m = (l + u) / 2;

    if (a[m] == key)
        return m;
    else if (a[m] < key)
        return binarySearch(a, key, l, m - 1);
    else
        return binarySearch(a, key, m + 1, u);
}

int main() {
    double arr[] = { 10.5, 8.2, 6.7, 4.3, 2.1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    double key;
    std::cout << "Ingresa la llave a Buscar: ";
    std::cin >> key;

    int index = binarySearch(arr, key, 0, size - 1);

    if (index != -1)
        std::cout << "LLave encontrada - Indice: " << index << std::endl;
    else
        std::cout << "LLave no encontrada" << std::endl;

    return 0;
}
