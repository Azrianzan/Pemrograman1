#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x=a, y=b;
    int c=a, d=b;
    int e=a, f=b;
    if (a > b) {
        for (int i = a; i >= b ; i--) {
            printf("%d %d - ", c, d);
            c = c - 1;
            d = d + 1;
            if (c == y && d == x) {
                printf("%d %d\n", c, d);
                break;
            }
        }
    }
    else if (b > a) {
        for (int j = b; j >= a; j--) {
            printf("%d %d - ", e, f);
            e = e + 1;
            f = f - 1;
            if (e == y && f == x) {
                printf("%d %d\n", e, f);
                break;
            }
        }
    }
    return 0;
}