#include <stdio.h>

int main() {
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan >= 0 && bilangan < 100)
    {
        if (bilangan == 0)
        {
            printf("Nol\n");
        }
        else if (bilangan > 0 && bilangan < 10)
        {
            printf("Satuan\n");
        }
        else if (bilangan > 10 && bilangan < 20)
        {
            printf("Belasan\n");
        }
        else if (bilangan == 10 || bilangan >= 20)
        {
            printf("Puluhan\n");
        }
    }
    else
    {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    
    return 0;
}