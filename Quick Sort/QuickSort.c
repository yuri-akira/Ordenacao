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
