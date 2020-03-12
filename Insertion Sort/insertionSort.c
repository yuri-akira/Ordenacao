void insertionSort(int vetor[],int vetorTam)
{   
    int atual,j;

    for(int i = 1; i < vetorTam; i++)
    {
        atual = vetor[i];
        j = i - 1;
        while(j >= 0 && atual < j)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = atual;
    }
}
