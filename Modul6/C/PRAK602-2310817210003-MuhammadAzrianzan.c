#include <stdio.h>

int main() {
    int ruangan;
    scanf("%d", &ruangan);
    int array[ruangan];
    int array2[ruangan];
    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < ruangan; j++) {
        int zetsu = array[j] * (j + 1);
        array2[j] = zetsu;
    }
    
    for (int x = 0; x < ruangan; x++) {
        printf("%d ", array2[x]);
    }
    return 0;
}