#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    FILE *fp;
    struct Employee e[3];  // Example: 3 employees
    int i;

    // Input employee details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%49s", e[i].name);
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        printf("Enter joining date (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].joining_date.day, &e[i].joining_date.month, &e[i].joining_date.year);
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if(fp == NULL) {
        printf("Unable to open file for writing.\n");
        exit(1);
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employees.dat", "rb");
    if(fp == NULL) {
        printf("Unable to open file for reading.\n");
        exit(1);
    }

    struct Employee emp;
    printf("\n--- Employee Details from File ---\n");
    while(fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Joining Date: %02d-%02d-%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    }

    fclose(fp);
    return 0;
}
