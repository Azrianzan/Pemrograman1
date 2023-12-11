#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, & n2);
    if (n1 == n2) {
        int inputan = 2 * n1;
        int myArray[inputan];
        int myArray2[inputan];
        for (int i = 0; i < inputan; i++) {
            scanf("%d", &myArray[i]);
        }
        for (int j = 0; j < n1; j++) {
            int hasil = myArray[j] * myArray[n2];
            n2 = n2 + 1;
            myArray2[j] = hasil;
        }
        for (int x = 0; x < n1; x++) {
        printf("%d ", myArray2[x]);
    }
    }
    else {
        printf("Jumlah tidak sama");
    }
    return 0;
}