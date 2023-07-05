#include <iostream>
#include <vector>

// Función para combinar dos subarrays ordenados en un único array ordenado
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Crear arrays temporales
    std::vector<int> L(n1), R(n2);

    // Copiar los datos a los arrays temporales L[] y R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Combinar los arrays temporales en arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Función principal de Mergesort
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        // Calcula el punto medio
        int mid = left + (right - left) / 2;

        // Ordena la primera mitad
        mergeSort(arr, left, mid);

        // Ordena la segunda mitad
        mergeSort(arr, mid + 1, right);

        // Combina las mitades ordenadas
        merge(arr, left, mid, right);
    }
}

// Función de ayuda para imprimir el array
void printArray(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Ejemplo de uso del algoritmo Mergesort
int main() {
    std::vector<int> arr = { 12, 11, 13, 5, 6, 7, 1, 30, 23, 8 };
    int n = arr.size();

    std::cout << "Array original: ";
    printArray(arr);

    mergeSort(arr, 0, n - 1);

    std::cout << "Array ordenado: ";
    printArray(arr);

    return 0;
}
