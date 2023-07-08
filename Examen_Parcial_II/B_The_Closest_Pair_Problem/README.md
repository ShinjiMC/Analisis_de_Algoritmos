# B - The Closest Pair Problem

Este proyecto resuelve el problema de calcular la distancia entre los dos puntos más cercanos en un espacio bidimensional utilizando C++ 11. El objetivo es encontrar la distancia más corta entre dos puntos en un conjunto dado.

## Descripción del problema

Dado un conjunto de puntos en un espacio bidimensional, debemos encontrar la distancia entre los dos puntos más cercanos. Cada conjunto de entrada comienza con un entero N (0 ≤ N ≤ 10000), que representa el número de puntos en ese conjunto. A continuación, se presentan N líneas que contienen las coordenadas de los puntos bidimensionales. El primer número de cada par denota la coordenada X y el segundo número denota la coordenada Y. La entrada finaliza con un conjunto en el que N = 0, el cual no debe ser procesado. El valor de las coordenadas será menor que 40000 y no negativo.

## Entrada y salida

El archivo de entrada contiene varios conjuntos de entrada. Para cada conjunto, se debe producir una línea de salida que contenga un número decimal (con cuatro dígitos después del punto decimal) que representa la distancia entre los dos puntos más cercanos. Si no existen dos puntos cuya distancia sea menor a 10000, se debe imprimir la línea 'INFINITY'.

## Tecnologías utilizadas

- C++ 11: El código está escrito en C++ 11, aprovechando las características y mejoras de esta versión del lenguaje.
- Bibliotecas estándar de C++: Se utilizan las bibliotecas `<iostream>`, `<vector>`, `<algorithm>`, `<cmath>` y `<limits>` para la entrada/salida y para realizar los cálculos necesarios.

## Resultado

[![Image.png](https://i.postimg.cc/Vvc2ZyXq/Image.png)](https://postimg.cc/5YnPjR7y)
