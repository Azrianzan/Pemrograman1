#include <stdio.h>

int main() {
    int putaran = 5;
    int jarak = 14;
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);

    printf("\n");
    printf("Jawaban :\n");
    float kelilingTaman = (float)jarak / (float)putaran;
    //rumus keliling adalah 2 phi r
    float jariJariTaman = kelilingTaman / (2 * 3.14);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jariJariTaman);

    return 0;
}