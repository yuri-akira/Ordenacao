# Merge Sort

É um algoritmo **recursivo** de ordenação que utiliza como ideia o método **dividir para conquistar** ,dividindo de forma recursiva o conjunto de dados até que cada subconjunto possua apenas 1 elemento, para que depois combine os subconjuntos em pares de forma a obter um subconjunto maior e ordenado até que exista apenas um conjunto. 

![](https://upload.wikimedia.org/wikipedia/commons/e/e6/Merge_sort_algorithm_diagram.svg)

# Implementação em C

**Necessita da biblioteca math.h além das padrões, para que a função floor funcione**
```
void mergeSort(int *vetor, int comeco, int fim)
{
     if (comeco < fim) {
         int meio = floor((fim+comeco)/2); //função floor arredonda para baixo
         mergeSort(vetor, comeco, meio); //chama função para primeira metade
         mergeSort(vetor, meio+1, fim); //chama função para segunda metade
         merge(vetor, comeco, meio, fim); //combina as metades de forma ordenada
     }
 }

```
> Como a função mergeSort chama a função merge, a função merge deve ser declarada antes da mergeSort.No entanto, apenas para melhor entendimento a ordem foi alterada.
```
void merge(int *vetor, int comeco, int meio, int fim)
{
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim)
    {
        if(vetor[com1] < vetor[com2])
        {
              vetAux[comAux] = vetor[com1];
              com1++;
        } else
        {
             vetAux[comAux] = vetor[com2];
             com2++;
        }
         comAux++;
     }

     while(com1 <= meio)
    {
         vetAux[comAux] = vetor[com1];
         comAux++;
         com1++;
    }

     while(com2 <= fim)
    {
         vetAux[comAux] = vetor[com2];
         comAux++;
         com2++;
     }
     for(comAux = comeco; comAux <= fim; comAux++)
         vetor[comAux] = vetAux[comAux-comeco];
     free(vetAux);
}
```

### Chamando Merge Sort na funçao principal
É importante ressaltar que diferente das outras formas de ordenação, o Merge Sort exige três parâmetro: o vetor, o inicio do vetor (0) e a posição final do vetor ( TAM - 1 ).
```
    void main()
    {
      /* declaração de variaveis e leitura de dados */
       mergeSort(vetor,0,TAM - 1);
    }
```
## Desempenho
- **Melhor caso:** *O(n log n)*
- **Caso médio:** *O(n log n)*
- **Pior caso:** *O(n log n)*
- **Estável**
