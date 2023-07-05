# Through Pointers
El código A utiliza un switch para llamar a funciones similares según el valor de "opt". En este caso, las cuatro funciones involucradas tienen el mismo prototipo, aceptan dos valores float como parámetros y devuelven un float. Sin embargo, utilizando punteros a funciones, podemos reducir la cantidad de casos en el switch y, en consecuencia, eliminarlo.

El código B muestra cómo podemos lograr esto utilizando punteros a funciones. Se define un typedef llamado "lpfnOperation" que simplifica la declaración de punteros a funciones con el prototipo requerido. Luego, se crea un vector "vpf" que contiene los punteros a las funciones deseadas. En lugar del switch completo, se utiliza la siguiente línea para llamar a la función correspondiente según el valor de "opt": c = (*vpf[opt])(a, b).

Entre las ventajas de este enfoque, podemos destacar:
- Ahora tenemos la posibilidad de seleccionar la función en tiempo de ejecución.
- Escalabilidad. Permite personalizar los punteros y, en consecuencia, ejecutar tareas específicas del usuario incluso cuando el programa ya está compilado.
- Podemos reducir drásticamente nuestro código y simplificar el mantenimiento, especialmente cuando un switch tiene muchos casos similares.
Entre las desventajas, podemos destacar:
- Mayor complejidad para los programadores. Los punteros a funciones son útiles en términos de flexibilidad, pero pueden ser peligrosos si se utilizan incorrectamente.
- Mayor complejidad para los compiladores. El uso de punteros a funciones dificulta las optimizaciones del compilador y puede resultar en un rendimiento degradado.
- Este código no evita posibles conflictos cuando el código es programado por muchos desarrolladores simultáneamente. Sin embargo, explicaremos cómo superar esta desventaja en la siguiente sección.

[![Code-A.png](https://i.postimg.cc/pTnQFfSg/Code-A.png)](https://postimg.cc/Hcd7Gyd2)
