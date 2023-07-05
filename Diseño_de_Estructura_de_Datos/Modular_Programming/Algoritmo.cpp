#include <iostream>

struct Vector {
    int* m_pVect, // Pointer to the buffer
        m_nCount, // Control how many elements are actually used
        m_nMax, // Control how many are allocated as maximum
        m_nDelta; // To control the growing
};
void Resize(Vector* pThis) {
    pThis->m_pVect = (int*)realloc(pThis->m_pVect, sizeof(int) * (pThis->m_nMax + pThis->m_nDelta));
    // The Max has to be increased by delta
    pThis->m_nMax += pThis->m_nDelta;
}
void Insert(Vector* pThis, int elem) {
    if (pThis->m_nCount == pThis->m_nMax) // Verify the overflow
        Resize(pThis); // Resize the vector before inserting elem
    // Insert the element at the end of the sequence
    pThis->m_pVect[pThis->m_nCount++] = elem;
}


int main() {
    std::cout << "Modular Programming : \n";
    Vector vec;
    vec.m_pVect = new int[10]; // Initial allocation of 10 elements
    vec.m_nCount = 0;
    vec.m_nMax = 10;
    vec.m_nDelta = 10;

    // Insert some elements
    for (int i = 0; i < 100; i++) {
        Insert(&vec, i);
    }

    // Print the elements
    for (int i = 0; i < vec.m_nCount; i++) {
        std::cout << vec.m_pVect[i] << " ";
    }
    std::cout << std::endl;

    delete[] vec.m_pVect; // Cleanup memory

    return 0;
}
