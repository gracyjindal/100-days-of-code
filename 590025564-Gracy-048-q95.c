#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths differ, not rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Create temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}
