#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Masukan nilai pertama :");
    scanf("%f",&a);
    printf("Masukan nilai kedua   :");
    scanf("%f",&b);
    c = a + b;
    printf("hasil dari jumlah nilai pertama \"%1.2f\" dan nilai kedua \"%1.2f\" adalah \"%1.2f\"", a, b, c);
}