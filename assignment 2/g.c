#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the value of N

    int A[N];  // Declare an array of size N

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int X, V;
    scanf("%d %d", &X, &V);  // Read the values of X and V

    // Change the value at the X'th index to V
    A[X] = V;

    // Output the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
