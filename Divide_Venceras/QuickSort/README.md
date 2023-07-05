# QuickSort
La ordenación rápida (quicksort) también se basa en la técnica divide y vencerás. El algoritmo sigue los siguientes pasos:

- **Dividir**: el array (i..j) es dividido usando un procedimiento Pivote, que devuelve un entero l entre (i, j), tal que:
  - A[ia] ≤ A[l] ≤ A[ja], para ia = i..l-1; ja=l+1..j.

- **Ordenar recursivamente**: se ordenan de forma recursiva los trozos (i..l-1) y (l+1..j).

- **Pequeño**: si tenemos un solo elemento, entonces ya está ordenado.

- **Combinar**: no es necesario realizar ninguna operación de combinación, ya que la ordenación rápida se basa en la partición del array en subarrays y la ordenación de cada subarray de forma independiente.

[![Quick-Sort.png](https://i.postimg.cc/YCHhBcfT/Quick-Sort.png)](https://postimg.cc/gngY3T7K)
