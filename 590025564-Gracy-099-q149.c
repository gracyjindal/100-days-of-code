#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*)malloc(sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input
    printf("Enter student name: ");
    scanf("%49s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Output
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
