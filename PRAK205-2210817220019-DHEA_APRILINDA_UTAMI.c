#include <stdio.h>
#include <math.h>

int main()
{
    int  tinggi, miring, alas;
    scanf("%d", &tinggi);
    scanf("%d", &miring);
    alas = sqrt(miring*miring-tinggi*tinggi);
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n",tinggi);
    printf("Keliling = %d cm\n", tinggi+miring+alas);
    printf("luas = %d cm^2\n", tinggi*alas/2);

}