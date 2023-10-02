#include <stdio.h>

int main() {
    float a = 9;
    printf("Variabel a bernilai 9\n");
    float b = 6;
    printf("Variabel b bernilai 6\n");
    float x = 10;
    printf("Variabel x bernilai 10\n");
    float y = 7;
    printf("Variabel y bernilai 7\n");

    float hasil = (a + b) * x / y;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}