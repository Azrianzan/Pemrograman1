#include <stdio.h>
#include <math.h>

int main() {
    int A;
    int B;
    printf("");
    scanf("%d %d", &A, &B);

    int alas = sqrt(pow(B, 2) - pow(A, 2));
    int tinggi = A;
    int keliling = A + B + alas;
    int luas = 0.5 * alas * tinggi;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}