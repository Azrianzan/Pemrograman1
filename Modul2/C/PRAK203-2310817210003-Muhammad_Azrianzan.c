#include <stdio.h>

int main() {
    float a;
    float b;
    float i;
    float j;
    float x;
    float y;
    printf("");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    
    float hasil = (a-b)*i/j-(x+y);
    printf("%.3f", hasil);

    return 0;
}