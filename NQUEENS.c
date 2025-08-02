#include <stdio.h>
#include <stdlib.h> // Include <stdlib.h> for `abs` function

#define N 50 // Define the maximum number of queens

int x[N]; // Array to store queen positions

int placeQueen(int K, int i) {
    int j;
    for (j = 1; j <= K - 1; j++) {
        if (x[j] == i || abs(x[j] - i) == abs(j - K)) {
            return 0; // Return false
        }
    }
    return 1; // Return true
}

void Nqueens(int K, int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        if (placeQueen(K, i)) {
            x[K] = i;
            if (K == n) {
                for (j = 1; j <= n; j++) {
                    printf("%d ", x[j]); // Print queen positions
                }
                printf("\n");
            } else {
                Nqueens(K + 1, n);
            }
        }
    }
}

int main() {
    int n;
    printf("ENTER NUMBER OF QUEENS TO BE PLACED\n");
    scanf("%d", &n);
    Nqueens(1, n);
    return 0;
}
