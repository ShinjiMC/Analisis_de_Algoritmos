## Problema del cambio de monedas

El problema del cambio de monedas consiste en encontrar el número mínimo de monedas necesarias para obtener una cantidad determinada, dadas `n` monedas con valores `c_i`. Por ejemplo, si tenemos monedas de 1, 5 y 10, y queremos obtener 12, la solución óptima sería utilizar una moneda de 10 y dos monedas de 1, para un total de 3 monedas.

### Solución utilizando programación dinámica

La solución utilizando programación dinámica implica definir el problema en función de subproblemas más pequeños. En este caso, podemos definir el problema como encontrar el número mínimo de monedas necesarias para obtener una cantidad `P`, utilizando solo las primeras `i` monedas. Llamemos a esta cantidad `M(i, P)`. Entonces, podemos definir `M(i, P)` en términos de `M(i-1, P)` y `M(i, P-c_i)`, es decir, el número mínimo de monedas necesarias para obtener `P` utilizando solo las primeras `i-1` monedas, y el número mínimo de monedas necesarias para obtener `P-c_i` utilizando todas las primeras `i` monedas.

Para crear tablas para almacenar los resultados de los subproblemas, podemos crear una matriz de tamaño `(n+1) x (P+1)`, donde la fila `i` y la columna `j` representan el número mínimo de monedas necesarias para obtener `j` utilizando solo las primeras `i` monedas. Luego, podemos utilizar esta tabla para obtener la solución óptima.

### Recomposición de la solución

Para recomponer la solución a partir de la tabla, podemos seguir un proceso similar al utilizado para crear la tabla. Comenzando en la esquina inferior derecha de la tabla, podemos seguir las flechas hacia arriba y hacia la izquierda para determinar qué monedas se utilizaron para obtener la cantidad deseada. Para implementar esta solución, podemos utilizar un bucle for anidado para llenar la tabla y otro bucle for para recomponer la solución.

La programación dinámica es una técnica útil para resolver problemas más complejos, ya que nos permite descomponer el problema en subproblemas más pequeños y utilizar los resultados de estos subproblemas para obtener la solución óptima. En este caso, la definición de `M(i, P)` en términos de `M(i-1, P)` y `M(i, P-c_i)` es un ejemplo de cómo podemos utilizar la solución de subproblemas para resolver el problema general. Además, la creación de una tabla para almacenar los resultados de los subproblemas nos permite evitar la repetición de cálculos y mejorar la eficiencia del algoritmo.

En resumen, la programación dinámica es una técnica poderosa para resolver problemas de optimización, como el problema del cambio de monedas. Al descomponer el problema en subproblemas más pequeños y utilizar los resultados de estos subproblemas para obtener la solución óptima, podemos resolver problemas más complejos de manera eficiente y efectiva.

### Ejemplo

[![Image.png](https://i.postimg.cc/GpmfGNR9/Image.png)](https://postimg.cc/BjRNGmXG)
