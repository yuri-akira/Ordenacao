# Algoritmos de Ordenação

#### Os algoritmos de ordenação são usados para ordenar conjuntos de dados, classificando-se em:
- **Ordenação interna:** onde todos os elementos a serem ordenados cabem na memória principal e qualquer registro pode ser imediatamente acessado.
- **Ordenação Externa:** onde os elementos a serem ordenados não cabem na memória principal e os registros são acessados sequencialmente ou em grandes blocos.

>*Nos algoritmos de ordenação, as medidas de complexidade relevantes são número de comparações *C(n)* entre chaves e o número de movimentações *M(n)* dos registros dos vetores. Sendo *'n'* o número de registros.*

Dentro da **ordenação interna** , existem os **Métodos simples** e os **Métodos eficientes**
## Métodos Simples
Os métodos simples são adequados para **pequenos vetores** . Possuem complexidade C(n) = O(n²), ou seja, requerem O(n²) comparações.

Algoritmos de método simples:
- [Bubble Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Bubble%20Sort)
- [Insertion Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Insertion%20Sort)
- [Selection Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Selection%20Sort)

## Métodos Eficientes
Os métodos eficientes requerem um número menor de comparações. São projetados para trabalhar com uma quantidade maior de dados e possuem complexidade C(n) = O(n log n).

Algoritmos de método eficiente:
- [Merge Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Merge%20Sort)
- [Quick Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Quick%20Sort)
- [Couting Sort]()
- [Heap Sort]()
- [Shell Sort]()
- [Redix Sort]()

## Ordenação estável
Um algoritmo de ordenação é considerado estável se **preserva** a ordem de **registros** com **chaves iguais**. Ou seja, se existir dois elementos iguais em um vetor, a sequência a qual estarão quando ordenados será na mesma ordem em que estavam inicialmente.
#### Exemplo
Suponha um vetor qualquer desordendo com a seguinte sequência de números (chaves) com letras associadas representando a posição inicial (registro)

 9[a] 8[b] 8[c] 7[d]

Quando ordenado, retornará:

 7[d] **8[b] 8[c]** 9[a]

Note que é estável pois 8[b] antecede 8[c], assim como em suas posições originais. Logo, um algoritmo **NÃO ESTÁVEL** retornaria:

 7[d] **8[c] 8[b]** 9[a]
 
 ### Algoritmos estáveis:
 
 - [Bubble Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Bubble%20Sort)
 - [Insertion Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Insertion%20Sort)
 - [Merge Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Merge%20Sort)
 - [Couting Sort]()
 
 ### Algoritmos não estáveis:
 - [Heap Sort]()
 - [Quick Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Quick%20Sort)
 - [Shell Sort]()
 - [Selection Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Selection%20Sort)

 
 
