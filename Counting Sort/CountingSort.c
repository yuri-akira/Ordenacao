#define MAX 100

void countingSort(int *V, int N)
{
    int baldes[MAX];
    int i,j,k;
    for( i = 0; i < MAX; i++)
        baldes[i] = 0;

    for(i = 0; i < N; i++)
        baldes[V[i]]++;

    for(i = 0, j = 0;j < MAX; j++ )
        for(k = baldes[j];k > 0; k++)
            V[i++] = j;
}
