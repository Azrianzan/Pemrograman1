#include <stdio.h>
#include <stdlib.h>

int main() {
    int detik;
    int menit = 0, jam = 0, hari = 0;
    scanf("%d", &detik);

    while (detik > 0)
    {
        if ((detik - 60) >= 0)
        {
            detik = detik - 60;
            menit = menit + 1;
            if (menit == 60)
            {
                menit = menit - 60;
                jam = jam + 1;
                if (jam == 24)
                {
                    jam = jam - 24;
                    hari = hari + 1;
                }
            }
        }
        else
        {
            int a;
            int tambahanDetik;
            a = detik - 60;
            a = abs(a);
            tambahanDetik = 60 - a;
            detik = 0;
            detik = detik + tambahanDetik;
            break;
        }
    }
    
    if (hari > 0)
    {
        printf("%d hari ", hari);
        if (jam > 9)
        {
            printf("%d:", jam);
        }
        else if (jam < 10)
        {
            printf("0%d:", jam);
        }
        if (menit > 9)
        {
            printf("%d:", menit);
        }
        else if (menit < 10)
        {
            printf("0%d:", menit);
        }
        if (detik > 9)
        {
            printf("%d", detik);
        }
        else if (detik < 10)
        {
            printf("0%d", detik);
        }
    }
    else
    {
        if (jam > 9)
        {
            printf("%d:", jam);
        }
        else if (jam < 10)
        {
            printf("0%d:", jam);
        }
        if (menit > 9)
        {
            printf("%d:", menit);
        }
        else if (menit < 10)
        {
            printf("0%d:", menit);
        }
        if (detik > 9)
        {
            printf("%d", detik);
        }
        else if (detik < 10)
        {
            printf("0%d", detik);
        }
    }
    return 0;
}