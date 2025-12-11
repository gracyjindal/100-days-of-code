#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }

    printf("First occurrence = %d, Last occurrence = %d", first, last);
    return 0;
}
