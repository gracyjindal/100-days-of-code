#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // convert to lowercase for easier comparison

        if (ch >= 'a' && ch <= 'z') {  // only alphabets
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
