# Problema de la mochila 0/1 con Árbol Binario

El Problema de la mochila 0/1 es un problema de optimización combinatoria que consiste en seleccionar un subconjunto de objetos de una lista, cada uno con un peso y un valor, de tal manera que se maximice el valor total sin superar una capacidad máxima de peso. Una forma de resolver este problema es mediante el uso de backtracking y la representación de la solución con un árbol binario.

En esta representación, cada nivel del árbol corresponde a un objeto de la lista y cada nodo del nivel puede tener dos hijos: uno que representa la selección del objeto y otro que representa la no selección. La solución se encuentra en las hojas del árbol, donde se han seleccionado o no todos los objetos.

El algoritmo de backtracking consiste en generar todas las posibles soluciones del árbol, descartando aquellas que superen la capacidad máxima de peso. En cada nivel del árbol, se comprueba si se puede añadir el objeto actual a la mochila y se llama a la función recursivamente con el siguiente nivel del árbol, tanto si se añade como si no se añade el objeto. Cuando se llega al último nivel del árbol, se comprueba si la solución actual es mejor que la mejor solución encontrada hasta el momento.

## Pseudocódigo

El pseudocódigo del algoritmo de backtracking para el Problema de la mochila 0/1 con árbol binario incluye una función principal llamada `Mochila01Backtracking` y una función auxiliar llamada `Generar`. La función `Mochila01Backtracking` inicializa las variables necesarias y llama a la función `Generar` para generar todas las posibles soluciones. La función `Generar` es la encargada de generar el árbol de soluciones y realizar el proceso de backtracking.

## Ejemplo

[![Image.png](https://i.postimg.cc/BbJgWhfb/Image.png)](https://postimg.cc/2bXvh76N)
