# Dynamic Vectors
Utilizamos gnCount para controlar cuántos elementos estamos utilizando, teniendo en cuenta que hemos asignado memoria para gnMax posiciones. La diferencia entre gnCount y gnMax representa el espacio disponible para nuevos posibles elementos. Otro problema, que está fuera del alcance de este documento, es determinar el delta utilizado para aumentar el vector cuando se produce un desbordamiento. Solo con fines prácticos, utilizaremos delta = 10.

Entre las ventajas de este enfoque, podemos destacar:
- Esta estructura es más flexible que la presentada en la sección anterior.
- El espacio de memoria asignado siempre será igual o ligeramente mayor que lo que el usuario necesita.

Entre las desventajas, podemos resaltar:
- Este enfoque aún se basa en el uso de variables globales, lo que significa que solo es posible tener un vector por programa.
- En comparación con la solución anterior, otra desventaja es el tiempo adicional necesario para gestionar la memoria (aunque los beneficios superan claramente este problema).
Esta última desventaja se ve compensada por la flexibilidad introducida por los punteros.

[![Dynamic-Vectors.png](https://i.postimg.cc/sX9Zxg67/Dynamic-Vectors.png)](https://postimg.cc/62qQ1tNp)
