#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x < 0) {
        x = -x;
    }

    printf("Absolute: %d\n", x);

    return 0;
}
