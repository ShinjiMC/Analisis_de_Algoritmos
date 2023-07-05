# Abstract Data Types
Esta técnica solo permite reducir el costo de mantenimiento del código si necesitamos otro tipo como float, double, etc. Sin embargo, este código aún no es útil para un usuario que necesita dos (o más) vectores con diferentes tipos (por ejemplo, char, float, short, etc.) al mismo tiempo en el mismo sistema. Afortunadamente, algunos lenguajes como C++ tienen plantillas, que permiten la parametrización del tipo de elemento.

Entre las ventajas de este enfoque, tenemos:
- Esta implementación del concepto de vector es útil para tantos tipos de datos como sea necesario.
- El mantenimiento del código correspondiente al concepto de "vector" está bien ubicado. Cualquier modificación de esta implementación de la estructura de datos se realizará en una sola clase. Solo necesitamos modificar el código una vez.
- El uso de plantillas no afecta el rendimiento porque el código específico del tipo se genera cuando se compila el programa según los tipos de datos requeridos por el usuario.
Entre las desventajas, podemos destacar:
- El parámetro abstracto para una plantilla debe definirse antes de compilar el programa. No sería útil si necesitamos definir el tipo en tiempo de ejecución.

[![Abstract-Data-Types.png](https://i.postimg.cc/zDbbM51J/Abstract-Data-Types.png)](https://postimg.cc/0rvyMTQ3)
