#include <stdio.h>

enum Numbers {ONE = 1, TWO, THREE = 10, FOUR};

int main() {

    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);

    return 0;
}
