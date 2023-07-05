# Run time data type definition
Una restricción importante cuando solo conocemos el tipo de datos en tiempo de ejecución es que no podemos utilizar plantillas ni definir nuestro vector dinámico utilizando un tipo específico. Esto nos lleva a tener nuestro miembro `m_pVect` como un puntero a `void*`. Además, al desconocer el tamaño de cada elemento, necesitamos una variable para controlarlo (`m_nElemSize`).

Otro desafío surge al tener que comparar dos elementos para insertarlos en la posición correcta. Dado que el usuario conocerá el tipo exacto en tiempo de ejecución, es posible proporcionar una función genérica para comparar dos elementos (`m_lpfnCompare`). Esta función permitirá determinar el orden relativo de los elementos y así realizar la inserción adecuada en el vector.

[![CVector.png](https://i.postimg.cc/SsTxGcbG/CVector.png)](https://postimg.cc/mz94LzDc)
