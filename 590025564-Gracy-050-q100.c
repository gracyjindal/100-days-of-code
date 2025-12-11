#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("All substrings:\n");

    // Generate all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
