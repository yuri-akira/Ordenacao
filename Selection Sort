void SelectionSort(int vetor[],int tam)
{   
    int pMenorValor, aux, i, j;

    for( i = 0; i < tam; i++)
    {   
        pMenorValor = 1;
        for( j = i + 1; j < tam; j++)
        {
            if(vetor[j] < vetor[pMenorValor])
            {
                pMenorValor = j;
            }
        }
        if(pMenorValor != 1)
        {
            aux = vetor[i];
            vetor[i] = vetor[pMenorValor];
            vetor[pMenorValor] = aux;
        }
    }
}
