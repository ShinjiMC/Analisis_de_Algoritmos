# Object Oriented Programming
Encapsulamos nuestros datos m_pVect, m_Count, m_Max y m_Delta dentro de la estructura Vector. Cuando enviamos esta estructura como el primer parámetro para todas las funciones que trabajan con nuestra estructura de datos (vector en este caso), estamos frente al mismo principio utilizado por las clases de C++. 

Entre las ventajas de este enfoque, es necesario destacar que:
- Ahora tenemos protección de datos. Solo las funciones autorizadas pueden acceder a nuestros datos.
Entre las desventajas, podemos notar que:
- Si necesitamos, en el mismo sistema, dos vectores que utilizan diferentes tipos (por ejemplo, int, double, etc.), debemos codificar dos clases diferentes con el mismo código (excepto por las declaraciones de tipo) en todas las funciones.

[![Object-Oriented-Programming.png](https://i.postimg.cc/mrmjdRWY/Object-Oriented-Programming.png)](https://postimg.cc/94qyM6M0)
