#include <stdio.h>

int main()
{
    int input;
    float x,y, hasil;
    

    do{
    printf("Pilih Program\n");
    printf("1.Penjumlahan\n");
    printf("2.Pengurangan\n");
    printf("3.Perkalian\n");
    printf("4.Pembagian\n");
    printf("5.Exit\n");
    printf("masukkan nilai : ");
    scanf("%d", &input);
    if (input < 5){
        printf("masukkan nilai pertama : ");
        scanf("%f", &x);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &y);
    }
    if (input == 1){
        hasil = x+y;
        printf("hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", x, y, hasil);
    }
     if (input == 2){
        hasil = x-y;
        printf("hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n",x, y, hasil);
    }
     if (input == 3){
        hasil = x*y;
        printf("hasil perkalian antara %.2f dengan %.2f adalah %.2f\n",x, y, hasil);
    }
      if (input == 4){
        hasil = x/y;
        printf("hasil pembagian antara %.2f dengan %.2f adalah %.2f\n",x, y, hasil);
    }   
     if (input > 5){
        printf("input anda salah, silahkan coba lagi\n");
    }
    }while (input != 5);
    printf("terimakasih, telah mengunakan kalkulator Dhea");

}