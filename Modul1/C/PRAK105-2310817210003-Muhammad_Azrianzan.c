#include <stdio.h>

int main() {
    int a = 9;
    printf("Variabel a bernilai %d\n", a);
    int b = 5;
    printf("Variabel b bernilai %d\n", b);
    int x = 8;
    printf("Variabel x bernilai %d\n", x);
    int y = 8;
    printf("Variabel y bernilai %d\n", y);

    int sisaBagi1 = a % b;
    int sisaBagi2 = x % y;
    int totalSisaBagi = sisaBagi1 + sisaBagi2;

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", totalSisaBagi);

    return 0;
}