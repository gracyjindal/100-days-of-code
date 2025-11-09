#include <stdio.h>

int main() {
    int num;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    printf("Binary representation of %d is: ", num);

    // Find the highest bit position
    int mask = 1 << 31;  // assuming 32-bit integer
    int started = 0;     // flag to skip leading zeros

    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }

    printf("\n");
    return 0;
}
