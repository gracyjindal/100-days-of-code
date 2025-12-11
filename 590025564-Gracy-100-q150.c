#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory
    s = (struct Student*)malloc(sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input data using pointer
    printf("Enter student name: ");
    scanf("%49s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Modify data using pointer
    s->marks += 5; // Example: add 5 marks

    // Display data using pointer
    printf("\n--- Updated Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}
