#include <stdio.h>

int main()
{
    float a, b, i, j, x, y, jumlah, hasil, dibagi;
    scanf("%f %f %f %f %f %f",&a, &b, &i, &j, &x, &y );
    jumlah = ((a - b) * i / j) - x - y;
    printf("%1.3f", jumlah);
 return(0);
}