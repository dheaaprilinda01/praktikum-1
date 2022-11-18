#include <stdio.h>

int main()
{
    char nama[100], nim[15], kelas[2], ttl[50], alamat[10], hobby[50], hp[15];
    
    printf("NAMA                 : ");
    gets(nama);
    printf("NIM                  : ");
    gets(nim);
    printf("Kelas Pararel        : ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir : ");
    gets(ttl);
    printf("Alamat               : ");
    gets(alamat);
    printf("Hobbi                : ");
    gets(hobby);
    printf("No.Hp                : ");
    gets(hp);
   return(0);
}
