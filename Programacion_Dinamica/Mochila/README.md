## Problema de la mochila 0/1

El Problema de la mochila 0/1 es un problema clásico de optimización combinatoria que se utiliza para modelar situaciones en las que se dispone de una mochila con capacidad limitada y se desea seleccionar un conjunto de objetos de entre un conjunto dado, de tal manera que se maximice el valor total de los objetos seleccionados y se respete la capacidad de la mochila.

### Formulación como problema de programación dinámica

El problema se puede formular como un problema de programación dinámica, en el que se construye una tabla que almacena los resultados de subproblemas más pequeños y se utiliza para calcular los resultados de subproblemas más grandes. La tabla se construye utilizando un bucle doble que recorre todos los elementos y capacidades posibles. Para cada elemento, se compara el valor de incluirlo en la mochila con el valor de no incluirlo, y se toma la opción que maximiza el valor total.

### Algoritmo de recomposición

Una vez que se ha construido la tabla, se puede utilizar un algoritmo de recomposición para determinar qué objetos se incluyen en la solución óptima. El algoritmo parte de la posición `V[n,M]` y retrocede a través de la tabla, analizando las decisiones que se tomaron para cada objeto `i`. Si `V[i,j]` es igual a `V[i-1,j-p[i]] + b[i]`, entonces el objeto `i` se incluye en la solución óptima. De lo contrario, el objeto `i` no se incluye en la solución óptima.

### Aplicaciones prácticas

El Problema de la mochila 0/1 tiene muchas aplicaciones prácticas, como la planificación de la producción, la gestión de inventarios, la asignación de recursos y la selección de carteras de inversión. Además, es un problema interesante desde el punto de vista teórico, ya que es NP-completo y no se conoce un algoritmo exacto que resuelva el problema en tiempo polinómico.

### Ejemplo

[![Image.png](https://i.postimg.cc/JnYjfHV1/Image.png)](https://postimg.cc/yg9J9d85)
