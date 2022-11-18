#include <stdio.h>
#include <math.h>

int main()
{
    int alas, tinggi, sisimiring;
    alas = 5;
    tinggi = 12;
    sisimiring = sqrt((alas*alas)+(tinggi*tinggi));

    printf("Diketahui :\n");
    printf("Alas = %d cm\n",alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = ?\n");
    printf("Sisi B = ?\n");
    printf("Sisi C = ?\n");
    printf("Keliling = %d cm\n", alas+tinggi+sisimiring);
    printf("Luas = %d cm",alas*tinggi/2);
}