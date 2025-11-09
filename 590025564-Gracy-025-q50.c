#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int star = 0; star < 5 - i; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
