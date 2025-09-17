#include <stdio.h>

int main() {
    float y;
    scanf("%f", &y);

    if (y > 10) {
        printf("Big\n");
    } else if (y < 10) {
        printf("Small\n");
    } else {
        printf("Equal to 10\n");
    }

    return 0;
}
