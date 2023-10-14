#include <stdio.h>

int main() {
    char nama[99];
    char nim[99];
    char paralel[99];
    char ttl[99];
    char alamat[99];
    char hobi[99];
    char nohp[99];

    printf("Nama                    : ");
    gets(nama);
    printf("NIM                     : ");
    gets(nim);
    printf("Kelas Paralel           : ");
    gets(paralel);
    printf("Tempat/Tanggal Lahir    : ");
    gets(ttl);
    printf("Alamat                  : ");
    gets(alamat);
    printf("Hobby                   : ");
    gets(hobi);
    printf("No. HP                  : ");
    gets(nohp);
    printf("\n");

    printf("Nama                    : %s\n", nama);
    printf("NIM                     : %s\n", nim);
    printf("Kelas Paralel           : %s\n", paralel);
    printf("Tempat/Tanggal Lahir    : %s\n", ttl);
    printf("Alamat                  : %s\n", alamat);
    printf("Hobby                   : %s\n", hobi);
    printf("No. HP                  : %s\n", nohp);

    return 0;
}