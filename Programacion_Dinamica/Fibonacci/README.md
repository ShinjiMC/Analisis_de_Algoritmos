## Problema de Fibonacci

El problema de Fibonacci es un problema clásico de programación que consiste en encontrar el n-ésimo número de la secuencia de Fibonacci. La secuencia de Fibonacci es una serie de números en la que cada número es la suma de los dos números anteriores. Por ejemplo, la secuencia comienza con 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, etc.

### Solución utilizando programación dinámica

La solución más común para este problema es utilizar la recursión. Es decir, definir una función que calcule el n-ésimo número de la secuencia de Fibonacci en función de los dos números anteriores. Sin embargo, esta solución es ineficiente para valores grandes de n, ya que se repiten muchos cálculos.

La solución utilizando programación dinámica implica definir el problema en función de subproblemas más pequeños. En este caso, podemos definir el problema como encontrar el n-ésimo número de la secuencia de Fibonacci utilizando los dos números anteriores. Llamemos a este número F(n). Entonces, podemos definir F(n) en términos de F(n-1) y F(n-2), es decir, el (n-1)-ésimo número de la secuencia de Fibonacci y el (n-2)-ésimo número de la secuencia de Fibonacci.

Para crear tablas para almacenar los resultados de los subproblemas, podemos crear un arreglo de tamaño `n+1`, donde la posición `i` representa el i-ésimo número de la secuencia de Fibonacci. Luego, podemos utilizar esta tabla para obtener la solución óptima.

### Ventajas de la programación dinámica

La programación dinámica es una técnica útil para resolver problemas más complejos, ya que nos permite descomponer el problema en subproblemas más pequeños y utilizar los resultados de estos subproblemas para obtener la solución óptima. En este caso, la definición de F(n) en términos de F(n-1) y F(n-2) es un ejemplo de cómo podemos utilizar la solución de subproblemas para resolver el problema general. Además, la creación de una tabla para almacenar los resultados de los subproblemas nos permite evitar la repetición de cálculos y mejorar la eficiencia del algoritmo.

En resumen, la programación dinámica es una técnica poderosa para resolver problemas de optimización, como el problema de Fibonacci. Al descomponer el problema en subproblemas más pequeños y utilizar los resultados de estos subproblemas para obtener la solución óptima, podemos resolver problemas más complejos de manera eficiente y efectiva. En el caso específico del problema de Fibonacci, la solución utilizando programación dinámica nos permite evitar la repetición de cálculos y mejorar la eficiencia del algoritmo. En lugar de calcular los mismos valores una y otra vez, podemos almacenarlos en una tabla y utilizarlos cuando sea necesario. Esto nos permite calcular el n-ésimo número de la secuencia de Fibonacci de manera eficiente, incluso para valores grandes de n.

### Ejemplo

[![Image.png](https://i.postimg.cc/FHvTv6n1/Image.png)](https://postimg.cc/TpkVqtxX)
