void merge(int vetor[],int indiceE, int meio, int indiceD)
{   
    int tam1 = meio - indiceE + 1;
    int tam2 = indiceD - meio; 
    int vetorE[tam1], vetorD[tam2];
    int i,j,k;

    for( i = 0; i < tam1; i++)
        vetorE[i] = vetor[indiceE+1];

    for( j = 0; j < tam1; j++)
        vetorD[j] = vetor[meio+1+j];
    
    i = 0;
    j = 0;
    k = 0;

    while(i < tam1 && j < tam2)
    {
        if(vetorE[i] <= vetorD[j])
        {
            vetor[k] = vetorE[i];
            i++;
        }else
            {
                vetor[k] = vetorD[j];
                j++;
            }
        k++;
    }

    while(i < tam1)
    {
        vetor[k] = vetorE[i];
        i++;
        k++;
    }

    while(i < tam2)
    {
        vetor[k] = vetorD[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int indiceE, int indiceD)
{
    if(indiceE < indiceD)
    {
        int meio = indiceE + (indiceD - indiceE)/2;
        mergeSort(vetor,indiceE,meio);
        mergeSort(vetor,meio+1,indiceD);
        merge(vetor,indiceE,meio,indiceD); // une os dois arrays
    }
}
