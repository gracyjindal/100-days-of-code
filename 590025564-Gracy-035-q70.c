#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], rotated[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n; // handle large k

    for(int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", rotated[i]);

    return 0;
}
