#include <stdio.h>

int findMissingElement(int A[], int N) {
    int XOR = 0;
    for (int i = 1; i <= N; i++) {
        XOR ^= i;
    }

    for (int i = 0; i < N - 1; i++) {
        XOR ^= A[i];
    }

    return XOR;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int A[N - 1];
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &A[i]);
    }

    int missingElement = findMissingElement(A, N);
    printf("The missing element is: %d\n", missingElement);

    return 0;
}
