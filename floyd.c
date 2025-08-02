#include <stdio.h>
#include <stdlib.h>
#define INF 99999

void printMatrix(int V, int matrix[V][V]) {
    printf("Matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (matrix[i][j] == INF) {
                printf("INF\t");
            } else {
                printf("%d\t", matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

void floyd(int V, int graph[V][V]) {
    int A[V][V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            A[i][j] = graph[i][j];
        }
    }

    printf("Initial Matrix:\n");
    printMatrix(V, A);

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (A[i][j] > A[i][k] + A[k][j]) {
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
        printf("Matrix after iteration %d:\n", k + 1);
        printMatrix(V, A);
    }

    printf("Final Matrix:\n");
    printMatrix(V, A);
}

int main() {
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    int graph[V][V];
    printf("Enter the adjacency matrix for the graph:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    floyd(V, graph);
    return 0;
}
