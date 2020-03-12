void bubbleSort(int vetor[],int tamVetor)
{   
    int aux;
     for(int x = 0; x < tamVetor; x++)
        for(int y = x + 1; y < tamVetor; y++)
            if(vetor[x] > vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
}