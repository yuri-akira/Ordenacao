//ALGORITMO DE QUICK SORT BASEADO NO LIVRO "ALGORITMOS - TEORIA E PRÁTICA" DO CORMEM

#include <stdio.h>
#include <stdlib.h>

void swap(int* A, int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int* A, int inicio, int fim) {
    int meio = (inicio + fim) / 2;
    int a = A[inicio];
    int b = A[meio];
    int c = A[fim];
    int medianaIndice;
    if (a < b) {
        if (b < c) {
            medianaIndice = meio;
        } else {
            if (a < c) {
                medianaIndice = fim;
            } else {
                medianaIndice = inicio;
            }
        }
    } else {
        if (c < b) {
            medianaIndice = meio;
        } else {
            if (c < a) {
                medianaIndice = fim;
            } else {
                medianaIndice = inicio;
            }
        }
    }
    swap(A, medianaIndice, fim);


    int pivo = A[fim];
    int i = inicio - 1;
    int j;

    for (j = inicio; j <= fim - 1; j++) {
        if (A[j] <= pivo) {
            i = i + 1;
            swap(A, i, j);
        }
    }
    swap(A, i + 1, fim);
    return i + 1;
}

void quicksortMedianaDeTres(int* A, int inicio, int fim) {
    if (inicio < fim) {
        int q = partition(A, inicio, fim);
        quicksortMedianaDeTres(A, inicio, q - 1);
        quicksortMedianaDeTres(A, q + 1, fim);
    }
}
