#include <stdio.h>

int main()
{
int a , b , x, y;
a= 400000;
b= 350000;
x = a - (0.13 * a);
y = b - (0.21 * b);
printf("Harga sepatu A adalah 400000\n");
printf("Harga sepatu B adalah 350000\n");
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", x);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", y);
}