#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1) printf(", ");
    }
    return 0;
}