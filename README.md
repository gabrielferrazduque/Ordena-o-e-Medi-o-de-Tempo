# Ordena-o-e-Medi-o-de-Tempo
Ordenação e Medição de Tempo 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


 int main() {  

    srand(time());
    int tamanhos[] = {10, 100, 1000, 10000, 100000, 1000000};
    int num_tamanhos = sizeof(tamanhos) / sizeof(tamanhos[0]);

    for (int i = 0; i < num_tamanhos; i++) {
        int n = tamanhos[i];
        int *vetor = (int *)malloc(n * sizeof(int));
        if (vetor == NULL) {
            printf("Erro de alocação de memória!\n");
            return 1;
        }

        // Bubble Sort
        preencherAleatorio(vetor, n);
        double tempoAleatorioBubble = calcularTempoExecucao(bubbleSort, vetor, n);

        preencherOrdenado(vetor, n);
        double tempoOrdenadoBubble = calcularTempoExecucao(bubbleSort, vetor, n);

        preencherOrdenadoDecrescente(vetor, n);
        double tempoDecrescenteBubble = calcularTempoExecucao(bubbleSort, vetor, n);

        printf("Bubble Sort - Tamanho: %d\n", n);
        printf("Desordenado: %.2f ms, Ordenado: %.2f ms, Decrescente: %.2f ms\n",
               tempoAleatorioBubble, tempoOrdenadoBubble, tempoDecrescenteBubble);

        // Repeat similar blocks for insertionSort and selectionSort...

        free(vetor);
    }

    return 0;
}
