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
