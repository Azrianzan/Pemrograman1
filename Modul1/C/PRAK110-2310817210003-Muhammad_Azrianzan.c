#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab :\n");

    int sisiB = sqrt(pow(alas, 2) + pow(tinggi, 2));

    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", alas);
    int keliling = alas + tinggi + sisiB;
    printf("Keliling = %d cm\n", keliling);
    int luas = 0.5 * alas * tinggi;
    printf("Luas = %d cm", luas);
    return 0;
}