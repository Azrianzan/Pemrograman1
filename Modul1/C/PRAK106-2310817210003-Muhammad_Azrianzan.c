#include <stdio.h>

int main() {
    int a = 4;
    printf("Variabel a bernilai %d\n", a);
    int b = 8;
    printf("Variabel b bernilai %d\n", b);
    int c = 3;
    printf("Variabel c bernilai %d\n", c);

    int jawaban1 = a == b;
    int jawaban2 = b > c;
    int jawaban3 = a != c;

    printf("Apakah a sama dengan b? jawabannya adalah %d\n", jawaban1);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", jawaban2);
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", jawaban3);

    return 0;
}