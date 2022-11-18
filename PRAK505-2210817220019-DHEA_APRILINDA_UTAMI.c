#include <stdio.h>
void Biodata(int a, char *A , char *B){
    int tahun_sekarang = 2020;
    printf("perkenalkan nama saya : %s\n", A);
    printf("umur saya : %i\n", tahun_sekarang-a);
    printf("saya adalah angkatan : %i\n", tahun_sekarang);
    printf("Asal saya dari : %s", B);
}
int main() {
int tahunLahir;
char A[20], B[15];
scanf(" %d",&tahunLahir);
scanf(" %[^\n]%*c",&A);
scanf(" %[^\n]%*c",&B);
Biodata(tahunLahir, A, B);
return 0;
}