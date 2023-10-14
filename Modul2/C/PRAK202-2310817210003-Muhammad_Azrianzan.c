#include <stdio.h>

int main() {
    float bil1;
    float bil2;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &bil1);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &bil2);

    float hasil = bil1 + bil2;
    
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", bil1, bil2, hasil);
    
    return 0;
}