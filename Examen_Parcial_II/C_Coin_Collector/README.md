# C- Coin Collector

Este proyecto resuelve el problema de maximizar la recolección de monedas en un país visitado por nuestro querido Sultan. En el país hay n tipos diferentes de monedas y Sultan desea recolectar la mayor cantidad posible de tipos de monedas. Si Sultan desea retirar una cantidad X de dinero del banco, el banco le entregará el dinero siguiendo el siguiente algoritmo:
```cpp
withdraw(X) {
    if (X == 0) return;
    Let Y be the highest valued coin that does not exceed X.
    Give the customer Y valued coin.
    withdraw(X-Y);
}
```

Ahora Sultan puede retirar cualquier cantidad de dinero del banco. El objetivo es maximizar el número de monedas diferentes que puede recolectar en una sola transacción.

## Descripción del problema

El archivo de entrada comienza con un entero T, el número de casos de prueba. Cada caso de prueba comienza con un entero n (1 ≤ n ≤ 1000), que representa el número de tipos diferentes de monedas. La siguiente línea contiene n enteros C1, C2, ..., Cn, que representan el valor de cada tipo de moneda. Se cumple la condición C1 < C2 < C3 < ... < Cn < 1000000000, y C1 es igual a 1.

## Entrada y salida

Para cada caso de prueba, se debe producir una línea de salida que indique el número máximo de monedas que Sultan puede recolectar en una sola transacción. Sultan puede retirar una cantidad ilimitada de dinero del banco.

## Tecnologías utilizadas

- C++ 11: El código está escrito en C++ 11, aprovechando las características y mejoras de esta versión del lenguaje.
- Bibliotecas estándar de C++: Se utilizan las bibliotecas `<iostream>`, `<vector>` y `<algorithm>` para la entrada/salida y para realizar los cálculos necesarios.

## Resultado

[![Image.png](https://i.postimg.cc/RqxCTbZy/Image.png)](https://postimg.cc/dZnKs6dj)
