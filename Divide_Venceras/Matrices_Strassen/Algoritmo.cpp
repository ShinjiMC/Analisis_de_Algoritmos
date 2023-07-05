#include <iostream>
#include <vector>

// Función para sumar dos matrices
std::vector<std::vector<int>> sumMatrix(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int n = A.size();
    std::vector<std::vector<int>> C(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
}

// Función para restar dos matrices
std::vector<std::vector<int>> subtractMatrix(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int n = A.size();
    std::vector<std::vector<int>> C(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    return C;
}

// Función para multiplicar matrices utilizando el algoritmo de Strassen
std::vector<std::vector<int>> strassenMultiply(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int n = A.size();

    // Caso base: matrices de 1x1
    if (n == 1) {
        std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));
        C[0][0] = A[0][0] * B[0][0];
        return C;
    }

    // División de las matrices en submatrices
    int m = n / 2;
    std::vector<std::vector<int>> A11(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> A12(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> A21(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> A22(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> B11(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> B12(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> B21(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> B22(m, std::vector<int>(m, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + m];
            A21[i][j] = A[i + m][j];
            A22[i][j] = A[i + m][j + m];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + m];
            B21[i][j] = B[i + m][j];
            B22[i][j] = B[i + m][j + m];
        }
    }

    // Cálculo de los productos de las submatrices
    std::vector<std::vector<int>> P1 = strassenMultiply(A11, subtractMatrix(B12, B22));
    std::vector<std::vector<int>> P2 = strassenMultiply(sumMatrix(A11, A12), B22);
    std::vector<std::vector<int>> P3 = strassenMultiply(sumMatrix(A21, A22), B11);
    std::vector<std::vector<int>> P4 = strassenMultiply(A22, subtractMatrix(B21, B11));
    std::vector<std::vector<int>> P5 = strassenMultiply(sumMatrix(A11, A22), sumMatrix(B11, B22));
    std::vector<std::vector<int>> P6 = strassenMultiply(subtractMatrix(A12, A22), sumMatrix(B21, B22));
    std::vector<std::vector<int>> P7 = strassenMultiply(subtractMatrix(A11, A21), sumMatrix(B11, B12));

    // Cálculo de las submatrices resultantes
    std::vector<std::vector<int>> C11 = sumMatrix(subtractMatrix(sumMatrix(P5, P4), P2), P6);
    std::vector<std::vector<int>> C12 = sumMatrix(P1, P2);
    std::vector<std::vector<int>> C21 = sumMatrix(P3, P4);
    std::vector<std::vector<int>> C22 = subtractMatrix(subtractMatrix(sumMatrix(P5, P1), P3), P7);

    // Combinación de las submatrices resultantes en la matriz de resultado
    std::vector<std::vector<int>> C(n, std::vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = C11[i][j];
            C[i][j + m] = C12[i][j];
            C[i + m][j] = C21[i][j];
            C[i + m][j + m] = C22[i][j];
        }
    }

    return C;
}

// Función para imprimir una matriz
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Definición de las matrices de entrada A y B (3x3)
    std::vector<std::vector<int>> A = { {1, 2, 3},
                                        {4, 5, 6},
                                        {7, 8, 9} };

    std::vector<std::vector<int>> B = { {9, 8, 7},
                                        {6, 5, 4},
                                        {3, 2, 1} };

    std::cout << "Matrix A:" << std::endl;
    printMatrix(A);
    std::cout << std::endl;

    std::cout << "Matrix B:" << std::endl;
    printMatrix(B);
    std::cout << std::endl;

    std::cout << "Matrix C = A * B:" << std::endl;
    std::vector<std::vector<int>> C = strassenMultiply(A, B);
    printMatrix(C);

    return 0;
}
