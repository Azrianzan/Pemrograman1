#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d %d", b, a);
    }
    else if (a < b) {
        printf("%d %d", a, b);
    }
    return 0;
}