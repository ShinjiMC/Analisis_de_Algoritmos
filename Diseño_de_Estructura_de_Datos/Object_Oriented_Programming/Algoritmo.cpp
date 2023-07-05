#include <iostream>

// Class CVector definition
class CVector {
private:
    int* m_pVect, // Pointer to the buffer
        m_nCount, // Control how many elements are actually used
        m_nMax, // Control how many are allocated as maximum
        m_nDelta; // To control the growing
    void Init(int delta); // Init our private variables, etc
    void Resize(); // Resize the vector when occurs an overflow
public:
    CVector(int delta = 10); // Constructor
    void Insert(int elem); // Insert a new element
    void MostrarDatos(); // Show the vector data
    // More methods go here
};

CVector::CVector(int delta) {
    Init(delta);
}

void CVector::Init(int delta) {
    m_pVect = new int[delta];
    m_nCount = 0;
    m_nMax = delta;
    m_nDelta = delta;
}

void CVector::Resize() {
    int* pTemp = new int[m_nMax + m_nDelta];

    for (int i = 0; i < m_nMax; i++) {
        pTemp[i] = m_pVect[i];
    }

    delete[] m_pVect;
    m_pVect = pTemp;
    m_nMax += m_nDelta;
}

void CVector::Insert(int elem) {
    if (m_nCount == m_nMax)
        Resize();
    m_pVect[m_nCount++] = elem;
}

void CVector::MostrarDatos() {
    for (int i = 0; i < m_nCount; i++) {
        std::cout << m_pVect[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Object Oriented Programming:\n";
    CVector vector;

    // Insert elements
    for (int i = 0; i != 100; i++) {
        vector.Insert(i);
    }
    // Show the vector data
    vector.MostrarDatos();

    return 0;
}
