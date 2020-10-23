# Quick Sort
É um algoritmo **recursivo** de ordenação que utiliza duas funções em torno da ideia de **dividir para conquistar**, semelhante ao [Merge Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Merge%20Sort).
Um elemento do vetor é escolhido como **pivô** e a partir da função **particiona**, os dados são rearranjados de forma que os valores menores que o pivô são colocados antes e os maiores depois. Após isto, o pivô estará em sua posição ordenada e haverá duas sub listas não ordenadas. Recursivamente é ordenado as sub listas dos elementos menores e a dos elementos maiores.

![](https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

> A barra vermelha representa o pivô. 

## Quick Sort vs Merge Sort
Quick sort funciona localmente e seu tempo de execução no **pior caso** é tão ruim quanto o dos algoritmos de ordenação de [método simples](https://github.com/yuri-akira/Ordenacao#métodos-simples) ( O(n²) ). No entanto, seu tempo de execução médio é tão bom quanto o [Merge Sort](https://github.com/yuri-akira/Ordenacao/tree/master/Merge%20Sort) (O(n log n)).

> Então por que pensar em quicksort quando o merge sort é, pelo menos, igualmente bom?

>Porque o fator constante oculto na notação grande-Θ do quicksort é muito bom. Na prática, o **quicksort tem desempenho melhor que o merge sort.** - [Khan Academy](https://pt.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/overview-of-quicksort)


## Implementação em C/C++
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
Nesta implementação o pivô é o primeiro elemento da esquerda, no entanto há outras implementações que influenciam na escolha do pivô.
Por exemplo,uma implementação com pivô mediana de três [aqui](https://github.com/yuri-akira/Ordenacao/blob/master/Quick%20Sort/quickSortPivoMD3.c)

## Desempenho
- **Melhor caso:** *O(n log n)*
- **Pior caso:** *O(n²)*
- **Não estável**
