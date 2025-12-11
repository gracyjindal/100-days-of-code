#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%49s", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%49s", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Check if structures are identical
    if(strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are not identical.\n");
    }

    return 0;
}
