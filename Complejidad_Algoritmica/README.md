## Análisis de Complejidad Algorítmica de Códigos

En este repositorio se encuentran siete códigos diferentes, cada uno de los cuales ha sido analizado para determinar su complejidad algorítmica.

A continuación, se presenta una breve introducción y explicación de cada código junto con su complejidad algorítmica expresada en notación O:

### Código 1

El [Código 1](Algoritmo_1.cpp) consiste en un bucle `for` que imprime los números pares hasta un valor dado N. La complejidad de este código es lineal, es decir, O(N), ya que el bucle se ejecuta N veces.

### Código 2

El [Código 2](Algoritmo_2.cpp) contiene dos bucles anidados que imprimen todas las combinaciones posibles de los elementos hasta un valor dado N. La complejidad de este código es cuadrática, es decir, O(N^2), ya que ambos bucles se ejecutan N veces.

### Código 3

El [Código 3](Algoritmo_3.cpp) consta de dos bucles independientes, cada uno de los cuales imprime los números pares e impares hasta un valor dado N. La complejidad de este código es lineal, es decir, O(N), ya que ambos bucles se ejecutan N veces.

### Código 4

El [Código 4](Algoritmo_4.cpp) presenta dos bucles anidados que imprimen todas las combinaciones posibles de los elementos de dos vectores A y B. La complejidad de este código es proporcional al producto del tamaño de los vectores A y B, es decir, O(A.size() * B.size()).

### Código 5

El [Código 5](Algoritmo_5.cpp) muestra un bucle `while` que imprime los números hasta un valor dado N, duplicando el valor en cada iteración. La complejidad de este código es logarítmica, es decir, O(log N), ya que el número de iteraciones requeridas depende del logaritmo en base 2 de N.

### Código 6

El [Código 6](Algoritmo_6.cpp) consta de un bucle `for` y un bucle `while` anidado dentro de él. Ambos bucles se ejecutan hasta un valor dado N. La complejidad de este código es O(N * log N), ya que el bucle `for` se ejecuta N veces y el bucle `while` tiene una complejidad logarítmica.

### Código 7

El [Código 7](Algoritmo_7.cpp) presenta dos condiciones `if` que verifican si un número N es par o impar. La complejidad de este código es constante, es decir, O(1), ya que no hay bucles y las condiciones se evalúan una vez.

En resumen, los códigos analizados en este repositorio tienen diferentes complejidades algorítmicas, desde lineal hasta cuadrática y logarítmica. El conocimiento de la complejidad algorítmica es fundamental para entender el rendimiento y la eficiencia de un algoritmo en función del tamaño de entrada.
