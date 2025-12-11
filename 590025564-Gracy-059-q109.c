#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    int arr[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSum = 0;
    for (int i = 0; i < k; i++) maxSum += arr[i];

    int windowSum = maxSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum subarray sum = %d", maxSum);
    return 0;