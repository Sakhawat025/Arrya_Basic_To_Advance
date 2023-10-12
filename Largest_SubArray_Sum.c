#include <stdio.h>

int maxSubArraySum(int arr[], int N) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < N; i++) {
        current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }

    return max_sum;
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, N);
    printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);

    return 0;
}

