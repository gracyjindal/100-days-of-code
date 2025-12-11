#include <stdio.h>

enum Role {ADMIN = 1, USER, GUEST};

int main() {
    enum Role r;

    char *roleNames[] = {"", "ADMIN", "USER", "GUEST"};

    for(r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
