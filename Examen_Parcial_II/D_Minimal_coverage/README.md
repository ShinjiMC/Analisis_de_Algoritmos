# D - Minimal Coverage

Este proyecto resuelve el problema de encontrar la cantidad mínima de segmentos de línea necesarios para cubrir completamente un segmento dado [0, M] en el eje X. Los segmentos de línea están definidos por sus coordenadas [Li, Ri].

## Descripción del problema

El archivo de entrada comienza con un entero que representa el número de casos de prueba. Cada caso de prueba consiste en un entero M (1 ≤ M ≤ 5000), seguido de pares "Li Ri" en líneas separadas. Los valores de |Li| y |Ri| están en el rango de ≤ 50000 y hay un máximo de 100000 pares en cada caso de prueba. Cada caso de prueba se termina con el par "0 0". Se debe imprimir una línea en la salida que indique el número mínimo de segmentos de línea necesarios para cubrir el segmento [0, M]. A continuación, se deben imprimir las coordenadas de los segmentos ordenados por su extremo izquierdo (Li) en el mismo formato que en la entrada. No se debe imprimir el par "0 0". Si el segmento [0, M] no puede ser cubierto por los segmentos de línea dados, se debe imprimir '0'.

## Entrada y salida

La entrada se proporciona a través de un archivo de texto. El programa leerá el archivo de entrada y generará la salida correspondiente en la consola.

En la primera línea de la salida, el programa imprimirá el número mínimo de segmentos de línea necesarios para cubrir el segmento [0, M]. A continuación, se imprimirán las coordenadas de los segmentos en líneas separadas, ordenados por su extremo izquierdo (Li), en el mismo formato que en la entrada. Si el segmento [0, M] no puede ser cubierto, se imprimirá '0'.

## Tecnologías utilizadas

- C++ 11: El código está escrito en C++ 11, aprovechando las características y mejoras de esta versión del lenguaje.
- Bibliotecas estándar de C++: Se utilizan las bibliotecas `<iostream>`, `<vector>`, `<algorithm>`, `<cmath>` y `<limits>` para la entrada/salida y para realizar los cálculos necesarios.

## Resultado

[![Image.png](https://i.postimg.cc/jj2wg2Tb/Image.png)](https://postimg.cc/QBLdVXV4)
