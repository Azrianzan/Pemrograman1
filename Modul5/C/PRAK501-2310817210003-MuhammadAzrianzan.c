#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    if (a > b) {
        if (a > c) {
            if (a > d) {
                return a;
            }
            else {
                return d;
            }
        }
        else {
            if (c > d) {
                return c;
            }
            else {
                return d;
            }
        }
    }
    else {
        if (b > c) {
            if (b > d) {
                return b;
            }
        }
        else {
            if (c > d) {
                return c;
            }
            else {
                return d;
            }
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}