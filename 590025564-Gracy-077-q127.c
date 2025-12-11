#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    // Open input file
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character from input and convert to uppercase
    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    // Close both files
    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}
