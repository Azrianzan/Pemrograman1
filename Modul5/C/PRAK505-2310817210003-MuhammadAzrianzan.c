#include <stdio.h>

void Biodata(int tahunLhr, char *nama, char *kota){
    int tahun_sekarang = 2023;
    printf("\nPerkenalkan Nama Saya: %s\n", nama);
    printf("Umur Saya: %d\n", tahun_sekarang-tahunLhr);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya dari: %s\n", kota);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}
