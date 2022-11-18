#include <stdio.h>

int main()
{
    int bil;
    scanf("%d", &bil);
    if (bil>0 && bil<10)
    {
        printf("satuan");
    }
    else if (bil==0)
    {
        printf("Nol");
    }
    else if (bil>=10 && bil<20)
    {
        printf("Belasan");
    }
    else if (bil>=20 && bil<100)
    {
        printf("Puluhan");
    }
    else if (bil>=100)
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}