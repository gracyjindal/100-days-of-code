#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        int start = 6 - i;
        for (int num = start; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
