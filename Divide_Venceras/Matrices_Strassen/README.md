# Matrices Strassen

El problema de multiplicar dos matrices cuadradas A y B de tamaños nxn se puede resolver utilizando el algoritmo de Strassen, que utiliza la técnica de "divide y vencerás". El método clásico de multiplicación requiere un tiempo de ejecución de Θ(n^3), pero el algoritmo de Strassen puede lograr una mejora en el tiempo de ejecución.

## Algoritmo de Strassen

El algoritmo de Strassen divide cada matriz de tamaño nxn en cuatro submatrices de tamaño (n/2)x(n/2), denotadas como A11, A12, A21, A22, B11, B12, B21, B22, y C11, C12, C21, C22 respectivamente. Luego, resuelve 7 subproblemas recursivamente de tamaño n/2:

C11 = A11 * B11 + A12 * B21
C12 = A11 * B12 + A12 * B22
C21 = A21 * B11 + A22 * B21
C22 = A21 * B12 + A22 * B22

La combinación de los resultados de los subproblemas requiere un tiempo adicional de O(n^2). Por lo tanto, el tiempo de ejecución del algoritmo de Strassen se puede expresar como:

t(n) = 7 * t(n/2) + a * n^2

Resolviendo la ecuación de recurrencia, se obtiene que el tiempo de ejecución está en O(n^(log2(7))) ≈ O(n^2.807), lo cual representa una mejora con respecto al algoritmo clásico.

[![Strassen.png](https://i.postimg.cc/BnVbLWcY/Strassen.png)](https://postimg.cc/21nrMKth)
