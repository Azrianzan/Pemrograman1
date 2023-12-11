#include <stdio.h>

int main() {
    char array1[100];
    char array2[100];
    int count1 = 0;
    int count2 = 0;
    scanf("%[^\n]%*c", array1);
    scanf("%[^\n]%*c", array2);
    for (int i = 0; i < 100; i++) {
        if (array1[i] == '\0') {
            break;
        }
        else {
            count1++;
        }
    }
    for (int j = 0; j < 100; j++) {
        if (array2[j] == '\0') {
            break;
        }
        else {
            count2++;
        }
    }
    
    if (count1 == count2) {
        char pesan1[count1];
        char pesan2[count2];
        int bintang = 0;
        int pagar = 0;
        for (int x = 0; x < count1; x++) {
            pesan1[x] = array1[x];
            pesan2[x] = array2[x];
        }
        for (int y = 0; y < count1; y++) {
            if (pesan1[y] == ' ' && pesan2[y] == ' ') {
                printf(" ");
            }
            else if (pesan1[y] == pesan2[y]) {
                printf("*");
                bintang++;
            }
            else if (pesan1[y] != pesan2[y]) {
                printf("#");
                pagar++;
            }
        }
        printf("\n");
        printf("* = %d\n", bintang);
        printf("# = %d\n", pagar);
        if (bintang >= pagar) {
            printf("Pesan Asli");
        }
        else {
            printf("Pesan Palsu");
        }
    }
    else {
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    return 0;
}