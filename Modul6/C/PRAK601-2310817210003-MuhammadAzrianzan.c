#include <stdio.h>

int main() {
    int baris, kolom;
    int index = 0;
    scanf("%d %d", &baris, &kolom);
    int ukuran = baris * kolom;
    int myarr[ukuran];
    for (int j = 0; j < ukuran; j++) {
        scanf("%d", &myarr[j]);
    }

    for (int i = 0; i < baris; i++) {
        for (int x = 0; x < kolom; x++) {
            printf("%d ", myarr[index]);
            index++;
        }
        printf("\n");
    }
        
    return 0;
}