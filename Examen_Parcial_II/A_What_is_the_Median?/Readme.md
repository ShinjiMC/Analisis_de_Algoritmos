# A - What is the Median?

Este proyecto resuelve el problema de calcular la mediana de un conjunto de números enteros largos en C++ 11. La mediana es el valor que divide a un conjunto en dos partes iguales. El objetivo es determinar la mediana actual de una serie de números.

## Descripción del problema

Supongamos que tenemos un conjunto de números {1, 3, 6, 2, 7}. En este caso, la mediana es 3, ya que tiene exactamente dos números a cada lado: {1, 2} y {6, 7}. Si hay un número par de valores, como {1, 3, 6, 2, 7, 8}, un solo valor no puede dividir el conjunto en dos partes iguales, por lo que consideramos el promedio de los valores intermedios, en este caso {3, 6}. Por lo tanto, la mediana sería (3+6)/2 = 4.5. En este problema, solo debemos imprimir la parte entera de la mediana, sin la parte decimal.

## Entrada y salida

El archivo de entrada consiste en una serie de enteros X (0 ≤ X < 231), y el número total de enteros N es menor que 10000. Los números pueden tener espacios delante o detrás.

Para cada entrada, debemos imprimir el valor actual de la mediana.

## Tecnologías utilizadas

- C++ 11: El código está escrito en C++ 11, aprovechando las características y mejoras de esta versión del lenguaje.
- Bibliotecas estándar de C++: Se utilizan las bibliotecas `<iostream>`, `<vector>` y `<algorithm>` para la entrada/salida y para realizar la ordenación de los números.

## Resultado

[![Image.png](https://i.postimg.cc/152LnNjn/Image.png)](https://postimg.cc/tYdr87yp)
