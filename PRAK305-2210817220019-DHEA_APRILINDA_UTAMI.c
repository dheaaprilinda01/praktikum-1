#include <stdio.h>

int main()
{
    int  input, detik, menit, jam, hari;
    scanf("%d", &input);
    if (input>=86400)
    {
    hari = input / (86400);
    jam = (input % 86400/3600);
    menit = (input % 3600/60);
    detik = input % 60 ;
    printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);
    }
    else
    {
    jam = (input /3600);
    menit = (input % 3600/60);
    detik = input % 60 ;
    printf("%.2d:%.2d:%.2d", jam, menit, detik);
    }
}