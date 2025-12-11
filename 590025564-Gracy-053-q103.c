#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int total = 0;
    for (int i = 0; i < n; i++) total += nums[i];

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            printf("Pivot index = %d", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("Pivot index = -1");
    return 0;
}