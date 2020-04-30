# Algoritmos de Ordenação

#### Os algoritmos de ordenação são usados para ordenar conjuntos de dados, classificando-se em:
- **Ordenação interna:** onde todos os elementos a serem ordenados cabem na memória principal e qualquer registro pode ser imediatamente acessado.
- **Ordenação Externa:** onde os elementos a serem ordenados não cabem na memória principal e os registros são acessados sequencialmente ou em grandes blocos.

>*Nos algoritmos de ordenação, as medidas de complexidade relevantes são número de comparações *C(n)* entre chaves e o número de movimentações *M(n)* dos registros dos vetores. Sendo *'n'* o número de registros.*

Dentro da ordenação interna, existem os **Métodos simples** e os **Métodos eficientes**
## Métodos Simples
Os métodos simples são adequados para pequenos vetores. Possuem complexidade C(n) = O(n²), ou seja, requerem O(n²) comparações.

Algoritmos de método simples:
- [Bubble Sort](https://github.com/yuri-akira/Ordenacao/blob/master/Bubble%20Sort/BubbleSort.c)
- [Insertion Sort](https://github.com/yuri-akira/Ordenacao/blob/master/Insertion%20Sort/insertionSort.c)
- [Selection Sort](https://github.com/yuri-akira/Ordenacao/blob/master/Selection%20Sort/selectionSort.c)

## Métodos Eficientes
Os métodos eficientes requerem um número menor de comparações. São projetados para trabalhar com uma quantidade maior de dados e possuem complexidade C(n) = O(n log n).

Algoritmos de método eficiente:
- [Quick Sort]()
- [Merge Sort]()
- [Couting Sort]()
- [Heap Sort]()
- [Shell Sort]()
- [Redix Sort]()


