# Insertion Sort

 É o método que percorre um vetor de elementos da esquerda para a direita e à medida que avança vai ordenando os elementos à esquerda.
 
![](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

## Implementação em C
```
void insertionSort(int *vetor,int vetorTam)
{   
    int atual,j;

    for(int i = 1; i < vetorTam; i++)
    {
        atual = vetor[i];
        j = i - 1;
        while((j >= 0) && (atual < vetor[j]))
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = atual;
    }
}
```
## Complexidade
- **Melhor caso:** *O(n)*
- **Caso médio:** *O(n²)*
- **Pior caso:** *O(n²)*
