#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b*b - 4*a*c;  // discriminant

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    } 
    else if (d == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same: %.2f and %.2f\n", root1, root2);
    } 
    else {
        printf("Roots are complex.\n");
    }

    return 0;
}
