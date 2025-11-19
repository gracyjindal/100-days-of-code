#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= 5 - i; s++) {
            printf(" ");
        }
        for (int num = 6 - i; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
