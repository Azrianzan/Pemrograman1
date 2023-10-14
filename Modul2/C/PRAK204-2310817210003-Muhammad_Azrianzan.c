#include <stdio.h>

int main() {
    float r;
    float tinggi;
    printf("");
    scanf("%f %f", &r ,&tinggi);

    float r2 = r * r;
    float volume = 3.142857 * r2 * tinggi;
    float luas = 2 * 3.142857 * r * (r + tinggi);
    float keliling = 2 * 3.142857 * r;

    printf("Volume : %.2f\n", volume);
    printf("Luas : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);

    return 0;
}