# Bubble Sort

É um **algoritmo de ordenação** simples, cuja ideia se baseia em percorrer o vetor diversas vezes **comparando** os elementos **em pares** e a cada passagem faz o maior elemento "flutuar" para o topo do vetor ou  o menor valor "flutuar" para o inicio do vetor, dependendo da implementação.

![](https://upload.wikimedia.org/wikipedia/commons/0/06/Bubble-sort.gif)

## Implementação em C
```
void bubble_sort(int *vetor, int TAM)
{
    int x, y, aux;
    for(x = 0; x < TAM; x++)
        for(y = x + 1; y < TAM; y++)
            if(vetor[x] > vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
}
```
Neste caso, o menor valor flutua ao ínicio a cada passagem. Iniciando a comparação sempre na posição x + 1, para que assim, não haja a necessidade de verificar o vetor inteiro a cada análise.

## Desempenho
- **Melhor caso:** *O(n)*
- **Caso médio:** *O(n²)*
- **Pior caso:** *O(n²)*
