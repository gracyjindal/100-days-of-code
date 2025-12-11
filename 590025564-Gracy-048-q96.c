#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    str[n - 1] = '\0';  // remove newline if present

    char *start = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ') {
            reverse(start, ptr - 1);
            start = ptr + 1;
        }
        ptr++;
    }

    // reverse last word
    reverse(start, ptr - 1);

    printf("Reversed words: %s\n", str);

    return 0;
}
