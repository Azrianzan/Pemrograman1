#include <stdio.h>

int main() {
    float a = 4;
    printf("Variabel a bernilai 4\n");
    float b = 8;
    printf("Variabel b bernilai 8\n");
    float c = 3;
    printf("Variabel c bernilai 3\n");

    float hasil = (a * b) / c;
    printf("Hasil kali dari a dikali b dibagi c adalah  %.6f\n", hasil);

    return 0;
}