# Modular Programming
Al utilizar una estructura como Vector para cada vector existente en nuestro sistema, solo necesitamos enviar el puntero de la estructura a la función. Esta técnica también nos permite acceder a mpVect, mCount y mMax a través de un solo parámetro adicional (un puntero único a la estructura).
Entre las ventajas de este enfoque, tenemos:
- Es posible tener más de un vector por programa, definiendo variables locales que se pasarán a las funciones.
- Además de la flexibilidad, no necesitamos un número variable de parámetros adicionales. Esto es importante porque reduce el mantenimiento.

[![Modular-Programming.png](https://i.postimg.cc/4d6PbZdQ/Modular-Programming.png)](https://postimg.cc/62QCtkC8)
