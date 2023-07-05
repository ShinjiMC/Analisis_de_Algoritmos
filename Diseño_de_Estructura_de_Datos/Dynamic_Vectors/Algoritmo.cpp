#include <iostream>
class Dynamic_Vectors {
private:
    int* gpVect = NULL; // Dynamic buffer to save the elements int
    int gnCount = 0; // Counter to know the number of used elements int
    int gnMax = 0; // Variable containing the size of the allocated
                    // memory
public:
    Dynamic_Vectors() {
        gpVect = new int;
    }
    void Resize() {
        const int delta = 10; // Used to increase the vector size
        int* pTemp, i;
        pTemp = new int[gnMax + delta]; // Alloc a new vector
        for (i = 0; i < gnMax; i++) // Transfer the elements
            pTemp[i] = gpVect[i]; // we can also use the function memcpy
        delete[] gpVect; // delete the old vector
        gpVect = pTemp; // Update the pointer
        // You can also use the following code:
        // gpVect = realloc(gpVect, sizeof(int) * (gnMax + delta));
        gnMax += delta; // The Max has to be increased by delta
    }
    void Insert(int elem) {
        if (gnCount == gnMax) // There is no space at this moment for elem
            Resize(); // Resize the vector before inserting elem
        gpVect[gnCount++] = elem; // Insert the element at the end of the sequence
    }
    void Show() {
        for (int i = 0; i < gnCount; i++) {
            std::cout << gpVect[i] << " ";
        }
        std::cout << std::endl;
    }
    ~Dynamic_Vectors() {
        delete[] gpVect;
    }
};


int main() {
    std::cout << "Dynamic Vectors:\n";
    Dynamic_Vectors eject = Dynamic_Vectors();
    for (int i = 0; i != 100; i++) {
        eject.Insert(i);
    }
    eject.Show();
}
