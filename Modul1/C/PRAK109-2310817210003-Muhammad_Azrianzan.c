#include <stdio.h>

int main() {
    int pasukan = 958730;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    //Pahlawan ada Zilong, Ling, Baxia, Wanwan, dan Chang'e (5)
    int pahlawan = 5;
    printf("Jumlah pahlawan = %d\n", pahlawan);

    int pasukanYangDikalahkan = pasukan / pahlawan;
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukanYangDikalahkan);

    return 0;
}