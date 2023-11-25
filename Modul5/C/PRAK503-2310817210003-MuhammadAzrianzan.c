#include <stdio.h>

int maksimal(int a, int b){
    int nilaiMaks;
    if (b > a) {
        nilaiMaks = b;
    }
    else {
        nilaiMaks = a;
    }
    return nilaiMaks;
}

int minimal(int a, int b){
    int nilaiMinim;
    if (b < a) {
        nilaiMinim = b;
    }
    else {
        nilaiMinim = a;
    }
    return nilaiMinim;
}

int main(){
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    scanf("%d", &bilangan);

    while(batas < bilangan){
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }
    printf("%d %d",maks,minim);
    return 0;
}
