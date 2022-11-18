#include <stdio.h>

int main()
{
    float a, b, jarijari, phi;
    a= 5;
    b = 14;
    phi= 3.14;
    jarijari = (b/a)/(2*phi);
    printf("Diketahui:\n");
    printf("Pak Dangklek mengelilingi taman = %1.0f putaran\n", a);
    printf("Jarak tempuh Pak Dangklek = %1.0f kilometer\n", b);
    printf("\n");
    printf("Jawaban : \n");
    printf("Jari- jari taman yang dikelilingi Pak Dangklek adalah %1.2f kilometer\n", jarijari);
}