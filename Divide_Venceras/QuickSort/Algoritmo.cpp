#include <iostream>
#include <vector>

// Función para intercambiar dos elementos en un vector
void swap(std::vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Función para seleccionar el pivote y particionar el array
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot && i <= high);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            break;

        swap(arr, i, j);
    }

    swap(arr, low, j);

    return j;
}

// Función principal de Quicksort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Función para imprimir el array
void printArray(const std::vector<int>& arr) {
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;
}

// Ejemplo de uso del algoritmo Quicksort
int main() {
    std::vector<int> arr = { 12, 11, 13, 5, 6, 7, 1, 30, 23, 8, 9 };
    int n = arr.size();

    std::cout << "Array original: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    std::cout << "Array ordenado: ";
    printArray(arr);

    return 0;
}
