   
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

double calcularTempoExecucao(void (*func)(int[], int), int arr[], int n) {
    clock_t inicio = clock();
    func(arr, n);
    clock_t fim = clock();
    return ((double)(fim - inicio)) * 1000.0 / CLOCKS_PER_SEC; // Tempo em milissegundos
}


  void preencherAleatorio(int arr[], int n) {   
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000; // Gera números aleatórios de 0 a 9999
    }
}

void preencherOrdenado(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

void preencherOrdenadoDecrescente(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i - 1;
    }
}
double calcularTempoExecucao(void (*func)(int[], int), int arr[], int n) {
    clock_t inicio = clock();
    func(arr, n);
    clock_t fim = clock();
    return ((double)(fim - inicio)) * 1000.0 / CLOCKS_PER_SEC; // Tempo em milissegundos
}
return