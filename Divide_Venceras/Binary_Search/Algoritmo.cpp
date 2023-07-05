#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int key, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Elemento encontrado, retornar el índice
        }
        else if (arr[mid] > key) {
            return binarySearch(arr, key, low, mid - 1); // Buscar en la mitad izquierda
        }
        else {
            return binarySearch(arr, key, mid + 1, high); // Buscar en la mitad derecha
        }
    }

    return -1; // Elemento no encontrado
}

int search(const std::vector<int>& arr, int key) {
    int n = arr.size();
    return binarySearch(arr, key, 0, n - 1);
}

void printArray(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> arr = { 12, 11, 13, 5, 6, 7, 1, 30, 23, 8, 9 };
    int key = 7;
    int index = search(arr, key);
    std::cout << "Array: ";
    printArray(arr);
    if (index != -1) {
        std::cout << "Elemento encontrado en el indice: " << index << std::endl;
    }
    else {
        std::cout << "Elemento no encontrado en el array." << std::endl;
    }

    return 0;
}

