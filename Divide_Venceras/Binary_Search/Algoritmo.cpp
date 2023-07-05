#include <iostream>
#include <vector>

#include <vector>

int Pivote(int i, int j, int& l, std::vector<int>& A) {
    int p = A[i]; // Se toma como pivote el primer elemento
    int k = i;
    l = j + 1;

    do {
        k++;
    } while (A[k] > p && k < j);

    do {
        l--;
    } while (A[l] <= p);

    while (k < l) {
        std::swap(A[k], A[l]);

        do {
            k++;
        } while (A[k] > p);

        do {
            l--;
        } while (A[l] <= p);
    }

    std::swap(A[i], A[l]);

    return l;
}

int BusquedaBinaria(std::vector<int>& T, int s) {
    int n = T.size();
    int i = 0;
    int j = n - 1;

    while (true) {
        int l;
        Pivote(i, j, l, T);

        if (s < l) {
            j = l - 1;
        }
        else if (s > l) {
            i = l + 1;
        }
        else {
            return T[l];
        }
    }
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
    int index = BusquedaBinaria(arr, key);
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

