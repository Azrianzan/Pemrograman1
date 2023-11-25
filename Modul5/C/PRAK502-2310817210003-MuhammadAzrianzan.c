#include <stdio.h>
#include <math.h>

int mutlak(int nilai){
    if (nilai < 0) {
        int nilaiMutlak = -(nilai);
        return nilaiMutlak;
    }
    else {
        return nilai;
    }
}

int hitung(int nilai1, int nilai2){
    int hasilHitung = nilai1 - nilai2;
    return mutlak(hasilHitung);
}

int main() {
    int a,b,c,d, Hasil;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    Hasil = hitung(a,b) + hitung(c,d);
    printf("%d",mutlak(Hasil));
    return 0;
}