#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n;

    struct Student s;

    // ----- Writing to the file -----
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("How many student records do you want to store? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write to file
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nRecords successfully written to students.txt\n\n");

    // ----- Reading from the file -----
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Reading records from file:\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
