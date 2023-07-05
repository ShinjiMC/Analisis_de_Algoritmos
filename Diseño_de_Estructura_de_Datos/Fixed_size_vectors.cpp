#include <iostream>

void Insert(int elem, int* gVect, int& gnCount) {
    if (gnCount < 20) // we can only insert if there is space
        gVect[gnCount++] = elem; // Insert the element at the end
}

void Fixed_size_vectors() {
    int gVect[20]; // Buffer to save the elements
    int gnCount = 0; // Counter to know the number of elements used
    for (int i = 21; i != 0; i--) {
        Insert(i, gVect, gnCount);
    }
    for (int i = 0; i != gnCount; i++) {
        std::cout << "Valor de gVect[" << i << "]: " << gVect[i] << std::endl;
    }
}
int main() {
    std::cout << "Fixed size vectors: \n";
    Fixed_size_vectors();
}
