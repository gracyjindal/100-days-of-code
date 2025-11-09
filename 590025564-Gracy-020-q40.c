#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];  // To hold up to 64-bit binary number

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);
    int valid = 1;

    // Check if input is valid binary
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Invalid binary number!\n");
        return 0;
    }

    // Find 1's complement
    printf("1's complement: ");
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}
