#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int size) {
    int i, topIndex = 0;

    for(i = 1; i < size; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];
}

int main() {
    struct Student list[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", list[i].name);

        printf("Enter roll number: ");
        scanf("%d", &list[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &list[i].marks);
    }

    struct Student topper = getTopper(list, 5);

    printf("\n\n--- Top Student Details ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
