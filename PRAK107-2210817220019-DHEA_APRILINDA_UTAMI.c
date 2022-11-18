#include <stdio.h>

int main()
{
    int a, b, c, hargapagarpermeter, keliling;
    a = 4;
    b = 5;
    c = 7;
    hargapagarpermeter = 85000;
    keliling = a + b + c;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b ,c);
    printf("Keliling Tanah Pak Dengklek adalah %d", keliling);
    printf("Harga pagar Per Meter adalah %d\n", hargapagarpermeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dangklek adalah : Rp%d", keliling*hargapagarpermeter);
}