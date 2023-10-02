#include <stdio.h>

int main() {
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);

    int keliling = sisi1 + sisi2 + sisi3;
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);

    int harga = 85000;
    printf("Harga tanah Per Meter adalah %d\n", harga);

    printf("Jawaban :\n");
    int biaya = keliling * harga;
    printf("Biaya yang diperlukan Pak Dengklek adalah %d\n", biaya);

    return 0;
}