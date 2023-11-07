#include <stdio.h>

int main() {
    while (1) {
        int pilihan;
        float nilaiPertama, nilaiKedua, hasil;
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        if (pilihan == 5) {
            char namaAnda[] = "Muhammad Azrianzan";
            printf("Terimakasih telah menggunakan kalkulator %s\n", namaAnda);
            printf("\n");
            break;
        }
        else if (pilihan == 1) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilaiKedua);
            hasil = nilaiPertama + nilaiKedua;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            printf("\n");
        }
        else if (pilihan == 2) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilaiKedua);
            hasil = nilaiPertama - nilaiKedua;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            printf("\n");
        }
        else if (pilihan == 3) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilaiKedua);
            hasil = nilaiPertama * nilaiKedua;
            printf("Hasil pengkalian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            printf("\n");
        }
        else if (pilihan == 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilaiKedua);
            hasil = nilaiPertama / nilaiKedua;
            printf("Hasil penmbagian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            printf("\n");
        }
        else {
            printf("Input anda salah, silahkan coba lagi\n");
            printf("\n");
        }   
    }
    return 0;
}