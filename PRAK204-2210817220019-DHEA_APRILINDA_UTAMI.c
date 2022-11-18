#include <stdio.h>

int main()
{
    float tinggi, jarijari, volume, luas, keliling;
    scanf("%f", &jarijari);
    scanf("%f", &tinggi);
    volume = 22*jarijari*jarijari*tinggi/7;
    luas = 2*22*jarijari*(jarijari+tinggi)/7;
    keliling = 2*22*jarijari/7;
    printf("Volume = %1.2f\n",volume);
    printf("Luas = %1.2f\n", luas);
    printf("Keliling = %1.2f\n", keliling);
}