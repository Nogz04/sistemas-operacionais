// 1 – Desenvolva um algoritmo multithreading para efetuar a soma de duas matrizes de ordem NxM. 

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4  // Número de linhas
#define M 4  // Número de colunas

// Matrizes globais
int A[N][M], B[N][M], C[N][M];

// Estrutura para passar parâmetros para as threads
typedef struct {
    int linha;
} ThreadData;

// Função que soma as linhas das matrizes
void* soma_linha(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int i = data->linha;

    for (int j = 0; j < M; j++) {
        C[i][j] = A[i][j] + B[i][j];  // Soma elemento por elemento
    }

    pthread_exit(NULL);  // Finaliza a execução da thread
}

// Função para gerar uma matriz aleatória
void gerar_matriz_aleatoria(int matriz[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] = rand() % 10;  // Gera números aleatórios entre 0 e 9
        }
    }
}

// Função para imprimir uma matriz
void imprimir_matriz(int matriz[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Gerar matrizes A e B aleatórias
    printf("Matriz A:\n");
    gerar_matriz_aleatoria(A);
    imprimir_matriz(A);

    printf("\nMatriz B:\n");
    gerar_matriz_aleatoria(B);
    imprimir_matriz(B);

    // Criação das threads
    pthread_t threads[N];  // Um thread para cada linha
    ThreadData data[N];    // Estrutura para armazenar o índice da linha

    // Criando uma thread para cada linha
    for (int i = 0; i < N; i++) {
        data[i].linha = i;
        if (pthread_create(&threads[i], NULL, soma_linha, (void*)&data[i]) != 0) {
            perror("Falha ao criar a thread");
            return 1;
        }
    }

    // Aguardando todas as threads terminarem
    for (int i = 0; i < N; i++) {
        pthread_join(threads[i], NULL);
    }

    // Imprimindo a matriz resultado
    printf("\nMatriz C (resultado da soma):\n");
    imprimir_matriz(C);

    return 0;
}
