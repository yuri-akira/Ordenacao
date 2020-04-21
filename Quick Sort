void quick_sort(int *vetor, int inicio, int fim)
{
    int pivo, esq, dir, meio, aux;

    esq = inicio;
    dir = fim;
    meio =  (int) ((esq + dir) / 2);
    pivo = vetor[meio];

    while(dir > esq)
    {
        while(vetor[esq] < pivo)
            esq = esq + 1;

        while(vetor[dir] > pivo)
            dir = dir - 1;
        
        if(esq <= dir)
        {
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
            esq = esq + 1;
            dir = dir - 1;
        }
    }
    if(inicio < dir)
        quick_sort(vetor, inicio, dir);   
    if(esq < fim)
         quick_sort(vetor, esq, fim);
}
