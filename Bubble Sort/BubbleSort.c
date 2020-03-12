void bubbleSort(int vetor[],int tamVetor)
{   
    int aux;
     for(int i = 0; i < tamVetor; i++)
        for(int j; j< tamVetor - 1 - i; j++)
            if(vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
}
