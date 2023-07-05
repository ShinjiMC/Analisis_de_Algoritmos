#include <iostream>

template <typename Type>
class CVector {
private:
    Type* m_pVect; // Pointer to the buffer
    int m_nCount; // Control how many elements are actually used
    int m_nMax; // Control the number of allocated elements
    int m_nDelta; // To control the growing

    void Init(int delta) {
        m_pVect = new Type[delta];
        m_nCount = 0;
        m_nMax = delta;
        m_nDelta = delta;
    } // Initialize private variables
    void Resize() {
        m_pVect = (Type*)realloc(m_pVect, sizeof(Type) * (m_nMax + m_nDelta));
        m_nMax = m_nDelta;
    } // Resize the vector when an overflow occurs

public:
    CVector(int delta = 10); // Constructor
    void Insert(Type elem); // Insert a new element
    void Mostrar(); // Display the elements of the vector
    // More methods go here
};

template <typename Type>
CVector<Type>::CVector(int delta) {
    Init(delta);
}

template <typename Type>
void CVector<Type>::Insert(Type elem) {
    if (m_nCount == m_nMax) // Verify the overflow
        Resize(); // Resize the vector before inserting elem

    m_pVect[m_nCount++] = elem; // Insert the element at the end
}

template <typename Type>
void CVector<Type>::Mostrar() {
    for (int i = 0; i < m_nCount; i++) {
        std::cout << m_pVect[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Abstract Data Types:\n";
    std::cout << "Vector INT:\n";

    CVector<int> intVector;
    intVector.Insert(10);
    intVector.Insert(20);
    intVector.Insert(30);
    intVector.Mostrar(); // Output: 10 20 30

    std::cout << "Vector DOUBLE:\n";

    CVector<double> doubleVector;
    doubleVector.Insert(3.14);
    doubleVector.Insert(2.71);
    doubleVector.Mostrar(); // Output: 3.14 2.71

    return 0;
}
