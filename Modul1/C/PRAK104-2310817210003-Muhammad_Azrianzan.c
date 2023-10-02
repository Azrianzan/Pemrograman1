#include <stdio.h>

int main() {
    int sepatuA = 400000;
    printf("Harga sepatu A adalah %d\n", sepatuA);
    int sepatuB = 350000;
    printf("Harga sepatu B adalah %d\n", sepatuB);
    float diskonSepatuA = 0.13;
    float diskonSepatuB = 0.21;

    int potonganHargaSepatuA = sepatuA * diskonSepatuA;
    int potonganHargaSepatuB = sepatuB * diskonSepatuB;

    int sepatuADiskon = sepatuA - potonganHargaSepatuA;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", sepatuADiskon);
    int sepatuBDiskon = sepatuB - potonganHargaSepatuB;
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", sepatuBDiskon);

    return 0;
}