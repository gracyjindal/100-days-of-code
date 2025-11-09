#include <stdio.h>

int main() {
    float r, area, circum;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = pi * r * r;
    circum = 2 * pi * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circum);

    return 0;
}
