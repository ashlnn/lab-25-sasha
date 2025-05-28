#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of arrays: ");
    scanf("%d", &N);

    int A[N], B[N];

    printf("Enter elements of array A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter elements of array B:\n");
    for (int i = 0; i < N; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    int sumA = 0, sumB = 0;
    for (int i = 0; i < N; i++) {
        sumA += A[i];
        sumB += B[i];
    }

    printf("\nArray with the smaller sum:\n");
    if (sumA <= sumB) {
        printf("Array A (sum = %d): ", sumA);
        for (int i = 0; i < N; i++) {
            printf("%d ", A[i]);
        }
    } else {
        printf("Array B (sum = %d): ", sumB);
        for (int i = 0; i < N; i++) {
            printf("%d ", B[i]);
        }
    }

    printf("\n");

    return 0;
}
