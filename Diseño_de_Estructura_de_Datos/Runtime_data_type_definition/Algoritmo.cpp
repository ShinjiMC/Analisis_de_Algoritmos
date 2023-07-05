#include <iostream>
#include <cstring>

class CVector
{
private:
    void** m_pVect; // Pointer to the buffer
    int m_nCount, // Control how many elements are actually used
        m_nMax, // Control the number of allocated elements
        m_nDelta, // To control the growing
        m_nElemSize; // Element size
    // Pointer to the function to compare
    int (*m_lpfnCompare)(void*, void*);

    void Init(int delta); // Init our private variables, etc
    void Resize(); // Resize the vector when an overflow occurs

    void* DupBlock(void* pElem);

public:
    CVector(int (*lpfnCompare)(void*, void*), int nElemSize, int delta = 10); // Constructor
    void Insert(void* elem); // Insert a new element
    void Mostrar();
    // More methods go here
};

// Class CVector implementation
CVector::CVector(int (*lpfnCompare)(void*, void*), int nElemSize, int delta)
{
    Init(delta);
    m_lpfnCompare = lpfnCompare;
    m_nElemSize = nElemSize;
}

void CVector::Init(int delta)
{
    m_nCount = 0;
    m_nMax = delta;
    m_nDelta = delta;
    m_pVect = new void* [m_nMax];
}

void CVector::Resize()
{
    m_nMax += m_nDelta;
    void** temp = new void* [m_nMax];
    std::memcpy(temp, m_pVect, m_nCount * sizeof(void*));
    delete[] m_pVect;
    m_pVect = temp;
}

void* CVector::DupBlock(void* pElem)
{
    void* p = new char[m_nElemSize];
    return std::memcpy(p, pElem, m_nElemSize);
}

void CVector::Insert(void* pElem)
{
    if (m_nCount == m_nMax) // Verify the overflow
        Resize(); // Resize the vector before inserting elem
    m_pVect[m_nCount++] = DupBlock(pElem); // Insert the element at the end
}

void CVector::Mostrar() {
    for (int i = 0; i < m_nCount; i++)
    {
        int* elem = static_cast<int*>(m_pVect[i]);
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}


// Function to compare two integers
int fnIntCompare(void* pVar1, void* pVar2)
{
    // < 0 if *(int *)pVar1 < *(int *)pVar2,
    // > 0 if *(int *)pVar1 > *(int *)pVar2
    // else 0
    return *(int*)pVar1 - *(int*)pVar2;
}

int main()
{
    // Create a CVector object with integer elements
    CVector vector(fnIntCompare, sizeof(int));

    // Insert some elements into the vector
    int elem1 = 4;
    int elem2 = 10;
    int elem3 = 7;
    vector.Insert(&elem1);
    vector.Insert(&elem2);
    vector.Insert(&elem3);

    // Display the elements in the vector
    vector.Mostrar();

    return 0;
}
