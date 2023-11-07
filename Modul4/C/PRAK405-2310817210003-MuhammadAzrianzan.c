#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int totalHasil=0, hasilBaris=0;

    for (int i = 1; i < n+1; i++) {
        for (int j = i; j > 0; j--) {
            if (j > 1) {
                int hasilTunggal = (j * m);
                hasilBaris = hasilBaris + hasilTunggal;
                printf("(%d*%d) + ", j, m);
            }
            else if (j == 1) {
                int hasilTerakhir = (j * m);
                hasilBaris = hasilBaris + hasilTerakhir;
                printf("(%d*%d) = %d\n", j, m, hasilBaris);
                totalHasil = totalHasil + hasilBaris;
                hasilBaris = 0;
            }
        }
    }
    printf("%d", totalHasil);
    return 0;
}