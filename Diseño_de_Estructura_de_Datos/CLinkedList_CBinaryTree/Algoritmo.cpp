#include <iostream>

// Structure for nodes in a Linked List
template <typename T>
struct NODE
{
    T m_data;                // The data goes here
    struct NODE<T>* m_pNext; // Pointer to the next node
    static long id;          // Node id

    NODE()                  // Constructor
        : m_data(0), m_pNext(nullptr) {}
    // More methods go here
};

template <typename T>
long NODE<T>::id = 0; // Initialization of the node's id

// Linked List implementation
template <typename T>
class CLinkedList
{
private:
    NODE<T>* m_pRoot; // Pointer to the root

public:
    CLinkedList() : m_pRoot(nullptr) {}

    void Insert(T data)
    {
        NODE<T>* newNode = new NODE<T>;
        newNode->m_data = data;
        newNode->m_pNext = m_pRoot;
        m_pRoot = newNode;
    }

    void Mostrar()
    {
        NODE<T>* current = m_pRoot;
        while (current != nullptr)
        {
            std::cout << current->m_data << " ";
            current = current->m_pNext;
        }
        std::cout << std::endl;
    }
};

// Structure for nodes in a Binary Tree
template <typename T>
struct NODE_Binary
{
    T m_data;                 // The data goes here
    struct NODE_Binary<T>* m_pLeft;  // Pointer to the left child
    struct NODE_Binary<T>* m_pRight; // Pointer to the right child

    NODE_Binary()                    // Constructor
        : m_data(0), m_pLeft(nullptr), m_pRight(nullptr) {}
    // More methods go here
};

// Binary Tree implementation
template <typename T>
class CBinaryTree
{
private:
    NODE_Binary<T>* m_pRoot; // Pointer to the root

public:
    CBinaryTree() : m_pRoot(nullptr) {}

    void Insert(T data)
    {
        NODE_Binary<T>* newNode = new NODE_Binary<T>;
        newNode->m_data = data;
        newNode->m_pLeft = nullptr;
        newNode->m_pRight = nullptr;

        if (m_pRoot == nullptr)
        {
            m_pRoot = newNode;
        }
        else
        {
            NODE_Binary<T>* current = m_pRoot;
            while (true)
            {
                if (data < current->m_data)
                {
                    if (current->m_pLeft == nullptr)
                    {
                        current->m_pLeft = newNode;
                        break;
                    }
                    else
                    {
                        current = current->m_pLeft;
                    }
                }
                else
                {
                    if (current->m_pRight == nullptr)
                    {
                        current->m_pRight = newNode;
                        break;
                    }
                    else
                    {
                        current = current->m_pRight;
                    }
                }
            }
        }
    }

    void Mostrar() const
    {
        MostrarRecursivo(m_pRoot);
        std::cout << std::endl;
    }

private:
    void MostrarRecursivo(NODE_Binary<T>* node) const
    {
        if (node == nullptr)
            return;

        MostrarRecursivo(node->m_pLeft);
        std::cout << node->m_data << " ";
        MostrarRecursivo(node->m_pRight);
    }
};

int main()
{
    // Test the Linked List
    CLinkedList<int> linkedList;
    linkedList.Insert(10);
    linkedList.Insert(20);
    linkedList.Insert(30);
    std::cout << "Linked List: ";
    linkedList.Mostrar(); // Output: 30 20 10

    // Test the Binary Tree
    CBinaryTree<float> binaryTree;
    binaryTree.Insert(3.14);
    binaryTree.Insert(2.71);
    binaryTree.Insert(1.618);
    std::cout << "Binary Tree: ";
    binaryTree.Mostrar(); // Output: 1.618 2.71 3.14

    return 0;
}
