#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerRemoveSpaces(char *str, char *cleaned) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';
}

void sort(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char s1[200], s2[200], a[200], b[200];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    toLowerRemoveSpaces(s1, a);
    toLowerRemoveSpaces(s2, b);

    sort(a);
    sort(b);

    if (strcmp(a, b) == 0)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}
