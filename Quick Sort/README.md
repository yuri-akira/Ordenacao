# Quick Sort
É um algoritmo **recursivo** de ordenação que utiliza duas funções em torno da ideia de **dividir para conquistar**, semelhante ao [Merge Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Merge%20Sort).
Um elemento do vetor é escolhido como **pivô** e a partir da função **particiona**, os dados são rearranjados de forma que os valores menores que o pivô são colocados antes e os maiores depois.

## Implementação em C
```
int particiona(int *V, int inicio, int final)
{
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir)
    {
        while (V[esq] <= pivo)
            esq++;
        while (V[dir] > pivo)
            dir--;
        if (esq < dir)
        {
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int final)
{
    int pivo;
    if(final > inicio)
    {
        pivo = particiona(V, inicio, final);
        quickSort(V, inicio, pivo - 1);
        quickSort(V, pivo + 1, final);
    }
}

```

## Desempenho
- **Melhor caso:** *O(n log n)*
- **Pior caso:** *O(n²)*
- **Estável**
