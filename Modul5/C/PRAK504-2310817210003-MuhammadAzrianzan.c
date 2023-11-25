#include <stdio.h>

int reverse(int a) {
    //Konversi dari variabel int a menjadi array int
    int temp = a;
    int digitCount = 0;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }
    int arr[digitCount];
    int index = digitCount - 1;
    while (a != 0) {
        arr[index] = a % 10;
        a /= 10;
        index--;
    }
    //Mereverse array int
    int arrSize = sizeof arr / sizeof arr[0];
    int y;
    int ukuran = 0;
    for (int x = 0; x < arrSize; x++) {
        if (arr[x] != 0) {
            ukuran = ukuran + 1;
        }
    }
    int arrRev[ukuran];
    int j = 0;
    for (int i = arrSize - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            continue;
        }
        else {
            arrRev[j] = arr[i];
            j++;
        }
    }
    //Konversi array int yang telah direverse menjadi variabel int
    int arrRevLen = sizeof arrRev / sizeof arrRev[0];
    int result = 0;
    for (int z = 0; z < arrRevLen; z++) {
        result = result * 10 + arrRev[z];
    }
    //Mengembalikan variabel int yang telah direverse
    return result;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d", reverse(C));
    return 0;
}