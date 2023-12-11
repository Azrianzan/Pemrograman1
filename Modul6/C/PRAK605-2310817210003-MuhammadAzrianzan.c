#include <stdio.h>

int main() {
    int ordo;
    scanf("%d", &ordo);
    int matriksA[ordo][ordo];
    int matriksB[ordo][ordo];
    int matriksAXB[ordo][ordo];
    printf("Matriks A\n");
    for (int a = 0; a < ordo; a++) {
        for (int b = 0; b < ordo; b++) {
            scanf("%d", &matriksA[a][b]);
        }
    }
    printf("Matriks B\n");
    for (int c = 0; c < ordo; c++) {
        for (int d = 0; d < ordo; d++) {
            scanf("%d", &matriksB[c][d]);
        }
    }

    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            matriksAXB[i][j] = 0;
            for (int x = 0; x < ordo; x++) {
                matriksAXB[i][j] += matriksA[i][x] * matriksB[x][j];
            }
        }
    }
    printf("Matriks AXB\n");
    for (int p = 0; p < ordo; p++) {
        for (int q = 0; q < ordo; q++) {
            printf("%d ", matriksAXB[p][q]);
        }
        printf("\n");
    }
    return 0;
}