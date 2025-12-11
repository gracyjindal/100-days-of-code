#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';

            if (freq[index] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
            freq[index]++;
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
